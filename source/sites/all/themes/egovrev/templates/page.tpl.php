<!-- start region header top -->
<?php if ($page['header_top']): ?>
<?php print webguidlines_help(render($page['header_top']));?>
<?php endif; ?>
<!-- start region header top -->

<?php 
	global $base_url;
	$theme_path = drupal_get_path('theme','egovrev');
?>
<section class="wrapper header-wrapper">
	<div class="container header-container">
    	<div class="logo">
		  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo">
           <img class="national_emblem" src="<?php print base_path() . path_to_theme(); ?>/images/emblem-dark.png" alt="<?php echo t('national emblem'); ?>" >
		   <strong>राजस्व विभाग</strong> DEPARTMENT OF <span>Revenue</span>
		  </a>
		</div>
        <a class="toggle-nav-bar" href="javascript:void(0);">
        <span class="menu-icon"></span>
        <span class="menu-text">Menu</span>
    </a>
        <div class="header-right clearfix">
            <div class="right-content clearfix">
                <div class="float-element">
                	<a class="mii-logo" title="Make In India, External Link that opens in a new window" href="http://www.makeinindia.com/" target="_blank"></a>
                    <a class="sw-logo swachhBharat" title="Swachh Bharat, External Link that opens in a new window" href="https://swachhbharat.mygov.in/" target="_blank"></a>
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
				print webguidlines_help(render($block['content']));
			?>
		  </div> <!-- /#main-menu -->
		<?php endif; ?>
    </div>
</nav>
<!--Main nav ends here-->

<section class="wrapper banner-wrapper">
    <img src="<?php echo $base_url.'/'.$theme_path;?>/images/banner/inner-banner.jpg" alt="Inner Banner">
</section>
<div class="wrapper" id="skipCont"></div><!--/#skipCont-->

<!--body content start here-->


<section id="fontSize" class="wrapper body-wrapper ">
    <div class="bg-wrapper inner-wrapper">
        <div class="container body-container">
             <?php if ($page['highlighted']): ?>
                    <?php print render($page['highlighted']); ?>
            <?php endif; ?>
		<?php if ($messages): ?>
			<div id="messages">
				<div class="section clearfix">
				<?php print filter_xss(html_entity_decode($messages)); ?>
				</div>
			</div> <!-- /.section, /#messages -->
		<?php endif; ?>
				
				<div class="">
				
                <div class="inner-content sm-height"> 
                    <?php if ($title): ?>                   
                          <h1><?php print t($title); ?></h1>
                    <?php endif; ?>
                    <div class="color-border"></div>
                    <?php print render($tabs); ?>
                    <?php print webguidlines_help(render($page['content'])); ?>
                </div>
        
                <div class="left-menu sm-height">
                    <?php 
			print webguidlines_help(render($page['inner_left_menu']));
                        //print drupal_render(menu_tree('menu-innerpage-menu')); 
                    ?>
                </div>
            <div style="clear:both"></div>
            </div>
        </div>
    </div>
<div style="clear:both"></div>
</section>



<!--body content ends here-->

<!-- carousal banner start here -->
<?php if ($page['footer_top']): ?>
<section class="wrapper carousel-wrapper">
	<div class="container carousel-container">
    	<div id="flexCarousel" class="flexslider carousel">
			<?php print webguidlines_help(render($page['footer_top'])); ?>
		</div>
    </div>
</section>
<?php endif; ?>
<!-- carousal banner end here -->



<!-- start region footer -->
<?php if ($page['footer']): ?>
<?php print webguidlines_help(render($page['footer']));?>
<?php endif; ?>
<!-- start region footer -->


