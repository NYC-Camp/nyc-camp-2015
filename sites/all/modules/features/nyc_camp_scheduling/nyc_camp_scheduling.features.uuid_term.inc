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
    'name' => 'Intermediate',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd2ec7895-5c0d-496a-9d24-8f9f05133c86',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'intermediate',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
