<?php
/**
 * @file
 * feature_flipebook_v1.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_flipebook_v1_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_flipebook_v1_node_info() {
  $items = array(
    'flip_ebook' => array(
      'name' => t('Flip Ebook'),
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
