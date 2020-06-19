<?php
/**
 * @file
 * page_feedback_node_1.features.inc
 */

/**
 * Implements hook_node_info().
 */
function page_feedback_node_1_node_info() {
  $items = array(
    'page_feedback' => array(
      'name' => t('Page Feedback'),
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
