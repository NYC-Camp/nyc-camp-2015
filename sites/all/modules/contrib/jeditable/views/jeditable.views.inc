<?php

/**
 * Implementation of hook_views_data_alter().
 */
function jeditable_views_data_alter(&$data) {
  foreach ($data as $table => $config) {
    foreach ($config as $item => $item_config) {
      if (isset($item_config['field']) && $item_config['field']['handler'] == 'content_handler_field_multiple') {
        $data[$table][$item]['field']['handler'] = 'jeditable_handler_field_content';
      }
      if (isset($item_config['field']) && $item_config['field']['handler'] == 'date_handler_field_multiple') {
        $data[$table][$item]['field']['handler'] = 'jeditable_handler_field_date';
      }
      if (isset($item_config['field']) && $item_config['field']['handler'] == 'workflow_views_handler_field_sid') {
        $data[$table][$item]['field']['handler'] = 'jeditable_handler_field_sid';
      }
    }
  }

  return $data;
}

/**
 * Implementation of hook_views_handlers().
 */
function jeditable_views_handlers() {
  return array(
    'info' => array(
      'path' => JEDITABLE_DIR . '/views',
    ),
    'handlers' => array(
      'jeditable_handler_field_content' => array(
        'parent' => 'content_handler_field_multiple',
      ),
      'jeditable_handler_field_date' => array(
        'parent' => 'date_handler_field_multiple',
      ),
      'jeditable_handler_field_sid' => array(
        'parent' => 'workflow_views_handler_field_sid',
      ),
    ),
  );
}

// End of script
