<?php
/**
 * @file
 * nyc_camp_partners.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nyc_camp_partners_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_become-a-partner:partnerships
  $menu_links['main-menu_become-a-partner:partnerships'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'partnerships',
    'router_path' => 'partnerships',
    'link_title' => 'Become a Partner',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_become-a-partner:partnerships',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_partners:node/11',
  );
  // Exported menu link: main-menu_partners:node/11
  $menu_links['main-menu_partners:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Partners',
    'options' => array(
      'identifier' => 'main-menu_partners:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Become a Partner');
  t('Partners');


  return $menu_links;
}
