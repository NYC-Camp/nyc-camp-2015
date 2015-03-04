<?php
/**
 * @file
 * nyc_camp_scheduling.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyc_camp_scheduling_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nyc_camp_scheduling_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nyc_camp_scheduling_node_info() {
  $items = array(
    'building' => array(
      'name' => t('Venue Building'),
      'base' => 'node_content',
      'description' => t('A Building at Venue for a Conference'),
      'has_title' => '1',
      'title_label' => t('Building Name'),
      'help' => '',
    ),
    'conference' => array(
      'name' => t('Conference'),
      'base' => 'node_content',
      'description' => t('This is the content type for the annual conference.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'keynote' => array(
      'name' => t('Keynote'),
      'base' => 'node_content',
      'description' => t('A content type for Keynotes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'room' => array(
      'name' => t('Room'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Room Name'),
      'help' => '',
    ),
    'schedule_time_slot' => array(
      'name' => t('Schedule Time Slot'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sprint' => array(
      'name' => t('Sprint'),
      'base' => 'node_content',
      'description' => t('A content type for Sprints'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'summit' => array(
      'name' => t('Summit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'training' => array(
      'name' => t('Training'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'venue' => array(
      'name' => t('Venue'),
      'base' => 'node_content',
      'description' => t('A content type for <em>Venues</em> used to host a Conference'),
      'has_title' => '1',
      'title_label' => t('Venue Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
