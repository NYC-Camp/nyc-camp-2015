<?php
/**
 * @file
 * nyc_camp_trainings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyc_camp_trainings_ctools_plugin_api($module = NULL, $api = NULL) {
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
function nyc_camp_trainings_node_info() {
  $items = array(
    'training' => array(
      'name' => t('Training'),
      'base' => 'node_content',
      'description' => t('A content type for Trainings'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
