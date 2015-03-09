<?php
/**
 * @file
 * nyc_camp_sprints.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyc_camp_sprints_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nyc_camp_sprints_node_info() {
  $items = array(
    'sprint' => array(
      'name' => t('Sprint'),
      'base' => 'node_content',
      'description' => t('A content type for Sprints'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
