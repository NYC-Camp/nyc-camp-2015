<?php

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/*function nyc_theme_preprocess_maintenance_page(&$vars) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  // nyc_theme_preprocess_html($vars);
  // nyc_theme_preprocess_page($vars);

  // This preprocessor will also be used if the db is inactive. To ensure your
  // theme is used, add the following line to your settings.php file:
  // $conf['maintenance_theme'] = 'nyc_theme';
  // Also, check $vars['db_is_active'] before doing any db queries.
}
*/

/**
 * Implements hook_modernizr_load_alter().
 *
 * @return
 *   An array to be output as yepnope testObjects.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_modernizr_load_alter(&$load) {

}

/**
 * Implements hook_preprocess_html()
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_preprocess_html(&$vars) {

}

/**
 * Override or insert variables into the page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_preprocess_page(&$vars) {

}

/**
 * Override or insert variables into the region templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_preprocess_region(&$vars) {

}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_preprocess_block(&$vars) {

}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
function nyc_theme_preprocess_block(&$variables, $hook) {
  // Use a bare template for the page's main content.
  if ($variables['block_html_id'] == 'block-system-main') {
    $variables['theme_hook_suggestions'][] = 'block__bare';
  }
  $variables['title_attributes_array']['class'][] = 'block-title';
}

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
function nyc_theme_process_block(&$variables, $hook) {
  // Drupal 7 should use a $title variable instead of $block->subject.
  $variables['title'] = $variables['block']->subject;
}

/**
 * Changes the search form to use the "search" input element of HTML5.
 */
function nyc_theme_preprocess_search_block_form(&$vars) {
  $vars['search_form'] = str_replace('type="text"', 'type="search"', $vars['search_form']);
}

/**
 * Override or insert variables into the entity template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_preprocess_entity(&$vars) {

}
// */

/**
 * Override or insert variables into the node template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */

function nyc_theme_preprocess_node(&$vars) {
  $node = $vars['node'];

  if ('event' == $node->type && 'full' == $vars['view_mode']) {
    // Make the program accessible on the full view of the event node.
    $vars['program'] = field_view_field('node', $vars['node'], 'field_event_program');
    $vars['program']['#label_display'] = 'hidden';
  }
}

/**
 * Override or insert variables into the field template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("field" in this case.)
 */
/* -- Delete this line if you want to use this function
function nyc_theme_preprocess_field(&$vars, $hook) {

}
// */

/**
 * Override or insert variables into the comment template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_preprocess_comment(&$vars) {
  $comment = $vars['comment'];
}
// */

/**
 * Override or insert variables into the views template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_preprocess_views_view(&$vars) {
  $view = $vars['view'];
}
// */


/**
 * Override or insert css on the site.
 *
 * @param $css
 *   An array of all CSS items being requested on the page.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_css_alter(&$css) {

}
// */

/**
 * Override or insert javascript on the site.
 *
 * @param $js
 *   An array of all JavaScript being presented on the page.
 */
/* -- Delete this line if you want to use this function
function nyc_theme_js_alter(&$js) {

}
// */

/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return a string containing the breadcrumb output.
 */
function nyc_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $heading = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    // Uncomment to add current page to breadcrumb
    $breadcrumb[] = drupal_get_title();
    return '<nav class="breadcrumb">' . $heading . implode(' &rsaquo; ', $breadcrumb) . '</nav>';
  }
}

