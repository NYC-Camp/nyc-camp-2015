<?php
/**
 * @file
 * nyc_camp_summits.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nyc_camp_summits_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create summit content'.
  $permissions['create summit content'] = array(
    'name' => 'create summit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any summit content'.
  $permissions['delete any summit content'] = array(
    'name' => 'delete any summit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own summit content'.
  $permissions['delete own summit content'] = array(
    'name' => 'delete own summit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch summit'.
  $permissions['ds_switch summit'] = array(
    'name' => 'ds_switch summit',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any summit content'.
  $permissions['edit any summit content'] = array(
    'name' => 'edit any summit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own summit content'.
  $permissions['edit own summit content'] = array(
    'name' => 'edit own summit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished summit content'.
  $permissions['view any unpublished summit content'] = array(
    'name' => 'view any unpublished summit content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
