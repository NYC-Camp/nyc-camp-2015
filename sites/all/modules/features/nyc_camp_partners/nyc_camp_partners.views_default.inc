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
  $view->name = 'partnerships_initiative_title';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Partnerships - Initiative Title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Website */
  $handler->display->display_options['fields']['field_prod_partnership_website']['id'] = 'field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['table'] = 'field_data_field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['field'] = 'field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['exclude'] = TRUE;
  /* Field: Commerce Product: Program */
  $handler->display->display_options['fields']['field_prod_partnership_program']['id'] = 'field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['table'] = 'field_data_field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['field'] = 'field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['exclude'] = TRUE;
  /* Field: Commerce Product: Signage */
  $handler->display->display_options['fields']['field_prod_partnership_signage']['id'] = 'field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['table'] = 'field_data_field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['field'] = 'field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['exclude'] = TRUE;
  /* Field: Commerce Product: Keynote Thanks */
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['id'] = 'field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['table'] = 'field_data_field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['field'] = 'field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['exclude'] = TRUE;
  /* Field: Commerce Product: Pavilion */
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['id'] = 'field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['table'] = 'field_data_field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['field'] = 'field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['exclude'] = TRUE;
  /* Field: Commerce Product: Social Media */
  $handler->display->display_options['fields']['field_prod_partnership_social']['id'] = 'field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['table'] = 'field_data_field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['field'] = 'field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['exclude'] = TRUE;
  /* Field: Commerce Product: Swag */
  $handler->display->display_options['fields']['field_prod_partnership_swag']['id'] = 'field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['table'] = 'field_data_field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['field'] = 'field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['exclude'] = TRUE;
  /* Field: Commerce Product: Job Fair */
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['id'] = 'field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['table'] = 'field_data_field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['field'] = 'field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['exclude'] = TRUE;
  /* Field: Commerce Product: Other */
  $handler->display->display_options['fields']['field_prod_partnership_other']['id'] = 'field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['table'] = 'field_data_field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['field'] = 'field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['exclude'] = TRUE;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['text'] = '<div class="float-left partnerships-left">
<h3 class="partnership-title">[title]</h3>
<div class="partnership-price">[commerce_price]</div>
</div>
<div class="partnerships-right">
<div class="partnerships-row"><span class="label">Website: </span><span class="partnership-detail">[field_prod_partnership_website]</span> </div>
<div class="partnerships-row"><span class="label">Program: </span><span class="partnership-detail">[field_prod_partnership_program]</span> </div>
<div class="partnerships-row"><span class="label">Signage: </span><span class="partnership-detail">[field_prod_partnership_signage]</span> </div>
<div class="partnerships-row"><span class="label">Keynote: </span><span class="partnership-detail">[field_prod_partnership_keynote]</span> </div>
<div class="partnerships-row"><span class="label">Pavilion: </span><span class="partnership-detail">[field_prod_partnership_pavilion]</span> </div>
<div class="partnerships-row"><span class="label">Social: </span><span class="partnership-detail">[field_prod_partnership_social]</span> </div>
<div class="partnerships-row"><span class="label">Swag: </span><span class="partnership-detail">[field_prod_partnership_swag]</span> </div>
<div class="partnerships-row"><span class="label">Job Fair: </span><span class="partnership-detail">[field_prod_partnership_job_fair]</span> </div>
<div class="partnerships-row"><span class="label">Other: </span><span class="partnership-detail">[field_prod_partnership_other]</span> </div>
<div class="partnerships-row partnerships-row-last">[add_to_cart_form] </div>
</div>';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
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
  /* Filter criterion: Commerce Product: Type (field_prod_partnership_type) */
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['id'] = 'field_prod_partnership_type_value';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['table'] = 'field_data_field_prod_partnership_type';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['field'] = 'field_prod_partnership_type_value';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['value'] = array(
    'Initiative Title Partnership' => 'Initiative Title Partnership',
  );

  /* Display: Partnerships - Other Title */
  $handler = $view->new_display('block', 'Partnerships - Other Title', 'block');
  $export['partnerships_initiative_title'] = $view;

  $view = new view();
  $view->name = 'partnerships_other_title';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Partnerships - Other Title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Title Partnerships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_type'] = 'span';
  $handler->display->display_options['fields']['commerce_price']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Website */
  $handler->display->display_options['fields']['field_prod_partnership_website']['id'] = 'field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['table'] = 'field_data_field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['field'] = 'field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_website']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_website']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Program */
  $handler->display->display_options['fields']['field_prod_partnership_program']['id'] = 'field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['table'] = 'field_data_field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['field'] = 'field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_program']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_program']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Signage */
  $handler->display->display_options['fields']['field_prod_partnership_signage']['id'] = 'field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['table'] = 'field_data_field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['field'] = 'field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_signage']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Keynote Thanks */
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['id'] = 'field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['table'] = 'field_data_field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['field'] = 'field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['label'] = 'Keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Pavilion */
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['id'] = 'field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['table'] = 'field_data_field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['field'] = 'field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Social Media */
  $handler->display->display_options['fields']['field_prod_partnership_social']['id'] = 'field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['table'] = 'field_data_field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['field'] = 'field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_social']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_social']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Swag */
  $handler->display->display_options['fields']['field_prod_partnership_swag']['id'] = 'field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['table'] = 'field_data_field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['field'] = 'field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_swag']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Job Fair */
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['id'] = 'field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['table'] = 'field_data_field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['field'] = 'field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Other */
  $handler->display->display_options['fields']['field_prod_partnership_other']['id'] = 'field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['table'] = 'field_data_field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['field'] = 'field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_other']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_other']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['text'] = '<div class="float-left partnerships-left">
