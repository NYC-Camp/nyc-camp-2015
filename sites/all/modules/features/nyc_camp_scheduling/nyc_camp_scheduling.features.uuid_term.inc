<?php
/**
 * @file
 * nyc_camp_scheduling.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function nyc_camp_scheduling_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Advanced',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '58a46c36-cba9-457d-8d44-e00b8621d54b',
    'vocabulary_machine_name' => 'audience',
    'url_alias' => array(
      0 => array(
        'alias' => 'advanced',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Beginner',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a031e3a3-1f4b-4880-b4c7-662fd464d647',
    'vocabulary_machine_name' => 'audience',
    'url_alias' => array(
      0 => array(
        'alias' => 'beginner',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Intermediate',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd2ec7895-5c0d-496a-9d24-8f9f05133c86',
    'vocabulary_machine_name' => 'audience',
    'url_alias' => array(
      0 => array(
        'alias' => 'intermediate',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
