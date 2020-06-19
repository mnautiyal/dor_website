var se_controls = new Object(); 
se_controls.timerId;
function loadResultControls(settings){ 

	se_controls.searchServer = settings["searchServer"];
	se_controls.q = jQuery.trim(settings["q"]);
	se_controls.tId = settings["textBoxId"];

	if (settings["displayUrl"] != undefined)
		se_controls.displayUrl =  settings["displayUrl"];
	else
		se_controls.displayUrl = true;
	if (settings["displayDate"] != undefined)
		se_controls.displayDate =  settings["displayDate"];
	else
		se_controls.displayDate = true;
	if (se_controls.startDate != undefined)
		se_controls.startDate =  jQuery.trim(settings["startDate"]);
	else
		se_controls.startDate = "";

	if (se_controls.endDate != undefined)
		se_controls.endDate =   jQuery.trim(settings["endDate"]);
	else
		se_controls.endDate = "";

	if (se_controls["count"] != undefined)
		se_controls.count =  jQuery.trim(settings["count"]);
	else
		se_controls.count = "10";

	if (settings["fileType"] != undefined)
		se_controls.fileType =  jQuery.trim(settings["fileType"]);
	else
		se_controls.fileType = "ALL";

	if (settings["lang"] != undefined)
		se_controls.lang =  jQuery.trim(settings["lang"]);
	else
		se_controls.lang = "en";

	if (settings["site"] != undefined)
		se_controls.site =  jQuery.trim(settings["site"]);
	else
		se_controls.site = "";

	if (settings["like_path"] != undefined)
		se_controls.like_path =  jQuery.trim(settings["like_path"]);
	else
		se_controls.like_path = se_controls.searchServer+ "/content/images/like.png"

	if (settings["liked_path"] != undefined)
		se_controls.liked_path =  jQuery.trim(settings["liked_path"]);
	else
		se_controls.liked_path = se_controls.searchServer+ "/content/images/liked.png"

	if (settings["DisLike_path"] != undefined)
		se_controls.disLike_path =  jQuery.trim(settings["DisLike_path"]);
	else
		se_controls.disLike_path = se_controls.searchServer+ "/content/images/dislike.png"

	if (settings["liked_path"] != undefined)
		se_controls.disLiked_path =  jQuery.trim(settings["DisLiked_path"]);
	else
		se_controls.disLiked_path = se_controls.searchServer+ "/content/images/disliked.png"

	if (settings["styleSheet"] != undefined)
		se_controls.styleSheet =  jQuery.trim(settings["styleSheet"]);
	else
		se_controls.styleSheet = "default_JSON_1.0";

	if (settings["window"] != undefined)
		se_controls.window =  jQuery.trim(settings["window"]);
	else
		se_controls.window = "_blank";
	
	if(settings["resultStartRow"] != undefined)
		se_controls.resultStartRow=settings["resultStartRow"];
	else
		se_controls.resultStartRow=0;
	if(settings["requestTimeOut"] != undefined)
		se_controls.requestTimeOut=Number(settings["requestTimeOut"]);
	else
		se_controls.requestTimeOut=20000;
	
	if(se_controls.q != undefined &&  se_controls.q != "")
	{
		var urlEntry =
			"searchKeyword="+ encodeURIComponent(se_controls.q)
			+ "&currentPage=1&startRow="+se_controls.resultStartRow
			+"&count="+ encodeURIComponent(se_controls.count)
			+ "&startDate="+encodeURIComponent(se_controls.startDate)+"&endDate="+encodeURIComponent(se_controls.endDate)
			+"&fileType="+ encodeURIComponent(se_controls.fileType)
			+"&stylesheet="+encodeURIComponent(se_controls.styleSheet)+"&output=json&lang="+encodeURIComponent(se_controls.lang)+"&type=SAS";
			
			sendAjaxRequest(urlEntry);
	}
	else
	{
		if(document.getElementById("result_area") != undefined)
	       document.getElementById("result_area").innerHTML ="";
	}
}	



function errorMsg()
{
	if(se_controls.resultDisplay != 2) // If successful Result is not displayed.
	{
		document.getElementById("result_area").innerHTML	= "<div class='internalError'>Request has timed out due to slow response from search server.</div>";
		se_controls.resultDisplay=0; //Error message is displayed
	}
}
function getSearchKeyword(response){
	return response['response']['header']['searchKeyword'];
}

function htmlEncode(value){
	  return $('<div/>').text(value).html();
	}


