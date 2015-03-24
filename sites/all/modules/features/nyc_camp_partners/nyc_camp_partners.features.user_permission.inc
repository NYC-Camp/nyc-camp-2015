<?php
/**
 * @file
 * nyc_camp_partners.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nyc_camp_partners_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer commerce_stock settings'.
  $permissions['administer commerce_stock settings'] = array(
    'name' => 'administer commerce_stock settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'commerce_stock',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'make rule based changes to commerce_stock'.
  $permissions['make rule based changes to commerce_stock'] = array(
    'name' => 'make rule based changes to commerce_stock',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'commerce_stock',
  );

  return $permissions;
}
