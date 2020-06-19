<?php

/**
 * Add body classes if certain regions have content.
 */
function egovrev_preprocess_html(&$variables) {
  if (!empty($variables['page']['featured'])) {
    $variables['classes_array'][] = 'featured';
  }

  if (!empty($variables['page']['triptych_first'])
    || !empty($variables['page']['triptych_middle'])
    || !empty($variables['page']['triptych_last'])) {
    $variables['classes_array'][] = 'triptych';
  }

  if (!empty($variables['page']['footer_firstcolumn'])
    || !empty($variables['page']['footer_secondcolumn'])
    || !empty($variables['page']['footer_thirdcolumn'])
    || !empty($variables['page']['footer_fourthcolumn'])) {
    $variables['classes_array'][] = 'footer-columns';
  }

  // Add conditional stylesheets for IE
  drupal_add_css(path_to_theme() . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));
}

/**
 * Override or insert variables into the page template for HTML output.
 */
function egovrev_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}
function egovrev_html_head_alter(&$head_elements) {

unset($head_elements['system_meta_generator']);
}
/**
 * Override or insert variables into the page template.
 */
function egovrev_process_page(&$variables) {


  //print_r($variables);
  //exit();


  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
  if (!empty($variables['title_suffix']['add_or_remove_shortcut']) && $variables['title']) {
    // Add a wrapper div using the title_prefix and title_suffix render elements.
    $variables['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );
    $variables['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );
    // Make sure the shortcut link is the first item in title_suffix.
    $variables['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }
}

/**
 * Implements hook_preprocess_maintenance_page().
 */
function egovrev_preprocess_maintenance_page(&$variables) {
  // By default, site_name is set to Drupal if no db connection is available
  // or during site installation. Setting site_name to an empty string makes
  // the site and update pages look cleaner.
  // @see template_preprocess_maintenance_page
  if (!$variables['db_is_active']) {
    $variables['site_name'] = '';
  }
  drupal_add_css(drupal_get_path('theme', 'bartik') . '/css/maintenance-page.css');
}

/**
 * Override or insert variables into the maintenance page template.
 */
function egovrev_process_maintenance_page(&$variables) {
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
}

/**
 * Override or insert variables into the node template.
 */
function egovrev_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
}

/**
 * Override or insert variables into the block template.
 */
function egovrev_preprocess_block(&$variables) {
  // In the header region visually hide block titles.
  if ($variables['block']->region == 'header') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Implements theme_menu_tree().
 */
function egovrev_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_field__field_type().
 */
function egovrev_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '"' . $variables['attributes'] .'>' . $output . '</div>';

  return $output;
}


function egovrev_preprocess_page(&$variables){
  $search_form = drupal_get_form('search_form');
  $search_box = drupal_render($search_form);
  $variables['search_box'] = $search_box;
  //drupal_add_js(drupal_get_path('theme', 'egovrev') . '/js/custom.js');
  if(drupal_is_front_page()) {
	$title = t('Home');
	drupal_set_title($title);
  }
	$url = $_SERVER['HTTP_HOST'] . request_uri();
	$header = drupal_get_http_header('status'); 
	if(preg_match("/[`#^*()\[\]{}\|\\;\"\'<,>]/", $url) > 0) { 
		//drupal_not_found();
		drupal_goto('/');
	}
}

function egovrev_theme() {
  $items = array();
    
  $items['user_login'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'egovrev') . '/templates',
    'template' => 'user-login',
    'preprocess functions' => array(
       'egovrev_preprocess_user_login'
    ),
  );
  $items['user_register_form'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'egovrev') . '/templates',
    'template' => 'user-register-form',
    'preprocess functions' => array(
      'egovrev_preprocess_user_register_form'
    ),
  );
  $items['user_pass'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'egovrev') . '/templates',
    'template' => 'user-pass',
    'preprocess functions' => array(
      'egovrev_preprocess_user_pass'
    ),
  );
  return $items;
}

/**
 * Return a themed breadcrumb trail.
 *
 * @param $variables
 *   - title: An optional string to be used as a navigational heading to give
 *     context for breadcrumb links to screen-reader users.
 *   - title_attributes_array: Array of HTML attributes for the title. It is
 *     flattened into a string within the theme function.
 *   - breadcrumb: An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
function egovrev_easy_breadcrumb($variables) {    
  
  $breadcrumb = $variables['breadcrumb'];
  $segments_quantity = $variables['segments_quantity'];
  $separator = ' / ';

  $html = '';

  if ($segments_quantity > 0) {    
    
    $html .= '<ul class="breadcam">';
    
    for ($i = 0, $s = $segments_quantity - 1; $i < $segments_quantity; ++$i) {
			$it = $breadcrumb[$i];
      $content = decode_entities($it['content']);      
			if (isset($it['url'])) {
				$html .= l(t($content), $it['url'], array('attributes' => array('class' => $it['class'])));
			} else {
        $class = implode(' ', $it['class']);
				$html .= '<li class="' . $class . '">'	. $content . '</li>';
			}
			if ($i < $s) {
				$html .= '<span class="easy-breadcrumb_segment-separator"> ' . $separator . ' </span>';
			}
    }
    
    $html .= '</ul>';
  }

  return $html;
}*/