function getNoResultErrorHTML(response){
	var query = htmlEncode(getSearchKeyword(response));
	var retValue = '<div class="noResultError">' +
	       			'Your search - ' +
                                '<span class="searchKey">' +
                                        query +
                                 '</span>'+
                                 ' did not match any documents.<br/>' +
                                 'Suggestions :' +
                                  '<ul>'+
                                        '<li>  Make sure all words are spelled correctly.</li>'+
                                        '<li>Try different keywords.</li>' +
                                        '<li>Try more general keywords.</li>' +
                                        '<li>Try removing filter option.</li>' +
                                '</ul>' +
			'</div>';
	return retValue;
}

function getInvalidFromDateError(response){
	return "<div class='Error'>"+response['response']['error']['message']+"</div>";
}
function getInvalidToDateError(response){
	return "<div class='Error'>"+response['response']['error']['message']+"</div>";
}
function getInvalidYearError(response){
	return "<div class='Error'>"+response['response']['error']['message']+"</div>";
}
function getInvalidaDateRangeError(response){
	return "<div class='Error'>"+response['response']['error']['message']+"</div>";
}
function getFutureDateError(response){
	return "<div class='Error'>"+response['response']['error']['message']+"</div>";
}
function getInternalError(response){
	return "<div class='Error'>"+response['response']['error']['message']+"</div>";
}


/* Get error message, if any along with formatting. */
function getErrorHTML(response){
	var retValue=""
	var error_message=response['response']['error'];
	if(error_message!=undefined){
		error_id=error_message['id'];
		
		switch(error_id){
			case "noResult":{
				retValue=getNoResultErrorHTML(response);
				break;
			}
			case "invalidFromDate":{
				retValue=getInvalidToDateError(response);
				break;
			}
			case "invalidToDate":{
				retValue=getInvalidYearError(response);
				break;
			}

			case "invalidYear":{
				retValue=getInvalidYearError(response);
				break;
			}
			case "invalidDateRange":{
				retValue=getInvalidaDateRangeError(response);
				break;
			}
			case "futureDate":{
				retValue=getFutureDateError(response);
				break;
			}
			default:{ //internal error
				retValue = getInternalError(response);
				break;

			}
		}//switch ends
	} 
	
	return retValue;
}
/*
function triming(str) 
	{
	if(str != undefined)
        return str.replace(/^\s+|\s+$/g,"");
    }
	*/

function sendSpellCheckedQuery(response){
	// create a url for sending all paramtes found in response header 
	//except 
	// 1. searchKeyword = should be suggested spelling
	// 2. start = 0
	var suggestion = "";
	if(response['response']['result'] != undefined && response['response']['result'] ['spellcheck'] != undefined &&
		response['response']['result'] ['spellcheck']['suggestion'] != undefined) 
		{
		
	
		urlParam=response['response']['result'] ['spellcheck']['suggestion-link'];
		//urlParam=getExtraParamOfHeader(response,urlParam);
			
		sendAjaxRequest(urlParam);
		}
}

//If url does not contain parameter which are inside header,then it add those extra parameter.
/*function getExtraParamOfHeader(response,url)
{
var header=response['response']['header'];
		jQuery.each(header,function(key,value)
		{
			
			if(url.indexOf(key) == -1)
			{
			   url += "&"+key+"="+value;	
			}
		});
		return url;
}*/


function getSpellingSuggestionHTML(response) {
	var spellCheckSuggestion = "";
	if(response['response']['result'] != undefined &&
		response['response']['result']['spellcheck'] != undefined) {

		var searchKeyword = htmlEncode(getSearchKeyword(response));
		var suggestion = htmlEncode(response['response']['result']['spellcheck']['suggestion']);
		spellCheckSuggestion  = '<div class="spellCheckerMain">' +
						'Showing Result For : ' + searchKeyword + '<br/>' +
						'<div class="spellChecker">' +
							'Did You Mean : ' +
					 		'<a class="spellCheckSuggestion" onclick="sendSpellCheckedQuery(se_controls.current_response)">' +
								suggestion +
							'</a>' +
						'</div>' +
					'</div>';
	}
	return spellCheckSuggestion;
}

