<?php
/**
 * @file
 * cmf_extra.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cmf_extra_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cmf_extra_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function cmf_extra_image_default_styles() {
  $styles = array();

  // Exported image style: 150_150.
  $styles['150_150'] = array(
    'label' => '150*150',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 76x84.
  $styles['76x84'] = array(
    'label' => '100x100',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event.
  $styles['event'] = array(
    'label' => 'Event',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 430,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cmf_extra_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'photo_gallery' => array(
      'name' => t('Photo Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'press_release' => array(
      'name' => t('Press Release'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'public_grievance' => array(
      'name' => t('Public Grievance'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speeches_interviews' => array(
      'name' => t('Speeches/Interviews'),
      'base' => 'node_content',
      'description' => t('Speeches/Interviews/Media Briefings/Articles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webcast' => array(
      'name' => t('Webcast'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
