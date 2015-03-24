<?php
/**
 * @file
 * nyc_camp_news.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function nyc_camp_news_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Talent Fair',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0ebb8413-a554-4ffa-8ff6-818a0417b465',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'talent-fair',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Summits',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'eaf7de7f-cfa3-4f93-b186-591db1365310',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'summits',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
