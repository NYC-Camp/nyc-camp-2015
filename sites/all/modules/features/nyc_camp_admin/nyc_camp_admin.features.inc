<?php
/**
 * @file
 * nyc_camp_admin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyc_camp_admin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