function egovrev_breadcrumb($variables) {
    $breadcrumb = array_unique($variables['breadcrumb']);
	//echo "<pre>";
	//print_r($variables);
	//echo "</pre>";
  if (!empty($breadcrumb)) {
    // Adding the title of the current page to the breadcrumb.
    $breadcrumb[] = drupal_get_title();
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $output .= '<div class="breadcam">' . implode(' / ', $breadcrumb) . '</div>';
    return $output;
  }
}

/*function crumbs_egovrev_breadcrumb($variables) {
	$breadcrumb = $variables['breadcrumb'];
	echo "<pre>";
	print_r($breadcrumb);
	echo "</pre>";
	exit;
}*/




//breadcrumb fix
/*function egovrev_menu_breadcrumb_alter(&$active_trail, $item) {
    global $language ;
    $lang_name = $language->language;
    foreach (array_keys($active_trail) as $key) {
    if(array_key_exists('mlid',$active_trail[$key]) ){
        $translatedValue = i18n_string_translate(array('menu', 'item', $active_trail[$key]['mlid'], 'title'), $active_trail[$key]['title'],      array('langcode' => $lang_name, 'sanitize' => FALSE));
        $active_trail[$key]['title'] = $translatedValue;
      }
     }
} */


// generic file formatter
function egovrev_file_link($variables) {
	//echo '<pre>';
	//print_r($variables);
	//echo '</pre>';

	global $base_url, $base_path;
	
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];
  $pdf_img_path = $base_path . drupal_get_path('module', 'file') .'/icons/application-pdf.png';


  $pdf_file_size = format_size($variables['file']->filesize);
  $url = file_create_url($file->uri);
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  return '<span class="file">' . $icon_directory . ' ' . l($link_text, $url, $options) . '<label style="display: inline"> ( '.$pdf_file_size.' ) </label> <img src="'.$pdf_img_path.'" alt="" style="vertical-align: middle"></span>';
}




function egovrev_file_formatter_table($variables) {
  global $base_url, $base_path;
  if ($node = menu_get_object()) {
    $nid = $node->nid;
  }
  $node_title = node_load($nid)->title;
  $pdf_img_path = $base_path . drupal_get_path('module', 'file') .'/icons/application-pdf.png';
  $header = array(t('Title'), t('Details'), t('Published Date'));
  $rows = array();
  foreach ($variables['items'] as $delta => $item) {
	if(!empty($item['description'])) { $pdftitle = $item['description']; } else { $pdftitle = '-'; }
    $rows[] = array(
      $pdftitle,
      //theme('file_link', array('file' => (object) $item)),
      '<a title="pdf file that open in new window" href="'.file_create_url($item['uri']).'">'.t("Download").' ('.format_size($item['filesize']).') <img src="'.$pdf_img_path.'" alt="" style="vertical-align: middle"></a>',
      format_date($item['timestamp'], 'short'),
    );
  }

  return empty($rows) ? '' : theme('table', array('caption' => $node_title, 'header' => $header, 'rows' => $rows));
}


/*function egovrev_status_messages($variables) {
  $display = drupal_get_messages($variables['display']);
  $output = '';
	if(strpos($display['error'][0], 'unserialize():') !== FALSE) {
		unset($display['error']);
		foreach ($display as $type => $messages) {
		    $output .= "<div class=\"messages $type\">\n";
		    if (!empty($status_heading[$type])) {
		      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
		    }
		    if (count($messages) > 1) {
		      $output .= " <ul>\n";
		      foreach ($messages as $message) {
			$output .= '  <li>' . $message . "</li>\n";
		      }
		      $output .= " </ul>\n";
		    }
		    else {
		      $output .= reset($messages);
		    }
		    $output .= "</div>\n";
		  }
	} else {
		  $status_heading = array(
		    'status' => t('Status message'),
		    'error' => t('Error message'),
		    'warning' => t('Warning message'),
		  );
		  foreach ($display as $type => $messages) {
		    $output .= "<div class=\"messages $type\">\n";
		    if (!empty($status_heading[$type])) {
		      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
		    }
		    if (count($messages) > 1) {
		      $output .= " <ul>\n";
		      foreach ($messages as $message) {
			$output .= '  <li>' . $message . "</li>\n";
		      }
		      $output .= " </ul>\n";
		    }
		    else {
		      $output .= reset($messages);
		    }
		    $output .= "</div>\n";
		  }
	}
	return $output;
}*/



function egovrev_css_alter(&$css) {
  $exclude = array(
    'modules/system/system.menus.css' => FALSE,
    'sites/all/modules/customs/cmf_content/assets/css/base-responsive.css' => FALSE,
    'sites/all/modules/customs/cmf_content/assets/css/change.css' => FALSE,
    'sites/all/modules/customs/cmf_content/assets/js/framework.js' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
}
