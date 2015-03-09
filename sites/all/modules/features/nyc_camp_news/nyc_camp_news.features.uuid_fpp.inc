<?php
/**
 * @file
 * nyc_camp_news.features.uuid_fpp.inc
 */

/**
 * Implements hook_uuid_features_default_fpps().
 */
function nyc_camp_news_uuid_features_default_fpps() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1425629671,
    'title' => 'Become a Parnter',
    'log' => '',
    'bundle' => 'fieldable_panels_pane',
    'link' => 0,
    'path' => '',
    'reusable' => 1,
    'admin_title' => '',
    'admin_description' => '',
    'category' => '',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1425629671,
    'uuid' => '0248f27a-da13-4425-90da-82610cfac052',
    'language' => 'und',
    'field_intro_body' => array(
      'und' => array(
        0 => array(
          'value' => 'TBA: Add intro for Partnerships Page - Pellentesque auctor neque nec urna. Nunc nonummy metus. Curabitur ligula sapien, tincidunt non, euismod vitae, posuere imperdiet, leo. Pellentesque ut neque. Curabitur at lacus ac velit ornare lobortis.',
          'format' => 'filtered_html',
        ),
      ),
    ),
    'field_intro_image' => array(),
    'field_intro_sub_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Support open source by becoming a NYC Camp Partner',
          'format' => NULL,
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
  );
  return $fpps;
}
