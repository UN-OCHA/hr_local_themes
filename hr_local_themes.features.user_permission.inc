<?php
/**
 * @file
 * hr_local_themes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_local_themes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer local_themes vocabulary terms'.
  $permissions['administer local_themes vocabulary terms'] = array(
    'name' => 'administer local_themes vocabulary terms',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'vppr',
  );

  return $permissions;
}
