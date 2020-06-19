<!doctype html>

<!--[if lt IE 7 ]> <html lang="en" class="no-js ie6"> <![endif]-->
<!--[if IE 7 ]>    <html lang="en" class="no-js ie7"> <![endif]-->
<!--[if IE 8 ]>    <html lang="en" class="no-js ie8"> <![endif]-->
<!--[if IE 9 ]>    <html lang="en" class="no-js ie9"> <![endif]-->
<!--[if (gt IE 9)|!(IE)]><!--> <html lang="en" class="no-js"> <!--<![endif]-->

	<script>(function(H){H.className=H.className.replace(/\bno-js\b/,'js')})(document.documentElement)</script>
	<meta charset="utf-8">
	<style>
	.js #features {
	margin-left: -12000px; width: 100%;
    }
    </style>

	

	<!-- CSS : implied media="all" -->
	<?php
	drupal_add_css(drupal_get_path('module', 'cmf_magazines') . '/css/cmf_magazines_style.css');
	drupal_add_css(drupal_get_path('module', 'cmf_magazines') . '/wow_book/cmf_magazines_wow_book.css');
	drupal_add_css(drupal_get_path('module', 'cmf_magazines') . '/css/cmf_magazines_preview.css');
	
    global $base_url;
    $modulepath = $base_url . '/'.drupal_get_path('module', 'cmf_magazines');
    
	?>

	
	<link href='http://fonts.googleapis.com/css?family=News+Cycle' rel='stylesheet' type='text/css'>
	<!-- All JavaScript at the bottom, except for Modernizr which enables HTML5 elements & feature detects -->
	<?php
	drupal_add_js(drupal_get_path('module', 'cmf_magazines') . '/js/libs/modernizr-1.6.min.js');
	?>


<body>
	    <?php if ($rows): ?>
		<div id="container">
			<nav id="e_book">
			<ul>
			<li><a id='first'     href="#" title='goto first page'   >First page</a></li>
			<li><a id='back'      href="#" title='go back one page'  >Back</a></li>
			<li><a id='next'      href="#" title='go foward one page'>Next</a></li>
			<li><a id='last'      href="#" title='goto last page'    >last page</a></li>
			<li><a id='zoomin'    href="#" title='zoom in'           >Zoom In</a></li>
			<li><a id='zoomout'   href="#" title='zoom out'          >Zoom Out</a></li>
			<li><a id='slideshow' href="#" title='start slideshow'   >Slide Show</a></li>

			</ul>
			</nav>
			<div id="main">
			<!--<img id='click_to_open' src="images/click_to_open.png" alt='click to open' /> -->
			<?php
			GLOBAL $base_url;
			$imagepath = $base_url.'/sites/default/files/';
			//echo "<pre>";
			//print_r($tempdata);
			//die;
			?>
			<div id='features'>
			<?php
			print $rows;
			?>

	        </div> <!-- features -->

			</div>

		</div>

     <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>
  
  

   <?php if ($footer): ?>
    <div class="view-footer" style="float:right">
      <?php print $footer; ?>
    </div>
     <div class="lastupdate_date"><?php  echo get_node_last_update(); ?></div>   
  <?php endif; ?>
  
</div>


	
	
    <?php
    drupal_add_js(drupal_get_path('module', 'cmf_magazines') . '/wow_book/wow_book.min.js');
    ?>
	
	

	<style>
	</style>
	<script type="text/javascript">
	( function($) {
		$(document).ready(function() {

         
			$('#features').wowBook({
				 height : 580
				,width  : 800
				,centeredWhenClosed : true
				,hardcovers : true
				,turnPageDuration : 1000
				,numberedPages : [1,-2]
				,controls : {
						zoomIn    : '#zoomin',
						zoomOut   : '#zoomout',
						next      : '#next',
						back      : '#back',
						first     : '#first',
						last      : '#last',
						slideShow : '#slideshow',
						flipSound : '#flipsound'
											}
			}).css({'display':'none', 'margin':'auto'}).fadeIn(1000);

			$(".cover").click(function(){
				$.wowBook("#features").advance();
			});

		});
	} ) ( jQuery );	
	</script>

	
	<?php
	drupal_add_js(drupal_get_path('module', 'cmf_magazines') . '/js/plugins.js');
	drupal_add_js(drupal_get_path('module', 'cmf_magazines') . '/js/script.js');
	?>
	
</body>
</html>
