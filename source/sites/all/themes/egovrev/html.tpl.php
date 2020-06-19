<?php
/**
 * @file
 * Returns the HTML for the basic html structure of a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728208
 */
// global $language;
// $meta_desc = variable_get('site_meta_description');
// $meta_keyword = variable_get('site_meta_keywords');
global $base_url, $language;
$kTitle = '';
if(drupal_get_title()){
    $kTitle = t(drupal_get_title());
}
$keyword = $kTitle;
if(variable_get('cmf_metakeywords')){
    if($keyword != ''){
        $keyword = $kTitle.', '.variable_get('cmf_metakeywords');
    }else{
        $keyword = variable_get('cmf_metakeywords');
    }        
}
$meta_description = '';
if(variable_get('cmf_metadescription')){
    $meta_description = variable_get('cmf_metadescription');
}

?>
<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language; ?>">
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

     <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <meta name="title" content="<?php print $head_title; ?>">
    <meta name="lang" content="<?php echo $language->language; ?>">
    <meta name="MobileOptimized" content="width" /> 
    <meta name="HandeldFriendly" content="true" />
    <meta name="keywords" content="<?php echo $keyword; ?>">
    <meta name="description" content="<?php echo $meta_description; ?>">
    <meta name="author" content="">
  <?php print $styles; ?>
  <?php print $scripts; ?>
<noscript>
  <link href="<?php print $base_url; ?>/<?php echo path_to_theme(); ?>/css/no-js.css" type="text/css" rel="stylesheet">
</noscript>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php if (isset($skip_link_text) && isset($skip_link_anchor)): ?>
    <p id="skip-link">
      <a href="#<?php print $skip_link_anchor; ?>" class="element-invisible element-focusable"><?php print $skip_link_text; ?></a>
    </p>
  <?php endif; ?>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
