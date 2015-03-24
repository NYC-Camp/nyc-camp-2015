<?php
/**
 * @file
 * nyc_camp_admin_date.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nyc_camp_admin_date_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_tools',
  );

  return $permissions;
}
