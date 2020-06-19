<?php
/**
 * @file
 * cmf_extra.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function cmf_extra_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'album_gallery';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Album Gallery';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'photo_gallery',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Grid',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'photo_gallery',
      'display' => 'block_4',
      'args' => '',
      'title' => 'List',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Album Gallery');
  t('Grid');
  t('List');

  $export['album_gallery'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'event_gallery';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Event Gallery';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'photo_gallery',
      'display' => 'block_6',
      'args' => '',
      'title' => 'Grid',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'photo_gallery',
      'display' => 'block_7',
      'args' => '',
      'title' => 'List',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Event Gallery');
  t('Grid');
  t('List');

  $export['event_gallery'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'gallery_content';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Gallery Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'photo_gallery',
      'display' => 'page',
      'args' => '',
      'title' => 'Grid',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'photo_gallery',
      'display' => 'page_3',
      'args' => '',
      'title' => 'List',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery Content');
  t('Grid');
  t('List');

  $export['gallery_content'] = $quicktabs;

  return $export;
}