<h3 class="partnership-title">[title]</h3>
<div class="partnership-price">[commerce_price]</div>
</div>
<div class="partnerships-right">
<div class="partnerships-row"><span class="label">Website: </span><span class="partnership-detail">[field_prod_partnership_website]</span> </div>
<div class="partnerships-row"><span class="label">Program: </span><span class="partnership-detail">[field_prod_partnership_program]</span> </div>
<div class="partnerships-row"><span class="label">Signage: </span><span class="partnership-detail">[field_prod_partnership_signage]</span> </div>
<div class="partnerships-row"><span class="label">Keynote: </span><span class="partnership-detail">[field_prod_partnership_keynote]</span> </div>
<div class="partnerships-row"><span class="label">Pavilion: </span><span class="partnership-detail">[field_prod_partnership_pavilion]</span> </div>
<div class="partnerships-row"><span class="label">Social: </span><span class="partnership-detail">[field_prod_partnership_social]</span> </div>
<div class="partnerships-row"><span class="label">Swag: </span><span class="partnership-detail">[field_prod_partnership_swag]</span> </div>
<div class="partnerships-row"><span class="label">Job Fair: </span><span class="partnership-detail">[field_prod_partnership_job_fair]</span> </div>
<div class="partnerships-row"><span class="label">Other: </span><span class="partnership-detail">[field_prod_partnership_other]</span> </div>
<div class="partnerships-row partnerships-row-last">[add_to_cart_form] </div>
</div>';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
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
  /* Filter criterion: Commerce Product: Type (field_prod_partnership_type) */
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['id'] = 'field_prod_partnership_type_value';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['table'] = 'field_data_field_prod_partnership_type';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['field'] = 'field_prod_partnership_type_value';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['value'] = array(
    'Other Title Partnership' => 'Other Title Partnership',
  );

  /* Display: Partnerships - Other Title */
  $handler = $view->new_display('block', 'Partnerships - Other Title', 'block');
  $export['partnerships_other_title'] = $view;

  $view = new view();
  $view->name = 'partnerships_summit_title';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Partnerships - Summit Title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Website */
  $handler->display->display_options['fields']['field_prod_partnership_website']['id'] = 'field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['table'] = 'field_data_field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['field'] = 'field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['exclude'] = TRUE;
  /* Field: Commerce Product: Program */
  $handler->display->display_options['fields']['field_prod_partnership_program']['id'] = 'field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['table'] = 'field_data_field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['field'] = 'field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['exclude'] = TRUE;
  /* Field: Commerce Product: Signage */
  $handler->display->display_options['fields']['field_prod_partnership_signage']['id'] = 'field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['table'] = 'field_data_field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['field'] = 'field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['exclude'] = TRUE;
  /* Field: Commerce Product: Keynote Thanks */
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['id'] = 'field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['table'] = 'field_data_field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['field'] = 'field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['exclude'] = TRUE;
  /* Field: Commerce Product: Pavilion */
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['id'] = 'field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['table'] = 'field_data_field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['field'] = 'field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['exclude'] = TRUE;
  /* Field: Commerce Product: Social Media */
  $handler->display->display_options['fields']['field_prod_partnership_social']['id'] = 'field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['table'] = 'field_data_field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['field'] = 'field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['exclude'] = TRUE;
  /* Field: Commerce Product: Swag */
  $handler->display->display_options['fields']['field_prod_partnership_swag']['id'] = 'field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['table'] = 'field_data_field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['field'] = 'field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['exclude'] = TRUE;
  /* Field: Commerce Product: Job Fair */
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['id'] = 'field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['table'] = 'field_data_field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['field'] = 'field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['exclude'] = TRUE;
  /* Field: Commerce Product: Other */
  $handler->display->display_options['fields']['field_prod_partnership_other']['id'] = 'field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['table'] = 'field_data_field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['field'] = 'field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['exclude'] = TRUE;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['text'] = '<div class="float-left partnerships-left">
