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
	se_controls.siteSpcificSuggestion =   trim(settings["siteSpcificSuggestion"]);
else
	se_controls.siteSpcificSuggestion = "true";

}
function getJSONP(url, success) 
{
    var ud = '_' + +new Date,
        script = document.createElement('script'),
        head = document.getElementsByTagName('head')[0] 
               || document.documentElement;

    window[ud] = function(data) {
        head.removeChild(script);
        success && success(data);
    };

    script.src = url.replace('callback=?', 'callback=' + ud);
    head.appendChild(script);

}
function trim(str)
{
	if(str)
		return str.replace(/^\s+|\s+$/g, "");
}
var noOfAuto = 0;
var currentLi = 1;
function autoComplete(){
			var val=document.getElementById(se_controls.tId).value;
			val=encodeURIComponent(val);
			if(val!=null && val!="")
			{
				showAutoComplete();
				se_controls.request_count = se_controls.request_count + 1;
				if(se_controls.siteSpcificSuggestion == "true")
					se_controls.urlEntry= se_controls.searchServer+"/AutoSuggestImpl?prefix="+val+"&output=json&site="+se_controls.site+"&reqc="+se_controls.request_count+ "&siteSpecificSuggestion="+se_controls.siteSpcificSuggestion+"&callback=?";
				else
					se_controls.urlEntry=se_controls.searchServer+"/AutoSuggestImpl?prefix="+val+"&output=json&reqc="+se_controls.request_count+ "&siteSpecificSuggestion="+se_controls.siteSpcificSuggestion+"&callback=?";
				getJSONP(se_controls.urlEntry, function(jsonResponse){
					var results = [];
					var currentResponse = jsonResponse['request_count'];
                    var json = jsonResponse['content'];
				var resultStr = '<ul class="ui-autocomplete ui-menu ui-widget ui-widget-content ui-corner-all" role="listbox" aria-activedescendant="ui-active-menuitem">';
				
				if(currentResponse == se_controls.request_count ){
					if(json['response']!= undefined &&   json['response']['docs'] != undefined )
					{
						se_controls.cachedResponse =  json['response']['docs'];
						noOfAuto = json['response']['docs'].length;
						for(var i=0;i<json['response']['docs'].length;i++)
						{
							results.push(json['response']['docs'][i]['suggestionPhrase']);
							var clsstr = '';
							if(i == 0){
								//clsstr = 'current';
							}
							resultStr += '<li class="ui-menu-item" role="menuitem"><a class="ui-corner-all '+clsstr+'"  onclick="linkClick(\''+json['response']['docs'][i]['suggestionPhrase']+'\')" href="javascript:;">'+json['response']['docs'][i]['suggestionPhrase']+'</a></li>';
						}

					}
					}else{
						if(se_controls.cachedResponse != undefined && se_controls.openFlag == 1)
						{
							for(var i=0;i<json['response']['docs'].length;i++)
							{
								var clsstr = '';
								if(i == 0){
									//clsstr = 'current';
								}
								results.push(json['response']['docs'][i]['suggestionPhrase']);
								resultStr += '<li class="ui-menu-item" role="menuitem"><a  href="javascript:;" class="ui-corner-all '+clsstr+'">'+json['response']['docs'][i]['suggestionPhrase']+'</a></li>';
							}
						}
					}
					resultStr += '</ul>';
					document.getElementById("auto_suggesion").innerHTML=resultStr;		
					document.getElementById('search_key').onkeydown = khandle;
					document.getElementById('auto_suggesion').firstChild.onkeydown = khandle1;					
				});
			}

		}
	
function showAutoComplete(){
		document.getElementById("auto_suggesion").style.display='block';
	}
	function hideAutoComplete(){
		document.getElementById("auto_suggesion").style.display='none';
	}
	function linkClick(value)
{
	document.getElementById('search_key').value=value;						
	callBack();
	document.getElementById("auto_suggesion").style.display='none';
}

function khandle(e) {
	e = e || event
	
	if(e.keyCode==40)
	{
		if(noOfAuto > 0 && currentLi >= 0 && currentLi < noOfAuto){
			currentLi = 1;
			currentKey = 1;
			var x=document.getElementById("auto_suggesion");  
			element=x.firstChild.firstChild.firstChild;
			element.className = element.className + " ui-state-hover"
			element.focus();
			document.getElementById("search_key").value=element.innerHTML;
			e.preventDefault();
		}
	}
}
function khandle1(e) {
	e = e || event
	if(currentKey == 1)
	{
		if (e.keyCode == 38) 
		{
			// go UP	
			upwards(e);
			
		} 
		else if (e.keyCode == 40) 
		{
			// go Down
			downwards(e);
		}
		else if (e.keyCode == 27) 
		{
			// go Esc
			hideAutoComplete();
		}
	}
	
}
function getElementsByClass(node,searchClass,tag) {
    var classElements;
    var els = node.getElementsByTagName(tag);
    for (var i = 0; i < els.length; i++)
	{
         if ( els[i].className.indexOf(searchClass) !== -1)
		 {
             classElements= els[i];
		 }
	}
    return classElements;
}

function upwards(e)
{
	if(noOfAuto > 0 && currentLi > 1){
		currentLi--;
		var t=getElementsByClass(document.getElementById("auto_suggesion"),"ui-state-hover","a");
		var tt=t.parentNode.previousSibling.firstChild;
		tt.className = tt.className + " ui-state-hover"
		t.className = "ui-corner-all";
		document.getElementById('search_key').value=tt.innerHTML;
		tt.focus();
		e.preventDefault();
	}
}
function downwards(e)
{	if(noOfAuto > 0 && currentLi < noOfAuto){
		currentLi++;
		var t=getElementsByClass(document.getElementById("auto_suggesion"),"ui-state-hover","a");
		var tt=t.parentNode.nextSibling.firstChild;
		tt.className = tt.className + " ui-state-hover"
		t.className = "ui-corner-all";			
		document.getElementById('search_key').value=tt.innerHTML;
		tt.focus();
		e.preventDefault();		
	}
}