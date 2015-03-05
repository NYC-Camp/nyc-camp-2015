<?php
/**
 * @file
 * nyc_camp_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function nyc_camp_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
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
  $handler->name = 'page_news__panel_context_852fc7a7-13cc-4db2-a74d-b900a4437895';
  $handler->task = 'page';
  $handler->subtask = 'news';
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
  $display->uuid = '7ec01b9f-2752-4089-8634-57b4eef2ec76';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8b10df95-6b53-424c-8b61-039f227dfe05';
    $pane->panel = 'body';
    $pane->type = 'block';
    $pane->subtype = 'views-news-block';
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
    $pane->uuid = '8b10df95-6b53-424c-8b61-039f227dfe05';
    $display->content['new-8b10df95-6b53-424c-8b61-039f227dfe05'] = $pane;
    $display->panels['body'][0] = 'new-8b10df95-6b53-424c-8b61-039f227dfe05';
    $pane = new stdClass();
    $pane->pid = 'new-9542076b-1fc3-4880-9e44-da4e230ed7df';
    $pane->panel = 'intro';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:3e9cab26-69a7-4173-888a-cbcc8ac53a59';
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
    $pane->uuid = '9542076b-1fc3-4880-9e44-da4e230ed7df';
    $display->content['new-9542076b-1fc3-4880-9e44-da4e230ed7df'] = $pane;
    $display->panels['intro'][0] = 'new-9542076b-1fc3-4880-9e44-da4e230ed7df';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
