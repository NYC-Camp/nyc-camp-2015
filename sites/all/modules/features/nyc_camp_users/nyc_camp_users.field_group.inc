<?php
/**
 * @file
 * nyc_camp_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyc_camp_users_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_account|user|user|form';
  $field_group->group_name = 'group_user_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '1',
    'children' => array(
      0 => 'field_email_preferences',
      1 => 'account',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-account field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_admin|user|user|form';
  $field_group->group_name = 'group_user_admin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_featured',
      1 => 'field_user_featured_promo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Admin',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-user-admin field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_user_admin|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_drupal_admin|user|user|form';
  $field_group->group_name = 'group_user_drupal_admin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Drupal Admin',
    'weight' => '5',
    'children' => array(
      0 => 'masquerade',
      1 => 'ckeditor',
      2 => 'googleanalytics',
      3 => 'mollom',
      4 => 'redirect',
      5 => 'timezone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-drupal-admin field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_drupal_admin|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_links|user|user|form';
  $field_group->group_name = 'group_user_links';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_facebook',
      1 => 'field_user_twitter',
      2 => 'field_user_github',
      3 => 'field_user_linkedin',
      4 => 'field_user_irc',
      5 => 'field_user_drupal',
      6 => 'field_user_google_plus',
      7 => 'field_user_phone',
      8 => 'field_user_skype',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-links field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_links|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_profile|user|user|form';
  $field_group->group_name = 'group_user_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '0',
    'children' => array(
      0 => 'field_skill_level',
      1 => 'field_user_name',
      2 => 'field_user_resume',
      3 => 'field_user_job_titles',
      4 => 'field_user_organization',
      5 => 'field_user_bio',
      6 => 'field_user_interests',
      7 => 'picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-profile field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_profile|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_volunteering|user|user|form';
  $field_group->group_name = 'group_user_volunteering';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteering',
    'weight' => '3',
    'children' => array(
      0 => 'field_volunteer_availability',
      1 => 'field_volunteer_interests',
      2 => 'field_user_volunteer_availabilty',
      3 => 'field_user_volunteering_interest',
      4 => 'field_user_volunteering_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-volunteering field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_volunteering|user|user|form'] = $field_group;

  return $export;
}
