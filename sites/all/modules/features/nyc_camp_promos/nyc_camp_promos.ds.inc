<?php
/**
 * @file
 * nyc_camp_promos.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function nyc_camp_promos_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'promo';
  $ds_view_mode->label = 'Promo';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
  );
  $export['promo'] = $ds_view_mode;

  return $export;
}
