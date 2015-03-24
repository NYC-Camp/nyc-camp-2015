<?php
/**
 * @file
 * nyc_camp_social.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nyc_camp_social_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_publish-away-your-contents:admin/config/services/publish-away
  $menu_links['management_publish-away-your-contents:admin/config/services/publish-away'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/publish-away',
    'router_path' => 'admin/config/services/publish-away',
    'link_title' => 'Publish away your contents',
    'options' => array(
      'attributes' => array(
        'title' => 'Send the contents to the social media.',
      ),
      'identifier' => 'management_publish-away-your-contents:admin/config/services/publish-away',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Publish away your contents');


  return $menu_links;
}