function getResultsHTML(response){
	
	var resultHTML="";
		if(response['response']['result']!=undefined &&  response['response']['result']['doc'] != undefined)
		{
			resultHTML = '<div class="resultsBody">';

			for ( var i = 0; i < response['response']['result']['doc'].length; i++) {
				resultHTML += 
				"<div class='resultBody'>" +
				 	"<span class='contentType'>"+ getContentType(response,i)	+ "</span>" +
				 	"<div class='title'>"+getTitle(response,i)+"</div>" +
				 	"<span>"+ getLikeImage(response,i,se_controls.like_path) + "</span>" +
				 	"<span>"+getDisLikeImage(response,i,se_controls.disLike_path)+"</span>" +
				 	"<div class='content'>"+ getSnippet(response,i)+ "</div><div>";
				 	if(se_controls.displayUrl == true){
				 		resultHTML += "<span class='url'>"+getURL(response,i)+"</span> ";
				 	} 
				 	if(se_controls.displayDate == true){
				 		resultHTML += "<span class='docDate'>"+getDate(response,i)+"</span>";
				 	}
				 	resultHTML += "</div></div>";
			}
			resultHTML += '</div>';
		}
	return resultHTML;
}
function getResultSummaryHTML(response){
	var totalResultHTML = "";
	if(response['response']['result'] != undefined){
		var totalResults = getTotalResult(response);
		if(totalResults != 0){
			var resultStart = Number(response['response']['header']['start']);  
			var pageSize = Number(response['response']['header']['count']);
			var resultEnd = totalResults;
			if(resultStart + pageSize < totalResults ){
				resultEnd = resultStart + pageSize;
			}

			if(totalResults <= pageSize){
				//Condition where all results can fit on single page
				// the display in that case should be "Showing 3 result"
				totalResultHTML = '<div class="resultSummary">Showing ' +  totalResults + ' result</div>';
			} else {
				//resultStart counts from 0, make it 1 for display purpose
				resultStart = resultStart + 1;
				totalResultHTML = '<div class="resultSummary">Showing ' + resultStart + ' - ' + resultEnd + ' of Total ' + totalResults + ' results </div>';
			}
		}
	}
	return totalResultHTML;
}

function getPageSummaryHTML(response){

	var pageDetailsHTML = "";	
	if(response['response']['result']!=undefined &&  response['response']['result']['doc'] != undefined) {
		var currentPageNo = getCurrentPageNumber(response);
		var totalPages = getTotalPages(response);
		//TODO:take care of duplicate detection logic and how this will work
		if(totalPages > 1) {
			pageDetailsHTML = "<div class='pageDetails'> Page " + currentPageNo	+ " of " + totalPages +" Pages</div>";
		}
	}
	return pageDetailsHTML;
}

function sendPaginationRequest(response,linkOffset)
{
     urlParam=response['response']['navigation']['pageLink'][linkOffset]['params'];
   // urlParam=getExtraParamOfHeader(response,urlParam);
    sendAjaxRequest(urlParam);
}
function sendNextPaginationRequest(response)
{
   urlParam=getNextPageLink(response);
    //urlParam=getExtraParamOfHeader(response,urlParam);
    sendAjaxRequest(urlParam);

                      
}
function sendPreviousPaginationRequest(response)
{
urlParam=getPreviousPageLink(response);
    //urlParam=getExtraParamOfHeader(response,urlParam);
    sendAjaxRequest(urlParam);
}
function getNavigationHTML(response){
	var navigationHTML = "";
	if(response['response']['navigation']!=undefined  && response['response']['navigation']['pageLink'] != undefined ) {
		var currentPage = getCurrentPageNumber(response);

		navigationHTML='<div class="navigationHTML">';

		// get previous page link
		if (getPreviousPageLink(response)  != "") {
			navigationHTML += '<a onclick="sendPreviousPaginationRequest(se_controls.current_response)" class="previousLink">' 
					+ "Prev" + '</a>';
		}

		// get all other links
		// current page link should have a special class

	
		var first_page = Number(response['response']['navigation']['pageLink'][0]['pageNum']);
	        if(response['response']['navigation'] != undefined && response['response']['navigation']['pageLink'] != undefined) {
			for ( var j = 0; j < response['response']['navigation']['pageLink'].length; j++) {
				var pageNum = response['response']['navigation']['pageLink'][j]['pageNum'];

				if(pageNum == currentPage) {
					navigationHTML += '<span class="currentLink">' + pageNum + '</span>';
				} else {
					navigationHTML += '<a onclick="sendPaginationRequest(se_controls.current_response,'+(pageNum - first_page) + ')" class="navigationLink">'
						+ pageNum + '</a>';
				}
			}
		}
			
		// get next page link	
		if(getNextPageLink(response)!= "") {
			navigationHTML += '<a onclick="sendNextPaginationRequest( se_controls.current_response)" class="nextLink"> Next </a>';
		}
		navigationHTML += "</div>";
	}
	return navigationHTML;
}



function displayResult(response)
{

	/**
		structure of the page
		spelling suggestion if any.
		error-message if any
		result summary
		results
		page summary
		navigation
	 */	
if(se_controls.resultDisplay == 1)// Loading Message is currently displayed
{
		var divHTML = getSpellingSuggestionHTML(response) +
				getErrorHTML(response) +
				getResultSummaryHTML(response)+
				getResultsHTML(response) +
				getPageSummaryHTML(response) +
				getNavigationHTML(response);

			se_controls.resultDisplay=2;//Successful result is displayed.

		//TODO: this should come from configuration
		document.getElementById("result_area").innerHTML = divHTML;
		document.getElementById(se_controls.tId).value =getSearchKeyword(response); 
}
}

