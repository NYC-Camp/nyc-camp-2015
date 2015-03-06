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
  $handler->name = 'page_partnerships__panel_context_5cd2b501-2ea1-4ca9-9389-cd438f9b2faf';
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
          0 => 'body',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'intro',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
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
      'body' => array(
        'type' => 'region',
        'title' => 'Body',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
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
      'body' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '50e35ac9-fb5f-46f4-ba60-25d6753fffd7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-24024558-874d-4dbb-8c7b-73c7a0da8dc3';
    $pane->panel = 'body';
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
    $pane->uuid = '24024558-874d-4dbb-8c7b-73c7a0da8dc3';
    $display->content['new-24024558-874d-4dbb-8c7b-73c7a0da8dc3'] = $pane;
    $display->panels['body'][0] = 'new-24024558-874d-4dbb-8c7b-73c7a0da8dc3';
    $pane = new stdClass();
    $pane->pid = 'new-3ac0d673-59bf-476b-9094-336a8e5212f8';
    $pane->panel = 'body';
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
    $pane->uuid = '3ac0d673-59bf-476b-9094-336a8e5212f8';
    $display->content['new-3ac0d673-59bf-476b-9094-336a8e5212f8'] = $pane;
    $display->panels['body'][1] = 'new-3ac0d673-59bf-476b-9094-336a8e5212f8';
    $pane = new stdClass();
    $pane->pid = 'new-eae2fe82-39a7-416d-9c44-06b78449fe95';
    $pane->panel = 'body';
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
    $pane->uuid = 'eae2fe82-39a7-416d-9c44-06b78449fe95';
    $display->content['new-eae2fe82-39a7-416d-9c44-06b78449fe95'] = $pane;
    $display->panels['body'][2] = 'new-eae2fe82-39a7-416d-9c44-06b78449fe95';
    $pane = new stdClass();
    $pane->pid = 'new-d277376e-c62a-4870-be5f-3949fbe435ae';
    $pane->panel = 'body';
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
    $pane->uuid = 'd277376e-c62a-4870-be5f-3949fbe435ae';
    $display->content['new-d277376e-c62a-4870-be5f-3949fbe435ae'] = $pane;
    $display->panels['body'][3] = 'new-d277376e-c62a-4870-be5f-3949fbe435ae';
    $pane = new stdClass();
    $pane->pid = 'new-94d8f9b1-5a12-4a2b-b552-9355b02b8004';
    $pane->panel = 'intro';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:7ee44681-8fd7-4d62-8ca7-eab09098d28e';
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
    $pane->uuid = '94d8f9b1-5a12-4a2b-b552-9355b02b8004';
    $display->content['new-94d8f9b1-5a12-4a2b-b552-9355b02b8004'] = $pane;
    $display->panels['intro'][0] = 'new-94d8f9b1-5a12-4a2b-b552-9355b02b8004';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['partnerships'] = $page;

  return $pages;

}
