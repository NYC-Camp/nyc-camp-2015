<?php
/**
 * @file
 * nyc_camp_job_openings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyc_camp_job_openings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nyc_camp_job_openings_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job Opening'),
      'base' => 'node_content',
      'description' => t('A content type for Job Openings'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
