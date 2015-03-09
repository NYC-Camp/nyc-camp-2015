<?php
/**
 * @file
 * nyc_camp_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nyc_camp_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in audiences'.
  $permissions['delete terms in audiences'] = array(
    'name' => 'delete terms in audiences',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in drupal_software'.
  $permissions['delete terms in drupal_software'] = array(
    'name' => 'delete terms in drupal_software',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in interests'.
  $permissions['delete terms in interests'] = array(
    'name' => 'delete terms in interests',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in skill_levels'.
  $permissions['delete terms in skill_levels'] = array(
    'name' => 'delete terms in skill_levels',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tracks'.
  $permissions['delete terms in tracks'] = array(
    'name' => 'delete terms in tracks',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in audiences'.
  $permissions['edit terms in audiences'] = array(
    'name' => 'edit terms in audiences',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in drupal_software'.
  $permissions['edit terms in drupal_software'] = array(
    'name' => 'edit terms in drupal_software',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in interests'.
  $permissions['edit terms in interests'] = array(
    'name' => 'edit terms in interests',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in skill_levels'.
  $permissions['edit terms in skill_levels'] = array(
    'name' => 'edit terms in skill_levels',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tracks'.
  $permissions['edit terms in tracks'] = array(
    'name' => 'edit terms in tracks',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
