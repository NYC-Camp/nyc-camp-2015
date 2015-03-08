<?php
/**
 * @file
 * nyc_camp_podcasts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nyc_camp_podcasts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_podcast:podcasts
  $menu_links['main-menu_podcast:podcasts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'podcasts',
    'router_path' => 'podcasts',
    'link_title' => 'Podcast',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_podcast:podcasts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_news:news',
  );
  // Exported menu link: navigation_podcast:node/add/podcast
  $menu_links['navigation_podcast:node/add/podcast'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/podcast',
    'router_path' => 'node/add/podcast',
    'link_title' => 'Podcast',
    'options' => array(
      'attributes' => array(
        'title' => 'A content type for podcasts',
      ),
      'identifier' => 'navigation_podcast:node/add/podcast',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Podcast');


  return $menu_links;
}
