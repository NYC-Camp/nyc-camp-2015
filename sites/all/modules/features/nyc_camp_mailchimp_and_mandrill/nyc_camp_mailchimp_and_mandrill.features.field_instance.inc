<?php
/**
 * @file
 * nyc_camp_mailchimp_and_mandrill.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nyc_camp_mailchimp_and_mandrill_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_email_preferences'
  $field_instances['user-user-field_email_preferences'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 0,
        'interest_groups' => array(
          14065 => array(
            'Partner' => 0,
            'Speak' => 0,
            'Volunteer' => 0,
          ),
          14489 => array(
            'Apps & Start-Ups' => 0,
            'Commerce' => 0,
            'DevOps' => 0,
            'DrupalCore' => 0,
            'DrupalNG (Next Generation)' => 0,
            'Higher Ed' => 0,
            'Media & Digital Publishing' => 0,
            'Non-Profit & NGO' => 0,
            'Security & Privacy' => 0,
            'Sprinting' => 0,
            'Training' => 0,
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_email_preferences',
    'label' => 'E-mail Preferences',
    'required' => 0,
    'settings' => array(
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => 'mail',
        'FNAME' => '',
        'LNAME' => '',
        'ORG' => '',
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 1,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 100,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('E-mail Preferences');

  return $field_instances;
}
