<?php
/**
 * @file
 * nyc_camp_social.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nyc_camp_social_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_add_this'
  $field_bases['field_add_this'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_add_this',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addthis',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'addthis',
  );

  return $field_bases;
}
