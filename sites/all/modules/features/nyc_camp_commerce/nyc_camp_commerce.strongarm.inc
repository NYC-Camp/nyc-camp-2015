<?php
/**
 * @file
 * nyc_camp_commerce.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nyc_camp_commerce_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_commerce_product';
  $strongarm->value = array(
    'partnership' => 'partnership',
    'product' => 'product',
  );
  $export['uuid_features_entity_commerce_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_commerce_product';
  $strongarm->value = array(
    'partnership' => 'partnership',
    'product' => 'product',
  );
  $export['uuid_features_file_commerce_product'] = $strongarm;

  return $export;
}
