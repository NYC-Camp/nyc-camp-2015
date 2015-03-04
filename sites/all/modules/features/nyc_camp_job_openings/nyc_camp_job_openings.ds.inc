<?php
/**
 * @file
 * nyc_camp_job_openings.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function nyc_camp_job_openings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_job_description',
        1 => 'field_job_deadline',
        2 => 'field_job_salary',
        3 => 'field_job_education',
        4 => 'field_job_experience',
        5 => 'field_job_responsibilities',
        6 => 'field_job_pdf',
        7 => 'field_job_additional_info',
      ),
    ),
    'fields' => array(
      'field_job_description' => 'ds_content',
      'field_job_deadline' => 'ds_content',
      'field_job_salary' => 'ds_content',
      'field_job_education' => 'ds_content',
      'field_job_experience' => 'ds_content',
      'field_job_responsibilities' => 'ds_content',
      'field_job_pdf' => 'ds_content',
      'field_job_additional_info' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|job|default'] = $ds_layout;

  return $export;
}
