var se_controls = new Object();

function loadSuggestionControls(settings)
{
se_controls.searchServer=settings["searchServer"];
se_controls.tId=settings["textBoxId"];
se_controls.lang=settings["lang"];
se_controls.callBackFun=settings["callBackFunction"];
se_controls.site=settings["site"];
se_controls.request_count=0;
se_controls.cachedResponse;
se_controls.openFlag=0;

if (settings["siteSpcificSuggestion"] != undefined)
	se_controls.siteSpcificSuggestion =   jQuery.trim(settings["siteSpcificSuggestion"]);
else
	se_controls.siteSpcificSuggestion = "true";

}

jQuery(document).ready(function()
{
textBoxID="#"+se_controls.tId;
jQuery(textBoxID).autocomplete({
		source:  function(request, response){
			var val=document.getElementById(se_controls.tId).value;
			val=encodeURIComponent(val);
			if(val!=null && val!="")
			{
				var urlOrSite = se_controls.site;
				if(urlOrSite.indexOf("/")!=-1){
					se_controls.site=urlOrSite.substring(0,urlOrSite.indexOf("/"));
				}
				se_controls.request_count = se_controls.request_count + 1;
				if(se_controls.siteSpcificSuggestion == "true")
					se_controls.urlEntry= se_controls.searchServer+"/AutoSuggestImpl?prefix="+val+"&output=json&site="+se_controls.site+"&reqc="+se_controls.request_count+ "&siteSpecificSuggestion="+se_controls.siteSpcificSuggestion+"&callback=?";
				else
					se_controls.urlEntry=se_controls.searchServer+"/AutoSuggestImpl?prefix="+val+"&output=json&reqc="+se_controls.request_count+ "&siteSpecificSuggestion="+se_controls.siteSpcificSuggestion+"&callback=?";

				jQuery.ajax({
					url :se_controls.urlEntry ,
					dataType: "jsonp",
					success: function( jsonResponse ){
					var results = [];
					var currentResponse = jsonResponse['request_count'];
                    var json = jsonResponse['content'];

				if(currentResponse == se_controls.request_count ){
					if(json['response']!= undefined &&   json['response']['docs'] != undefined )
					{
						se_controls.cachedResponse =  json['response']['docs'];
						for(var i=0;i<json['response']['docs'].length;i++)
						{
							results.push(json['response']['docs'][i]['suggestionPhrase']);

						}

					}

					}else{
						if(se_controls.cachedResponse != undefined && se_controls.openFlag == 1)
						{
							for(var i=0;i<json['response']['docs'].length;i++)
							{
								results.push(json['response']['docs'][i]['suggestionPhrase']);

							}
						}
					}
					response(results);
		   		}
				});
			}
//		  }
//			else
//			{
//				if(val!=null && val!=""){
//					se_controls.request_count = se_controls.request_count + 1;
//					jQuery.ajax({
//						url : se_controls.searchServer+"/AutoSuggestImpl?prefix="+val+"&output=json&reqc="+se_controls.request_count+ "&callback=?",
//						dataType: "jsonp",
//						success: function( jsonResponse ){
//							var results = [];
//							var currentResponse = jsonResponse['request_count'];
//							if(currentResponse == se_controls.request_count ){
//								if(jsonResponse['content']!= undefined &&  jsonResponse['content']['terms'] != undefined
//										&& jsonResponse['content']['terms']['autoSuggestContent']!=undefined) {
//									se_controls.cachedResponse = jsonResponse['content']['terms']['autoSuggestContent'];
//									traverse(se_controls.cachedResponse,results) ;
//								}
//							}else{
//								if(se_controls.cachedResponse != undefined && se_controls.openFlag == 1){
//									traverse(se_controls.cachedResponse,results) ;
//								}
//							}
//							response(results);
//				   		}
//					});
//
//				}
//
//			}
		},
		minLength: 2,
		select:function(event,ui){
			document.getElementById(se_controls.tId).value=ui.item.value;
			eval(se_controls.callBackFun + '()');
			//closeKeyboard();
		},
		open: function() {
			se_controls.openFlag = 1;
		},
		close: function() {
			se_controls.openFlag = 0;
		}
});
});
function traverse(jsonObj,results)
{

	    if( typeof jsonObj == "object" )
        {
	        jQuery.each(jsonObj, function(k,v)
	        {
				results.push(k);
		    });
    	}

}
