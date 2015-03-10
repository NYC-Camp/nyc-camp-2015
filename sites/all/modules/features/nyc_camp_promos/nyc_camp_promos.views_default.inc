<?php
/**
 * @file
 * nyc_camp_promos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nyc_camp_promos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'promos_homepage_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Promos - Homepage - Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Promos - Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_promo_link_target_id']['id'] = 'field_promo_link_target_id';
  $handler->display->display_options['relationships']['field_promo_link_target_id']['table'] = 'field_data_field_promo_link';
  $handler->display->display_options['relationships']['field_promo_link_target_id']['field'] = 'field_promo_link_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_promo_link_target_id';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Block: Image */
  $handler->display->display_options['fields']['field_promo_image']['id'] = 'field_promo_image';
  $handler->display->display_options['fields']['field_promo_image']['table'] = 'field_data_field_promo_image';
  $handler->display->display_options['fields']['field_promo_image']['field'] = 'field_promo_image';
  $handler->display->display_options['fields']['field_promo_image']['label'] = '';
  $handler->display->display_options['fields']['field_promo_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_promo_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Block: Sub-Title */
  $handler->display->display_options['fields']['field_promo_sub_title']['id'] = 'field_promo_sub_title';
  $handler->display->display_options['fields']['field_promo_sub_title']['table'] = 'field_data_field_promo_sub_title';
  $handler->display->display_options['fields']['field_promo_sub_title']['field'] = 'field_promo_sub_title';
  $handler->display->display_options['fields']['field_promo_sub_title']['label'] = '';
  $handler->display->display_options['fields']['field_promo_sub_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_sub_title']['element_label_colon'] = FALSE;
  /* Field: Block: Body */
  $handler->display->display_options['fields']['field_promo_body']['id'] = 'field_promo_body';
  $handler->display->display_options['fields']['field_promo_body']['table'] = 'field_data_field_promo_body';
  $handler->display->display_options['fields']['field_promo_body']['field'] = 'field_promo_body';
  $handler->display->display_options['fields']['field_promo_body']['label'] = '';
  $handler->display->display_options['fields']['field_promo_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_body']['element_label_colon'] = FALSE;
  /* Field: Block: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'bean';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">
[field_promo_image]
[title]
[field_promo_sub_title]
[field_promo_body]
</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'promo' => 'promo',
  );
  /* Filter criterion: Block: Type (field_promo_type) */
  $handler->display->display_options['filters']['field_promo_type_value']['id'] = 'field_promo_type_value';
  $handler->display->display_options['filters']['field_promo_type_value']['table'] = 'field_data_field_promo_type';
  $handler->display->display_options['filters']['field_promo_type_value']['field'] = 'field_promo_type_value';
  $handler->display->display_options['filters']['field_promo_type_value']['value'] = array(
    'Homepage' => 'Homepage',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['promos_homepage_block'] = $view;

  return $export;
}
