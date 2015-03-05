<?php
/**
 * @file
 * nyc_camp_partners.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyc_camp_partners_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_general|node|partner|form';
  $field_group->group_name = 'group_partner_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Partner',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-partner-general field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_partner_general|node|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prod_partnership_benefits|commerce_product|partnership|form';
  $field_group->group_name = 'group_prod_partnership_benefits';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'partnership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Benefits',
    'weight' => '9',
    'children' => array(
      0 => 'field_prod_partnership_website',
      1 => 'field_prod_partnership_program',
      2 => 'field_prod_partnership_signage',
      3 => 'field_prod_partnership_pavilion',
      4 => 'field_prod_partnership_social',
      5 => 'field_prod_partnership_keynote',
      6 => 'field_prod_partnership_swag',
      7 => 'field_prod_partnership_other',
      8 => 'field_prod_partnership_job_fair',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-prod-partnership-benefits field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_prod_partnership_benefits|commerce_product|partnership|form'] = $field_group;

  return $export;
}
