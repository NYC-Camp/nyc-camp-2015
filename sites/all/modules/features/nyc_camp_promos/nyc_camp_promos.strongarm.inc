<?php
/**
 * @file
 * nyc_camp_promos.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nyc_camp_promos_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__promo';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision' => array(
          'weight' => '8',
        ),
        'view_mode' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_bean__promo'] = $strongarm;

  return $export;
}
