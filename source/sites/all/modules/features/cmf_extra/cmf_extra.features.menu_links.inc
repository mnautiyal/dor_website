<?php
/**
 * @file
 * cmf_extra.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cmf_extra_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_public-grievance-:public-grievance
  $menu_links['main-menu_public-grievance-:public-grievance'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'public-grievance',
    'router_path' => 'public-grievance',
    'link_title' => 'Public Grievance ',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_public-grievance-:public-grievance',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_agriculture:gallery/agriculture
  $menu_links['menu-left-menu_agriculture:gallery/agriculture'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'gallery/agriculture',
    'router_path' => 'gallery/agriculture',
    'link_title' => 'Agriculture',
    'options' => array(
      'identifier' => 'menu-left-menu_agriculture:gallery/agriculture',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'menu-left-menu_gallery:gallery',
  );
  // Exported menu link: menu-left-menu_events:event
  $menu_links['menu-left-menu_events:event'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'event',
    'router_path' => 'event',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-left-menu_events:event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_festival:gallery/festival
  $menu_links['menu-left-menu_festival:gallery/festival'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'gallery/festival',
    'router_path' => 'gallery/festival',
    'link_title' => 'Festival',
    'options' => array(
      'identifier' => 'menu-left-menu_festival:gallery/festival',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'menu-left-menu_gallery:gallery',
  );
  // Exported menu link: menu-left-menu_forest:gallery/forest
  $menu_links['menu-left-menu_forest:gallery/forest'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'gallery/forest',
    'router_path' => 'gallery/forest',
    'link_title' => 'Forest',
    'options' => array(
      'identifier' => 'menu-left-menu_forest:gallery/forest',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'menu-left-menu_gallery:gallery',
  );
  // Exported menu link: menu-left-menu_gallery:gallery
  $menu_links['menu-left-menu_gallery:gallery'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-left-menu_gallery:gallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_nature:gallery/nature
  $menu_links['menu-left-menu_nature:gallery/nature'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'gallery/nature',
    'router_path' => 'gallery/nature',
    'link_title' => 'Nature',
    'options' => array(
      'identifier' => 'menu-left-menu_nature:gallery/nature',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'menu-left-menu_gallery:gallery',
  );
  // Exported menu link: menu-left-menu_past-events:past-events
  $menu_links['menu-left-menu_past-events:past-events'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'past-events',
    'router_path' => 'past-events',
    'link_title' => 'Past Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-left-menu_past-events:past-events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-left-menu_events:event',
  );
  // Exported menu link: menu-left-menu_running-events:event
  $menu_links['menu-left-menu_running-events:event'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'event',
    'router_path' => 'event',
    'link_title' => 'Running Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-left-menu_running-events:event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-left-menu_events:event',
  );
  // Exported menu link: menu-left-menu_speechesinterviews:speeches-Interviews
  $menu_links['menu-left-menu_speechesinterviews:speeches-Interviews'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'speeches-Interviews',
    'router_path' => 'speeches-Interviews',
    'link_title' => 'Speeches/Interviews',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-left-menu_speechesinterviews:speeches-Interviews',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_upcoming-events:upcoming-events
  $menu_links['menu-left-menu_upcoming-events:upcoming-events'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'upcoming-events',
    'router_path' => 'upcoming-events',
    'link_title' => 'Upcoming Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-left-menu_upcoming-events:upcoming-events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-left-menu_events:event',
  );
  // Exported menu link: menu-left-menu_wildilfe:gallery/wildilfe
  $menu_links['menu-left-menu_wildilfe:gallery/wildilfe'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'gallery/wildilfe',
    'router_path' => 'gallery/wildilfe',
    'link_title' => 'Wildilfe',
    'options' => array(
      'identifier' => 'menu-left-menu_wildilfe:gallery/wildilfe',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'menu-left-menu_gallery:gallery',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agriculture');
  t('Events');
  t('Festival');
  t('Forest');
  t('Gallery');
  t('Nature');
  t('Past Events');
  t('Public Grievance ');
  t('Running Events');
  t('Speeches/Interviews');
  t('Upcoming Events');
  t('Wildilfe');


  return $menu_links;
}