<h3 class="partnership-title">[title]</h3>
<div class="partnership-price">[commerce_price]</div>
</div>
<div class="partnerships-right">
<div class="partnerships-row"><span class="label">Website: </span><span class="partnership-detail">[field_prod_partnership_website]</span> </div>
<div class="partnerships-row"><span class="label">Program: </span><span class="partnership-detail">[field_prod_partnership_program]</span> </div>
<div class="partnerships-row"><span class="label">Signage: </span><span class="partnership-detail">[field_prod_partnership_signage]</span> </div>
<div class="partnerships-row"><span class="label">Keynote: </span><span class="partnership-detail">[field_prod_partnership_keynote]</span> </div>
<div class="partnerships-row"><span class="label">Pavilion: </span><span class="partnership-detail">[field_prod_partnership_pavilion]</span> </div>
<div class="partnerships-row"><span class="label">Social: </span><span class="partnership-detail">[field_prod_partnership_social]</span> </div>
<div class="partnerships-row"><span class="label">Swag: </span><span class="partnership-detail">[field_prod_partnership_swag]</span> </div>
<div class="partnerships-row"><span class="label">Job Fair: </span><span class="partnership-detail">[field_prod_partnership_job_fair]</span> </div>
<div class="partnerships-row"><span class="label">Other: </span><span class="partnership-detail">[field_prod_partnership_other]</span> </div>
<div class="partnerships-row partnerships-row-last">[add_to_cart_form] </div>
</div>';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
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
  /* Filter criterion: Commerce Product: Type (field_prod_partnership_type) */
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['id'] = 'field_prod_partnership_type_value';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['table'] = 'field_data_field_prod_partnership_type';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['field'] = 'field_prod_partnership_type_value';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['value'] = array(
    'Summit Title Partnership' => 'Summit Title Partnership',
  );

  /* Display: Partnerships - Summit Title */
  $handler = $view->new_display('block', 'Partnerships - Summit Title', 'block');
  $export['partnerships_summit_title'] = $view;

  $view = new view();
  $view->name = 'partnerships_tiers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Partnerships - Tiers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['alter']['text'] = '<div class="float-left partnerships-left">
