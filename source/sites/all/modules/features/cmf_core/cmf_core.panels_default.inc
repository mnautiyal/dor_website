<?php
/**
 * @file
 * cmf_core.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function cmf_core_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_quicktab';
  $mini->category = '';
  $mini->admin_title = 'Home Quicktab';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a806f4c-e5fb-4df1-ae34-5dbe93a5c4a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7ca0fd69-61b7-497f-b79f-eb30af8d4cb5';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-home_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7ca0fd69-61b7-497f-b79f-eb30af8d4cb5';
    $display->content['new-7ca0fd69-61b7-497f-b79f-eb30af8d4cb5'] = $pane;
    $display->panels['middle'][0] = 'new-7ca0fd69-61b7-497f-b79f-eb30af8d4cb5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['home_quicktab'] = $mini;

  return $export;
}
