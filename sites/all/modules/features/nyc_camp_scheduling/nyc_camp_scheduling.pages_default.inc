<?php
/**
 * @file
 * nyc_camp_scheduling.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function nyc_camp_scheduling_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_calendar';
  $page->task = 'page';
  $page->admin_title = 'Events Calendar';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_calendar__panel_context_e248bdc2-579c-432f-ae86-14f9df4e9afe';
  $handler->task = 'page';
  $handler->subtask = 'events_calendar';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a45bd38c-35da-4a2d-b727-600b39376100';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cbee507d-c26f-41d7-ad03-aec7b27fa69a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-trainings_block-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cbee507d-c26f-41d7-ad03-aec7b27fa69a';
    $display->content['new-cbee507d-c26f-41d7-ad03-aec7b27fa69a'] = $pane;
    $display->panels['center'][0] = 'new-cbee507d-c26f-41d7-ad03-aec7b27fa69a';
    $pane = new stdClass();
    $pane->pid = 'new-59d7a73e-7fdc-4587-89b5-248c74f84104';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-summits_block-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '59d7a73e-7fdc-4587-89b5-248c74f84104';
    $display->content['new-59d7a73e-7fdc-4587-89b5-248c74f84104'] = $pane;
    $display->panels['center'][1] = 'new-59d7a73e-7fdc-4587-89b5-248c74f84104';
    $pane = new stdClass();
    $pane->pid = 'new-7e485928-d7cf-417f-93a5-0c88c5a41f95';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-sprints_block-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7e485928-d7cf-417f-93a5-0c88c5a41f95';
    $display->content['new-7e485928-d7cf-417f-93a5-0c88c5a41f95'] = $pane;
    $display->panels['center'][2] = 'new-7e485928-d7cf-417f-93a5-0c88c5a41f95';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cbee507d-c26f-41d7-ad03-aec7b27fa69a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_calendar'] = $page;

  return $pages;

}
