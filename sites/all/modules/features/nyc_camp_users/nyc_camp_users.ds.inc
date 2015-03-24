<?php
/**
 * @file
 * nyc_camp_users.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function nyc_camp_users_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|listing';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h5',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_avatar',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['user|user|listing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function nyc_camp_users_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
      ),
      'right' => array(
        1 => 'name',
        2 => 'field_profile_first',
        3 => 'field_profile_last',
        4 => 'field_profile_org',
        5 => 'field_profile_job_title',
        6 => 'field_profile_bio',
        7 => 'field_profile_interests',
        8 => 'field_profile_facebook',
        9 => 'field_profile_twitter',
        10 => 'field_profile_github',
        11 => 'field_profile_google_plus',
        12 => 'field_profile_linkedin',
        13 => 'field_my_drupal_org_profile',
        14 => 'field_skill_level',
        15 => 'field_profile_irc',
        16 => 'field_volunteer_interests',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'name' => 'right',
      'field_profile_first' => 'right',
      'field_profile_last' => 'right',
      'field_profile_org' => 'right',
      'field_profile_job_title' => 'right',
      'field_profile_bio' => 'right',
      'field_profile_interests' => 'right',
      'field_profile_facebook' => 'right',
      'field_profile_twitter' => 'right',
      'field_profile_github' => 'right',
      'field_profile_google_plus' => 'right',
      'field_profile_linkedin' => 'right',
      'field_my_drupal_org_profile' => 'right',
      'field_skill_level' => 'right',
      'field_profile_irc' => 'right',
      'field_volunteer_interests' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['user|user|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|listing';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'name',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'name' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['user|user|listing'] = $ds_layout;

  return $export;
}