function captureFeedback(feedback, redirectLink, i) {
	var like="like"+i;
	var dislike="dislike"+i;
	
	var urlEntry =  se_controls.searchServer + "/userFeedback?feedback="+ feedback + "&" + redirectLink+"&site="+se_controls.site;
		
	if (feedback == '1') {
		document.getElementById(like).src = se_controls.liked_path;
		document.getElementById(dislike).src = se_controls.disLike_path;

	} else {

		document.getElementById(dislike).src = se_controls.disLiked_path;
		document.getElementById(like).src = se_controls.like_path;
	}
	$.ajax( {
		url : urlEntry,
		crossDomain : true,
		dataType : 'jsonp',
		success : function(response){
		},
		error : function(response) {
		},
		complete : function(response) {
		}
	});

}

function getSnippet(result,i)
{
return (result['response']['result']['doc'][i]['snnipetOne']);
}

function getURL(result,i)
{
return (result['response']['result']['doc'][i]['url']);
}
function getDate(result,i)
{
return (result['response']['result']['doc'][i]['date']);
}
function getNextPageLink(result)
{
if(result['response']['navigation'] != undefined && result['response']['navigation']['nextPageLink'] != undefined)
	return (result['response']['navigation']['nextPageLink']);
else 
	return "";
}

function getPreviousPageLink(result)
{
if( result['response']['navigation'] != undefined &&result['response']['navigation']['previousPageLink'] != undefined)
	return (result['response']['navigation']['previousPageLink']);
else 
	return "";
}
function getTitle(result,i)
{
return ("<a href=\" "+se_controls.searchServer+"/ClickedLink?"	+ result['response']['result']['doc'][i]['resultClickData'] + "\" target=\""+se_controls.window+"\">" + 
					result['response']['result']['doc'][i]['title']+ "</a>");
}
function getContentType(result,i)
{
	return (result['response']['result']['doc'][i]['contentType']);
}
function getLikeImage(result,i,imagePath)
{
likeUrl = result['response']['result']['doc'][i]['feedbackLike'];
return ("<img title='Recommend this result'  class='feedbackImg' src='"
					+imagePath + "' onclick=\"captureFeedback('1','"
					+ likeUrl
					+ "','"
					+ i
					+ "');\" id='like"+i+"'></img>");
}

function getDisLikeImage(result,i,imagePath)
{
disLikeUrl = result['response']['result']['doc'][i]['feedbackDislike'];
return ("<img class='feedbackImg'  src='" 
					+imagePath+ "'onclick=\"captureFeedback('-1','"
					+ disLikeUrl + "','"
					+ i	+ "');\" id='dislike"+i+"' title='Downgrade this result'></img>");
}
function getTotalPages(result)
{
	if(result['response']['result']['totalPages'] != undefined)
	   return (result['response']['result']['totalPages']);
	else
		return "";
}
function getTotalResult(result)
{
if(result['response']['result']['totalResult'] != undefined)
	return (result['response']['result']['totalResult']);
else
	return "0";
}


function getCurrentPageNumber(result)
{
	
    if(result['response']['result']['currentPage'] != undefined)
		return (Number(result['response']['result']['currentPage']) + 1);
	else 
		return "";
}

/*function getErrorMessage()
{
if(result['response']['error']['message'] != undefined)
  return (result['response']['error']['message'])
else
	return "";
}*/
/*
se_controls.resultDisplay 

When message is loading at such a time se_controls.resultDisplay=1; , timer starts and control transfer towards displayResult(response); .
When result display successfully ,se_controls.resultDisplay=2 ; 
When time out by specified duration ,check for se_controls.resultDisplay is not 2 ,then load error message.

se_controls.resultDisplay = 1 Loading Message Displayed
se_controls.resultDisplay = 2 Successful Result Displayed
se_controls.resultDisplay = 0 Error Message Displayed
*/

function sendAjaxRequest(urlEntry)
{
	
	if( document.getElementById("result_area") != null && se_controls.q != "")
  		document.getElementById("result_area").innerHTML = "Loading...";
	var urlEntry = se_controls.searchServer+ "/Search?" + urlEntry+"&site="+se_controls.site+"&callback=?";
	 se_controls.resultDisplay=1;	//Loading Message is displayed.
	 se_controls.timerId=setTimeout("errorMsg();",se_controls.requestTimeOut);
	jQuery.ajax( {
		url : urlEntry,
		crossDomain : true,
		dataType : 'jsonp',
		success : function(response, res) 
		{
			se_controls.current_response=response;
			displayResult(response);
			clearTimeout(se_controls.timerId);
		},
		error : function(response) {
			document.getElementById("result_area").innerHTML	= getInternalError(response);
			clearTimeout(se_controls.timerId);
		
		},
		complete : function(response) {
		}
	});
	
}

