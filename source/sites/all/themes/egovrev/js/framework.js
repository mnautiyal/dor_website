
jQuery(document).ready(function(){
						   
 //jQuery("body").append("<a target='_blank' class='ico-responsive' href='devise/responsive.html'>Check Responsive</a>");
	jQuery("#edit-search-block-form--2").attr("placeholder", "Search - Keyword, Phrase");
	jQuery(".gtranslate select").attr("id","gtranslate");			   
	jQuery("#gtranslate").before('<label class="notdisplay" for="gtranslate">Google Translate</label>');					   

	//contrast
	if(getCookie('contrast') == 0 || getCookie('contrast') == null){
	jQuery(".light").hide();
	jQuery(".dark").show();
    	}else{
	jQuery(".light").show();
	jQuery(".dark").hide();
	}
jQuery(".search-drop").css("display", "none");
jQuery(".common-right ul li ul").css("visibility", "hidden");

// Fix Header

	var num = 36; //number of pixels before modifying styles
    jQuery(window).bind('scroll', function () {
        if (jQuery(window).scrollTop() > num) {
        jQuery('.fixed-wrapper').addClass('sticky');
		
    
        } else {
        jQuery('.fixed-wrapper').removeClass('sticky');
    
        }
		
		
		
    });


	
/*	var num = 146; //number of pixels before modifying styles
            jQuery(window).bind('scroll', function () {
                if (jQuery(window).scrollTop() > num) {
                jQuery('.nav-wrapper').addClass('sticky');
				
            
                } else {
                jQuery('.nav-wrapper').removeClass('sticky');
            
                }
            });*/
			
				
	/*var num = 146; //number of pixels before modifying styles
            jQuery(window).bind('scroll', function () {
                if (jQuery(window).scrollTop() > num) {
                jQuery('.search-el').addClass('sticky');
				
            
                } else {
                jQuery('.search-el').removeClass('sticky');
            
                }
            });*/
		
	
// Mobile Nav	
jQuery('.sub-menu').append('<i class="fa fa-caret-right"></i>');
	jQuery('.toggle-nav-bar').click(function(){	
	jQuery('#nav').toggleClass('nav-open');
	});
//jQuery('#nav li').removeClass('open');  
//jQuery("#nav li").click(function(){
	//	jQuery("#nav li").removeClass('open');
	//	jQuery(this).addClass('open');
//	}); 
	
//Skip Content
jQuery('a[href^="#skipCont"]').click(function(e) {
	e.preventDefault();
	jQuery('html,body').animate({ scrollTop: jQuery(this.hash).offset().top}, 500);
	return false;
});

// Toggle Search
    	jQuery('#toggleSearch').live('focus', function() { 
		jQuery('.search-drop').show();
		jQuery('#search_key').focus();
	});

	jQuery('.ico-sitemap a').live("focus", function(e) {
    		jQuery('.search-drop').hide();
    	});

	jQuery("#toggleSearch").click(function(e) {
		jQuery(".search-drop").show();
		e.stopPropagation();
    	});

    	jQuery(document).click(function(e) {
		if (!jQuery(e.target).is('.search-drop, .search-drop *')) {
		    jQuery(".search-drop").hide();
		}
    	}); 

// Toggle social
	jQuery('#toggleSocial').click(function(){
		jQuery('.social-drop').slideToggle();
	});

// Toggle social
	jQuery('#toggleAccessibility').click(function(){
		jQuery('.access-drop').slideToggle();
	});


});


jQuery(document).ready(function(){
	jQuery("#main-menu div ul" ).attr("id","nav");
	dropdown1('nav','hover',10);
	dropdown1("header-nav", "hover", 20);
});





//Drop down menu for Keyboard accessing

function dropdown1(dropdownId, hoverClass, mouseOffDelay) { 
	if(dropdown = document.getElementById(dropdownId)) {
		var listItems = dropdown.getElementsByTagName('li');
		for(var i = 0; i < listItems.length; i++) {
			listItems[i].onmouseover = function() { this.className = addClass(this); }
			listItems[i].onmouseout = function() {
				var that = this;
				setTimeout(function() { that.className = removeClass(that); }, mouseOffDelay);
				this.className = that.className;
			}
			var anchor = listItems[i].getElementsByTagName('a');
			anchor = anchor[0];
			anchor.onfocus = function() { tabOn(this.parentNode); }
			anchor.onblur = function() { tabOff(this.parentNode); }
		}
	}
	
	function tabOn(li) {
		if(li.nodeName == 'LI') {
			li.className = addClass(li);
			tabOn(li.parentNode.parentNode);
		}
	}
	
	function tabOff(li) {
		if(li.nodeName == 'LI') {
			li.className = removeClass(li);
			tabOff(li.parentNode.parentNode);
		}
	}
	
	function addClass(li) { return li.className + ' ' + hoverClass; }
	function removeClass(li) { return li.className.replace(hoverClass, ""); }
}
















