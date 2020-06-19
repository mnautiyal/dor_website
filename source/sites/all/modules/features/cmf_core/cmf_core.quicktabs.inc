<?php
/**
 * @file
 * cmf_core.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function cmf_core_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'home_content';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Home Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'home_tabs',
      'display' => 'block',
      'args' => '',
      'title' => 'Whats New',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'event',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Events',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'press_release',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Press Releases',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'announcement',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Announcements',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'tender',
      'display' => 'block',
      'args' => '',
      'title' => 'Tenders',
      'weight' => '-96',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Announcements');
  t('Events');
  t('Home Content');
  t('Press Releases');
  t('Tenders');
  t('Whats New');

  $export['home_content'] = $quicktabs;

  return $export;
}
