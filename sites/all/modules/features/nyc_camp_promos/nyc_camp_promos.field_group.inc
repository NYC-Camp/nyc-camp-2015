<?php
/**
 * @file
 * nyc_camp_promos.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyc_camp_promos_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_link|bean|promo|form';
  $field_group->group_name = 'group_promo_link';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'promo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '5',
    'children' => array(
      0 => 'field_promo_link_internal',
      1 => 'field_promo_link_external',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-promo-link field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_promo_link|bean|promo|form'] = $field_group;

  return $export;
}
