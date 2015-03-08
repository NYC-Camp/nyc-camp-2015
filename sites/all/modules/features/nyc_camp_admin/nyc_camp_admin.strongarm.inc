<?php
/**
 * @file
 * nyc_camp_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nyc_camp_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__fieldable_panels_pane';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__fieldable_panels_pane'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_fieldable_panels_pane';
  $strongarm->value = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
  );
  $export['uuid_features_entity_fieldable_panels_pane'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_fieldable_panels_pane';
  $strongarm->value = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
  );
  $export['uuid_features_file_fieldable_panels_pane'] = $strongarm;

  return $export;
}
