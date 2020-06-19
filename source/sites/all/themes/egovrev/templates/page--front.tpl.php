
<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
<?php
global $base_url, $language;
$egovea_theme_path = $base_url."/".drupal_get_path('theme', 'egovrev');

if($language->language == 'en') 
{ $sitelan = ''; } 
else 
{ $sitelan = $language->language.'/'; }

?>

<!-- start region header top -->
<?php if ($page['header_top']): ?>
<?php print webguidlines_help(render($page['header_top']));?>
<?php endif; ?>
<!-- start region header top -->


<section class="wrapper header-wrapper">
	<div class="container header-container">
    	<h1 class="logo">
			<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo">
                <img class="national_emblem" src="<?php print base_path() . path_to_theme(); ?>/images/emblem-dark.png" alt="<?php echo t('national emblem'); ?>" >
				<strong>राजस्व विभाग</strong> DEPARTMENT OF <span>Revenue</span>
			</a>
		</h1>
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
    <div id="flexSlider" class="flexslider">
        <?php if ($page['header']): ?>
		<?php print webguidlines_help(render($page['header']));?>
		<?php endif; ?>
    </div>
</section>


<div class="wrapper" id="skipCont"></div>
<section class="whatsNew clearfix">
  <div class="whatsNewCaption">
    <h2><?php print t("What's New"); ?><span></span></h2>
  </div>
  <div class="container">
    <div class="whatsNewLists">
      <?php print webguidlines_help(views_embed_view('home_tabs','whats_new_home_block')); ?>
      <a href="<?php echo $sitelan; ?>whats-new" class="view-all" title="<?php print t('About Whats New'); ?>"><?php print t('VIEW ALL'); ?></a> </div>
  </div>
</section>
<!--/#skipCont-->
<section id="fontSize" class="wrapper body-wrapper ">
  <div class="bg-wrapper top-bg-wrapper">
    <div class="container body-container">
      <div class="pad37 clearfix">
        
        <div class="top-left-panel clearfix">

          <div class="quickbox">
	    <!--<h2 class="padd_null home-division"><?php print t('Divisions'); ?></h2>-->
            <?php print webguidlines_help(drupal_render(menu_tree('menu-home-right-menu-'))); ?>
            <h2><?php print t('Narcotic Drugs & Psychotropic Substances'); ?></h2>
            <?php print webguidlines_help(views_embed_view('narcotic_drugs_psychotropic','home_block')); ?>
          </div>

          <div class="pressbox">

            <h2><?php print t('Press Release'); ?></h2>
            <?php print webguidlines_help(views_embed_view('press_release','press_release_home_block')); ?>
            <a href="<?php echo $sitelan; ?>press-release" class="more" title="<?php print t('About Press Release'); ?>"><?php print t('View All'); ?></a>
            <div class="bluebox clearfix">
                <div class="eServices">
                    <h1><?php print t('E-Services'); ?></h1>
                    <?php  print webguidlines_help(views_embed_view('services','service_home_block')); ?>
                    <a href="<?php echo $sitelan; ?>service-listing" class="more" title="<?php print t('About E-Services'); ?>"><?php print t('View All'); ?></a>
                </div>

                <div class="dataServices">
                    <h1><?php print t('Data and Statistics'); ?></h1>
                    <?php  print webguidlines_help(views_embed_view('data_and_statistics','home_block')); ?>
                    <a href="<?php echo $sitelan; ?>data-statistics-list" class="more" title="<?php print t('About Data and Statistics'); ?>"><?php print t('View All'); ?></a>
                </div>

            </div>  
	<!-- end blue box -->        
          </div>
	<!-- end press box -->    
        </div>
	<!-- end top-left-panel -->  
  
	<div class="minister-panel">
          <?php print webguidlines_help(views_embed_view('our_minister','minister_home_block')); ?>
        </div>

      </div>
    </div>
  </div>
</section>
<!--/.body-wrapper--> 

<!--/.banner-wrapper-->
<section class="wrapper home-btm-slider">
  <div class="container gallery-container">
    <div class="external-links">
        <div class="otherLink">
            <h1><?php print t('Other links'); ?></h1>
             <?php  print webguidlines_help(views_embed_view('links','home_block')); ?>
            <a href="<?php echo $sitelan; ?>link-list" class="more" title="<?php print t('About Other links'); ?>"><?php print t('View All'); ?></a>
        </div>
    </div>
  </div>
</section>

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
