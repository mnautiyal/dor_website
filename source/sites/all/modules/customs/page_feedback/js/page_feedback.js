( function($) {

		$(document).ready(function(){ 

		var _scroll = true, _timer = false, _floatbox = $("#contact_form"), _floatbox_opener = $(".contact-opener") ;
		_floatbox.css("right", "-300px"); //initial contact form position

		//Contact form Opener button
		_floatbox_opener.click(function(){
		if (_floatbox.hasClass('visiable')){
			_floatbox.animate({"right":"-300px"}, {duration: 300}).removeClass('visiable');
		}else{
			_floatbox.animate({"right":"0px"},  {duration: 300}).addClass('visiable');
		}
		});

		//Effect on Scroll
		/*$(window).scroll(function(){
			if(_scroll){
				_floatbox.animate({"top": "30px"},{duration: 300});
				_scroll = false;
			}if(_timer !== false){ clearTimeout(_timer); }           
				_timer = setTimeout(function(){_scroll = true; 
				_floatbox.animate({"top": "10px"},{easing: "linear"}, {duration: 500});}, 400); 
			});*/
			
			//alert($(".error"));
				if($("#edit-field-info-feedback").attr("class") == "form-textarea required error"){
					_floatbox.css("right", "0");
					$(".floating-form").addClass("visiable");
				}
			
		});

} ) ( jQuery );