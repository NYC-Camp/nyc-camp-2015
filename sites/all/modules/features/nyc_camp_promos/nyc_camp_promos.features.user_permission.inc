<?php
/**
 * @file
 * nyc_camp_promos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nyc_camp_promos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any promo bean'.
  $permissions['create any promo bean'] = array(
    'name' => 'create any promo bean',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Team - Admin' => 'Team - Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any promo bean'.
  $permissions['delete any promo bean'] = array(
    'name' => 'delete any promo bean',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Team - Admin' => 'Team - Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any promo bean'.
  $permissions['edit any promo bean'] = array(
    'name' => 'edit any promo bean',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Team - Admin' => 'Team - Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any promo bean'.
  $permissions['view any promo bean'] = array(
    'name' => 'view any promo bean',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Team - Admin' => 'Team - Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
