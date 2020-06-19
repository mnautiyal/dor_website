<!-- start region header top -->
<?php if ($page['header_top']): ?>
<?php print render($page['header_top']);?>
<?php endif; ?>
<!-- start region header top -->

<?php 
	global $base_url;
	$theme_path = drupal_get_path('theme','egovrev');
?>
<section class="wrapper header-wrapper">
	<div class="container header-container">
    	<h1 class="logo"><a href="#"><strong>आर्थिक कार्य विभाग</strong> DEPARTMENT OF <span>REVENUE</span></a></h1>
        <a class="toggle-nav-bar" href="javascript:void(0);">
        <span class="menu-icon"></span>
        <span class="menu-text">Menu</span>
    </a>
        <div class="header-right clearfix">
            <div class="right-content clearfix">
                <div class="float-element">
                	<a class="mii-logo" title="Make In India, External Link that opens in a new window" href="http://www.makeinindia.com/" target="_blank"> <img src="<?php echo $base_url."/".$theme_path;?>/images/make-in-india-header.png"> </a>
                    <a class="sw-logo swachhBharat" title="Swachh Bharat, External Link that opens in a new window" href="https://swachhbharat.mygov.in/" target="_blank"><img src="<?php echo $base_url."/".$theme_path;?>/images/swach-bharat.png"></a>
                </div>
            </div>
        </div>
    </div>
</section><!--/.header-wrapper-->


<!--Main nav start here-->
<nav class="wrapper nav-wrapper">
	<div class="container nav-container">
	    <?php if ($main_menu): ?>
		  <div id="main-menu" class="navigation" tabindex="-1">
			<?php 
				$block = module_invoke('menu_block', 'block_view', 2);
				print render($block['content']);
			?>
		  </div> <!-- /#main-menu -->
		<?php endif; ?>
    </div>
</nav>
<!--Main nav ends here-->

<section class="wrapper banner-wrapper">
    <img src="<?php echo $base_url."/".$theme_path;?>/images/banner/inner-banner.jpg">
</section>
<div class="wrapper" id="skipCont"></div><!--/#skipCont-->

<!--body content start here-->


<section id="fontSize" class="wrapper body-wrapper ">
    <div class="bg-wrapper inner-wrapper">
        <div class="container body-container">
        
             <ul class="breadcam">
                <li><a href="home.html">Home </a></li>
                <li><a href="#">About Us </a></li>
                <li class="current">Economic Division &amp; IES</li>
            </ul> 

             <?php if ($page['highlighted']): ?>
                    <?php print html_entity_decode(render($page['highlighted'])); ?>
            <?php endif; ?>
            
            <div class="">
            
                <div class="inner-content"> 
                    <?php if ($title): ?>                   
                          <h2><?php print t($title); ?></h2>
                    <?php endif; ?>
                    <div class="color-border"></div>
                    <?php print render($tabs); ?>
                    <?php print cmf_preset_external_links(render($page['content'])); ?>
                </div>
        
                <div class="left-menu">
                
                    <ul>
                        <li class="active"><a href="#">Organization Setup</a></li>
                        <li><a href="#">Who's Who</a>
                            <ul>
                                <li><a href="#">Finance Ministerexternal link</a></li>
                                <li><a href="#">Minister of Stateexternal link</a></li>
                                <li><a href="#">FM since Independence</a></li>
                                <li><a href="#">MOS since Independence</a></li>
                                <li><a href="#">Revenue Secretary</a></li>
                                <li><a href="#">RS since Independence</a></li>
                                
                            </ul>
                        </li>
                        <li><a href="#">Allocation of work</a>
                        
                            <ul>
                                <li><a href="#">Revenue Headquarters</a></li>
                                <li><a href="#">Central Board of Direct Taxes</a></li>
                                <li><a href="#">Central Board of Excise & Customs</a></li>
                                
                            </ul>
                        
                        </li>
                        
                        
                        
                    </ul>
                    
                
                </div>
            
            </div>
        
        </div>
    </div>
    
    
    
    

</section>



<!--body content ends here-->

<!-- carousal banner start here -->
<?php if ($page['footer_top']): ?>
<section class="wrapper carousel-wrapper">
	<div class="container carousel-container">
    	<div id="flexCarousel" class="flexslider carousel">
			<?php print render($page['footer_top']);?>
			<?php //print cmf_preset_external_links(render($page['footer_top'])); ?>
		</div>
    </div>
</section>
<?php endif; ?>
<!-- carousal banner end here -->



<!-- start region footer -->
<?php if ($page['footer']): ?>
<?php print render($page['footer']);?>
<?php endif; ?>
<!-- start region footer -->

<script type="text/javascript">
$(window).load(function(){
// Slider						
 $('#flexSlider').flexslider({
        animation: "slide",
		controlNav: false,
        start: function(slider){
        $('body').removeClass('loading');
        }
 });
  $('#flexSlider1').flexslider({
        animation: "slide",
		controlNav: false,
        start: function(slider){
        $('body').removeClass('loading');
        }
 });
    $('#flexSlider2').flexslider({
        animation: "slide",
		controlNav: false,
        start: function(slider){
        $('body').removeClass('loading');
        }
 });
 
 
  $('#contSlider1').flexslider({
        animation: "slide",
		controlNav: false,
        start: function(slider){
        $('body').removeClass('loading');
        }
 });
  
    $('#contSlider2').flexslider({
        animation: "slide",
		controlNav: false,
        start: function(slider){
        $('body').removeClass('loading');
        }
 });
 
 
 
// Carousel						
 $('#flexCarousel').flexslider({
        animation: "slide",
        animationLoop: false,
        itemWidth: 200,
        itemMargin: 5,
        minItems: 2,
        maxItems: 6,
		slideshow: 1,
		move: 1,
		controlNav: false,
        start: function(slider){
          $('body').removeClass('loading');
		  if (slider.pagingCount === 1) slider.addClass('flex-centered');
        }
      });
 
  $('#flexCarousel1').flexslider({
        animation: "slide",
        animationLoop: false,
        itemWidth: 168,
        itemMargin: 20,
        minItems:1,
        maxItems: 4,
		slideshow: 1,
		move: 1,
		controlNav: false,
        start: function(slider){
          $('body').removeClass('loading');
		  //if (slider.pagingCount === 1) slider.addClass('flex-centered');
        }
      });
 
 // Gallery
      $('#galleryCarousel').flexslider({
        animation: "fade",
        controlNav: "thumbnails",
        start: function(slider){
          $('body').removeClass('loading');
        }
      });
  });
</script>
<script>
$(document).ready(function(){
    $('figure img').ma5gallery({
        preload:true
    });
});
</script>
