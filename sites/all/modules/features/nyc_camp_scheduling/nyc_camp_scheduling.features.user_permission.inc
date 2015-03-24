<?php
/**
 * @file
 * nyc_camp_scheduling.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nyc_camp_scheduling_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create building content'.
  $permissions['create building content'] = array(
    'name' => 'create building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create conference content'.
  $permissions['create conference content'] = array(
    'name' => 'create conference content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create room content'.
  $permissions['create room content'] = array(
    'name' => 'create room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create schedule_time_slot content'.
  $permissions['create schedule_time_slot content'] = array(
    'name' => 'create schedule_time_slot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create venue content'.
  $permissions['create venue content'] = array(
    'name' => 'create venue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any building content'.
  $permissions['delete any building content'] = array(
    'name' => 'delete any building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any conference content'.
  $permissions['delete any conference content'] = array(
    'name' => 'delete any conference content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any room content'.
  $permissions['delete any room content'] = array(
    'name' => 'delete any room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any schedule_time_slot content'.
  $permissions['delete any schedule_time_slot content'] = array(
    'name' => 'delete any schedule_time_slot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any venue content'.
  $permissions['delete any venue content'] = array(
    'name' => 'delete any venue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own building content'.
  $permissions['delete own building content'] = array(
    'name' => 'delete own building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own conference content'.
  $permissions['delete own conference content'] = array(
    'name' => 'delete own conference content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own room content'.
  $permissions['delete own room content'] = array(
    'name' => 'delete own room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own schedule_time_slot content'.
  $permissions['delete own schedule_time_slot content'] = array(
    'name' => 'delete own schedule_time_slot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own venue content'.
  $permissions['delete own venue content'] = array(
    'name' => 'delete own venue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch building'.
  $permissions['ds_switch building'] = array(
    'name' => 'ds_switch building',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch conference'.
  $permissions['ds_switch conference'] = array(
    'name' => 'ds_switch conference',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch room'.
  $permissions['ds_switch room'] = array(
    'name' => 'ds_switch room',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch schedule_time_slot'.
  $permissions['ds_switch schedule_time_slot'] = array(
    'name' => 'ds_switch schedule_time_slot',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch venue'.
  $permissions['ds_switch venue'] = array(
    'name' => 'ds_switch venue',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any building content'.
  $permissions['edit any building content'] = array(
    'name' => 'edit any building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any conference content'.
  $permissions['edit any conference content'] = array(
    'name' => 'edit any conference content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any room content'.
  $permissions['edit any room content'] = array(
    'name' => 'edit any room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any schedule_time_slot content'.
  $permissions['edit any schedule_time_slot content'] = array(
    'name' => 'edit any schedule_time_slot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any venue content'.
  $permissions['edit any venue content'] = array(
    'name' => 'edit any venue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own building content'.
  $permissions['edit own building content'] = array(
    'name' => 'edit own building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own conference content'.
  $permissions['edit own conference content'] = array(
    'name' => 'edit own conference content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own room content'.
  $permissions['edit own room content'] = array(
    'name' => 'edit own room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own schedule_time_slot content'.
  $permissions['edit own schedule_time_slot content'] = array(
    'name' => 'edit own schedule_time_slot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own venue content'.
  $permissions['edit own venue content'] = array(
    'name' => 'edit own venue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished building content'.
  $permissions['view any unpublished building content'] = array(
    'name' => 'view any unpublished building content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished conference content'.
  $permissions['view any unpublished conference content'] = array(
    'name' => 'view any unpublished conference content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished room content'.
  $permissions['view any unpublished room content'] = array(
    'name' => 'view any unpublished room content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
