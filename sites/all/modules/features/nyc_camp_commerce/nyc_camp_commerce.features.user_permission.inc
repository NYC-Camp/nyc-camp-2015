<?php
/**
 * @file
 * nyc_camp_commerce.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nyc_camp_commerce_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'show format selection for commerce_customer_profile'.
  $permissions['show format selection for commerce_customer_profile'] = array(
    'name' => 'show format selection for commerce_customer_profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for commerce_line_item'.
  $permissions['show format selection for commerce_line_item'] = array(
    'name' => 'show format selection for commerce_line_item',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for commerce_order'.
  $permissions['show format selection for commerce_order'] = array(
    'name' => 'show format selection for commerce_order',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for commerce_product'.
  $permissions['show format selection for commerce_product'] = array(
    'name' => 'show format selection for commerce_product',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  return $permissions;
}
