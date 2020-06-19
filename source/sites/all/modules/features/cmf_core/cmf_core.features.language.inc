<?php
/**
 * @file
 * cmf_core.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function cmf_core_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  // Exported language: hi.
  $languages['hi'] = array(
    'language' => 'hi',
    'name' => 'Hindi',
    'native' => 'हिन्दी',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'hi',
    'weight' => 0,
  );
  return $languages;
}
