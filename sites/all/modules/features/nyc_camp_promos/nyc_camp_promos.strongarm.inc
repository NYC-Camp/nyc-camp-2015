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
    'view_modes' => array(
      'promo_placed' => array(
        'custom_settings' => TRUE,
      ),
      'default' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'promo_homepage' => array(
        'custom_settings' => FALSE,
      ),
      'promo' => array(
        'custom_settings' => FALSE,
      ),
      'panel_pane' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision' => array(
          'weight' => '8',
        ),
        'view_mode' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'promo_placed' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__promo'] = $strongarm;

  return $export;
}
