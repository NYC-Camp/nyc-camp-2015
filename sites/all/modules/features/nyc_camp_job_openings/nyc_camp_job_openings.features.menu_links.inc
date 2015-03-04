<?php
/**
 * @file
 * nyc_camp_job_openings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nyc_camp_job_openings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_job-fair:node/204
  $menu_links['main-menu_job-fair:node/204'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/204',
    'router_path' => 'node/%',
    'link_title' => 'Job Fair',
    'options' => array(
      'attributes' => array(
        'title' => 'The NYC Camp Job Fair and Talent Mixer',
      ),
      'identifier' => 'main-menu_job-fair:node/204',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Job Fair');


  return $menu_links;
}
