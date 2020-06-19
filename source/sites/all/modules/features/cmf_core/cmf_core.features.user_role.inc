<?php
/**
 * @file
 * cmf_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cmf_core_user_default_roles() {
  $roles = array();

  // Exported role: Creater.
  $roles['Creater'] = array(
    'name' => 'Creater',
    'weight' => 3,
  );

  // Exported role: Publisher.
  $roles['Publisher'] = array(
    'name' => 'Publisher',
    'weight' => 4,
  );

  // Exported role: Site Manager.
  $roles['Site Manager'] = array(
    'name' => 'Site Manager',
    'weight' => 5,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
