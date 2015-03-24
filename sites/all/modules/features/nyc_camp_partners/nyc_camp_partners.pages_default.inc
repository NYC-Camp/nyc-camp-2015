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
        'class' => 'Intro',
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
  $display->uuid = 'b29a0eab-ec86-45f3-a35c-f3e2cd6e066b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-10c11e5d-ab08-4af1-9091-363296e26a4a';
    $pane->panel = 'intro';
    $pane->type = 'block';
    $pane->subtype = 'bean-intro---partners';
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
    $pane->uuid = '10c11e5d-ab08-4af1-9091-363296e26a4a';
    $display->content['new-10c11e5d-ab08-4af1-9091-363296e26a4a'] = $pane;
    $display->panels['intro'][0] = 'new-10c11e5d-ab08-4af1-9091-363296e26a4a';
  $display->hide_title = PANELS_TITLE_PANE;
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
    $pane->pid = 'new-f0c7cefd-13de-4133-b66a-9d342e3c1c4b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-be49b200deca86468af7c7a5f69fbfc5';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f0c7cefd-13de-4133-b66a-9d342e3c1c4b';
    $display->content['new-f0c7cefd-13de-4133-b66a-9d342e3c1c4b'] = $pane;
    $display->panels['center'][4] = 'new-f0c7cefd-13de-4133-b66a-9d342e3c1c4b';
    $pane = new stdClass();
    $pane->pid = 'new-8bbd5eb0-ece2-47b1-b48d-86fd454b0c1b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-partnerships_individual-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Individual Partnerships',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8bbd5eb0-ece2-47b1-b48d-86fd454b0c1b';
    $display->content['new-8bbd5eb0-ece2-47b1-b48d-86fd454b0c1b'] = $pane;
    $display->panels['center'][5] = 'new-8bbd5eb0-ece2-47b1-b48d-86fd454b0c1b';
    $pane = new stdClass();
    $pane->pid = 'new-9316933f-4fd2-417f-9f6d-139d32901567';
    $pane->panel = 'intro';
    $pane->type = 'block';
    $pane->subtype = 'bean-intro---partnerships';
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
    $pane->uuid = '9316933f-4fd2-417f-9f6d-139d32901567';
    $display->content['new-9316933f-4fd2-417f-9f6d-139d32901567'] = $pane;
    $display->panels['intro'][0] = 'new-9316933f-4fd2-417f-9f6d-139d32901567';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['partnerships'] = $page;

  return $pages;

}
