<?php
/**
 * @file
 * nyc_camp_partners.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nyc_camp_partners_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'partners_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partners - Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partners - Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partner' => 'partner',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['partners_block'] = $view;

  $view = new view();
  $view->name = 'partnership_options_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Partnership Options - Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partnership Options';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_prod_partnership_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Commerce Product: Type */
  $handler->display->display_options['fields']['field_prod_partnership_type']['id'] = 'field_prod_partnership_type';
  $handler->display->display_options['fields']['field_prod_partnership_type']['table'] = 'field_data_field_prod_partnership_type';
  $handler->display->display_options['fields']['field_prod_partnership_type']['field'] = 'field_prod_partnership_type';
  $handler->display->display_options['fields']['field_prod_partnership_type']['label'] = '';
  $handler->display->display_options['fields']['field_prod_partnership_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_type']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Field: Commerce Product: Website */
  $handler->display->display_options['fields']['field_prod_partnership_website']['id'] = 'field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['table'] = 'field_data_field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['field'] = 'field_prod_partnership_website';
  /* Field: Commerce Product: Program */
  $handler->display->display_options['fields']['field_prod_partnership_program']['id'] = 'field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['table'] = 'field_data_field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['field'] = 'field_prod_partnership_program';
  /* Field: Commerce Product: Signage */
  $handler->display->display_options['fields']['field_prod_partnership_signage']['id'] = 'field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['table'] = 'field_data_field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['field'] = 'field_prod_partnership_signage';
  /* Field: Commerce Product: Keynote Thanks */
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['id'] = 'field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['table'] = 'field_data_field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['field'] = 'field_prod_partnership_keynote';
  /* Field: Commerce Product: Pavilion */
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['id'] = 'field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['table'] = 'field_data_field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['field'] = 'field_prod_partnership_pavilion';
  /* Field: Commerce Product: Social Media */
  $handler->display->display_options['fields']['field_prod_partnership_social']['id'] = 'field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['table'] = 'field_data_field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['field'] = 'field_prod_partnership_social';
  /* Field: Commerce Product: Swag */
  $handler->display->display_options['fields']['field_prod_partnership_swag']['id'] = 'field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['table'] = 'field_data_field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['field'] = 'field_prod_partnership_swag';
  /* Field: Commerce Product: Job Fair */
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['id'] = 'field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['table'] = 'field_data_field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['field'] = 'field_prod_partnership_job_fair';
  /* Field: Commerce Product: Other */
  $handler->display->display_options['fields']['field_prod_partnership_other']['id'] = 'field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['table'] = 'field_data_field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['field'] = 'field_prod_partnership_other';
  /* Field: Commerce Product: Edit link */
  $handler->display->display_options['fields']['edit_product']['id'] = 'edit_product';
  $handler->display->display_options['fields']['edit_product']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['edit_product']['field'] = 'edit_product';
  $handler->display->display_options['fields']['edit_product']['label'] = '';
  $handler->display->display_options['fields']['edit_product']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_product']['text'] = 'Edit';
  /* Sort criterion: Commerce Product: Price (commerce_price:amount) */
  $handler->display->display_options['sorts']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['sorts']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['order'] = 'DESC';
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partnership' => 'partnership',
  );

  /* Display: Partnership Options - Block */
  $handler = $view->new_display('block', 'Partnership Options - Block', 'block');
  $export['partnership_options_block'] = $view;

  return $export;
}
