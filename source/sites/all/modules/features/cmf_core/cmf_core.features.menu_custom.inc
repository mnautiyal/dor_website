<?php
/**
 * @file
 * cmf_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cmf_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-content-manager-menu.
  $menus['menu-content-manager-menu'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'title' => 'Content Manager Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-home-right-menu-.
  $menus['menu-home-right-menu-'] = array(
    'menu_name' => 'menu-home-right-menu-',
    'title' => 'Home Right Menu ',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-left-menu.
  $menus['menu-left-menu'] = array(
    'menu_name' => 'menu-left-menu',
    'title' => 'Left Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Content Manager Menu');
  t('Footer Menu');
  t('Home Right Menu ');
  t('Left Menu');
  t('Main menu');
  t('Management');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');


  return $menus;
}