<h3 class="partnership-title">[title]</h3>
<div class="partnership-price">[commerce_price]</div>
</div>';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Website */
  $handler->display->display_options['fields']['field_prod_partnership_website']['id'] = 'field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['table'] = 'field_data_field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['field'] = 'field_prod_partnership_website';
  $handler->display->display_options['fields']['field_prod_partnership_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_website']['element_type'] = '0';
  $handler->display->display_options['fields']['field_prod_partnership_website']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_prod_partnership_website']['element_default_classes'] = FALSE;
  /* Field: Commerce Product: Program */
  $handler->display->display_options['fields']['field_prod_partnership_program']['id'] = 'field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['table'] = 'field_data_field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['field'] = 'field_prod_partnership_program';
  $handler->display->display_options['fields']['field_prod_partnership_program']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_program']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_program']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_prod_partnership_program']['element_default_classes'] = FALSE;
  /* Field: Commerce Product: Signage */
  $handler->display->display_options['fields']['field_prod_partnership_signage']['id'] = 'field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['table'] = 'field_data_field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['field'] = 'field_prod_partnership_signage';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_signage']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_signage']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Keynote Thanks */
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['id'] = 'field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['table'] = 'field_data_field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['field'] = 'field_prod_partnership_keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['label'] = 'Keynote';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_keynote']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Pavilion */
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['id'] = 'field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['table'] = 'field_data_field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['field'] = 'field_prod_partnership_pavilion';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_pavilion']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Social Media */
  $handler->display->display_options['fields']['field_prod_partnership_social']['id'] = 'field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['table'] = 'field_data_field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['field'] = 'field_prod_partnership_social';
  $handler->display->display_options['fields']['field_prod_partnership_social']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_social']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_social']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Swag */
  $handler->display->display_options['fields']['field_prod_partnership_swag']['id'] = 'field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['table'] = 'field_data_field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['field'] = 'field_prod_partnership_swag';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_swag']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_swag']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Job Fair */
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['id'] = 'field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['table'] = 'field_data_field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['field'] = 'field_prod_partnership_job_fair';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_prod_partnership_job_fair']['element_label_type'] = 'strong';
  /* Field: Commerce Product: Other */
  $handler->display->display_options['fields']['field_prod_partnership_other']['id'] = 'field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['table'] = 'field_data_field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['field'] = 'field_prod_partnership_other';
  $handler->display->display_options['fields']['field_prod_partnership_other']['label'] = '';
  $handler->display->display_options['fields']['field_prod_partnership_other']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prod_partnership_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prod_partnership_other']['element_default_classes'] = FALSE;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['text'] = '<div class="partnerships-right">
<div class="partnerships-row"><span class="label">Website: </span><span class="partnership-detail">[field_prod_partnership_website]</span> </div>
<div class="partnerships-row"><span class="label">Program: </span><span class="partnership-detail">[field_prod_partnership_program]</span> </div>
<div class="partnerships-row"><span class="label">Signage: </span><span class="partnership-detail">[field_prod_partnership_signage]</span> </div>
<div class="partnerships-row"><span class="label">Keynote: </span><span class="partnership-detail">[field_prod_partnership_keynote]</span> </div>
<div class="partnerships-row"><span class="label">Pavilion: </span><span class="partnership-detail">[field_prod_partnership_pavilion]</span> </div>
<div class="partnerships-row"><span class="label">Social: </span><span class="partnership-detail">[field_prod_partnership_social]</span> </div>
<div class="partnerships-row"><span class="label">Swag: </span><span class="partnership-detail">[field_prod_partnership_swag]</span> </div>
<div class="partnerships-row"><span class="label">Job Fair: </span><span class="partnership-detail">[field_prod_partnership_job_fair]</span> </div>
<div class="partnerships-row"><span class="label">Other: </span><span class="partnership-detail">[field_prod_partnership_other]</span> </div>
<div class="partnerships-row partnerships-row-last">[add_to_cart_form] </div>
</div>';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
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
  /* Filter criterion: Commerce Product: Type (field_prod_partnership_type) */
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['id'] = 'field_prod_partnership_type_value';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['table'] = 'field_data_field_prod_partnership_type';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['field'] = 'field_prod_partnership_type_value';
  $handler->display->display_options['filters']['field_prod_partnership_type_value']['value'] = array(
    'Tier Partnership' => 'Tier Partnership',
  );

  /* Display: Partnerships - Tiers */
  $handler = $view->new_display('block', 'Partnerships - Tiers', 'block');
  $export['partnerships_tiers'] = $view;

  return $export;
}
