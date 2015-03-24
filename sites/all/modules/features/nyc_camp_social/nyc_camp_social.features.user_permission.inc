<?php
/**
 * @file
 * nyc_camp_social.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nyc_camp_social_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer addthis'.
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'administer advanced addthis'.
  $permissions['administer advanced addthis'] = array(
    'name' => 'administer advanced addthis',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'administer publish away'.
  $permissions['administer publish away'] = array(
    'name' => 'administer publish away',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away building content'.
  $permissions['publish away building content'] = array(
    'name' => 'publish away building content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away conference content'.
  $permissions['publish away conference content'] = array(
    'name' => 'publish away conference content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away conference_day content'.
  $permissions['publish away conference_day content'] = array(
    'name' => 'publish away conference_day content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away event content'.
  $permissions['publish away event content'] = array(
    'name' => 'publish away event content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away job content'.
  $permissions['publish away job content'] = array(
    'name' => 'publish away job content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away keynote content'.
  $permissions['publish away keynote content'] = array(
    'name' => 'publish away keynote content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away news content'.
  $permissions['publish away news content'] = array(
    'name' => 'publish away news content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away page content'.
  $permissions['publish away page content'] = array(
    'name' => 'publish away page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away partner content'.
  $permissions['publish away partner content'] = array(
    'name' => 'publish away partner content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away room content'.
  $permissions['publish away room content'] = array(
    'name' => 'publish away room content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away schedule_slot content'.
  $permissions['publish away schedule_slot content'] = array(
    'name' => 'publish away schedule_slot content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away schedule_time_slot content'.
  $permissions['publish away schedule_time_slot content'] = array(
    'name' => 'publish away schedule_time_slot content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away session content'.
  $permissions['publish away session content'] = array(
    'name' => 'publish away session content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away sprint content'.
  $permissions['publish away sprint content'] = array(
    'name' => 'publish away sprint content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away summit content'.
  $permissions['publish away summit content'] = array(
    'name' => 'publish away summit content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away training content'.
  $permissions['publish away training content'] = array(
    'name' => 'publish away training content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away venue content'.
  $permissions['publish away venue content'] = array(
    'name' => 'publish away venue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  // Exported permission: 'publish away webform content'.
  $permissions['publish away webform content'] = array(
    'name' => 'publish away webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publish_away',
  );

  return $permissions;
}
