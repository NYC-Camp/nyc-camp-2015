<?php
/**
 * @file
 * nyc_camp_mailchimp_and_mandrill.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nyc_camp_mailchimp_and_mandrill_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_email_preferences'
  $field_bases['field_email_preferences'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_preferences',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'mc_list_id' => 'ec08e2f9d4',
      'send_welcome' => 1,
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  return $field_bases;
}
