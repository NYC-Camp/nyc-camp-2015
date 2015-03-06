<?php
/**
 * @file
 * nyc_camp_partners.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function nyc_camp_partners_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'partners';
  $page->task = 'page';
  $page->admin_title = 'Partners';
  $page->admin_description = '';
  $page->path = 'partners';
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
  $handler->name = 'page_partners__panel_context_68526aa9-81bb-4ba3-8ee8-ebb2edbb83a7';
  $handler->task = 'page';
  $handler->subtask = 'partners';
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
  $display->uuid = 'b29a0eab-ec86-45f3-a35c-f3e2cd6e066b';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['partners'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'partnerships';
  $page->task = 'page';
  $page->admin_title = 'Partnerships';
  $page->admin_description = '';
  $page->path = 'partnerships';
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
  $handler->name = 'page_partnerships__panel_context_8c6fb31a-c4fc-4e22-8e0d-ea798e2a07c3';
  $handler->task = 'page';
  $handler->subtask = 'partnerships';
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'intro',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'intro' => array(
        'type' => 'region',
        'title' => 'Intro',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'intro' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9b6da96e-ce64-40c2-9533-a1b39c25d494';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-acce2284-848a-4eb7-9ec4-852a69d1c138';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-partnerships_tiers-block';
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
    $pane->uuid = 'acce2284-848a-4eb7-9ec4-852a69d1c138';
    $display->content['new-acce2284-848a-4eb7-9ec4-852a69d1c138'] = $pane;
    $display->panels['center'][0] = 'new-acce2284-848a-4eb7-9ec4-852a69d1c138';
    $pane = new stdClass();
    $pane->pid = 'new-13c4b8e0-266c-46f3-80ba-6df46e6562ca';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-partnerships_summit_title-block';
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
    $pane->uuid = '13c4b8e0-266c-46f3-80ba-6df46e6562ca';
    $display->content['new-13c4b8e0-266c-46f3-80ba-6df46e6562ca'] = $pane;
    $display->panels['center'][1] = 'new-13c4b8e0-266c-46f3-80ba-6df46e6562ca';
    $pane = new stdClass();
    $pane->pid = 'new-95bcf9af-ec42-4cf7-bdb2-32005bda6d40';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-07e42dbbc41b061a1ef53751aa604b3f';
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
    $pane->uuid = '95bcf9af-ec42-4cf7-bdb2-32005bda6d40';
    $display->content['new-95bcf9af-ec42-4cf7-bdb2-32005bda6d40'] = $pane;
    $display->panels['center'][2] = 'new-95bcf9af-ec42-4cf7-bdb2-32005bda6d40';
    $pane = new stdClass();
    $pane->pid = 'new-2c2f840f-5a39-427c-8083-66578e428ee7';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-partnerships_other_title-block';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2c2f840f-5a39-427c-8083-66578e428ee7';
    $display->content['new-2c2f840f-5a39-427c-8083-66578e428ee7'] = $pane;
    $display->panels['center'][3] = 'new-2c2f840f-5a39-427c-8083-66578e428ee7';
    $pane = new stdClass();
    $pane->pid = 'new-3b04cbf7-2893-4de4-a001-b01307a7f7e2';
    $pane->panel = 'intro';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:0248f27a-da13-4425-90da-82610cfac052';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3b04cbf7-2893-4de4-a001-b01307a7f7e2';
    $display->content['new-3b04cbf7-2893-4de4-a001-b01307a7f7e2'] = $pane;
    $display->panels['intro'][0] = 'new-3b04cbf7-2893-4de4-a001-b01307a7f7e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['partnerships'] = $page;

  return $pages;

}
