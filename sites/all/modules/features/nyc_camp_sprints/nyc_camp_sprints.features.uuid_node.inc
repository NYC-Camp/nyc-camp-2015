<?php
/**
 * @file
 * nyc_camp_sprints.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nyc_camp_sprints_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Drupal Security Sprint',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'sprint',
  'language' => 'und',
  'created' => 1425451345,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5e43484b-8717-49ca-a82a-54420efebdce',
  'field_sprint_coordinators' => array(),
  'field_sprint_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-19T13:00:00',
        'value2' => '2015-07-19T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_sprint_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Cras dapibus. Pellentesque dapibus hendrerit tortor. Nulla porta dolor. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Suspendisse pulvinar, augue ac venenatis condimentum, sem libero volutpat nibh, nec pellentesque velit pede quis nunc.

Phasellus viverra nulla ut metus varius laoreet. Nullam cursus lacinia erat. Nunc interdum lacus sit amet orci. Proin magna. Ut id nisl quis enim dignissim sagittis.

Integer ante arcu, accumsan a, consectetuer eget, posuere ut, mauris. Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Maecenas egestas arcu quis ligula mattis placerat. Maecenas ullamcorper, dui et placerat feugiat, eros pede varius nisi, condimentum viverra felis nunc et lorem. Nam eget dui.

Mauris sollicitudin fermentum libero. Suspendisse nisl elit, rhoncus eget, elementum ac, condimentum eget, diam. Proin viverra, ligula sit amet ultrices semper, ligula arcu tristique sapien, a accumsan nisi mauris ac eros. Phasellus blandit leo ut odio. Nulla porta dolor.

Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Sed aliquam, nisi quis porttitor congue, elit erat euismod orci, ac placerat dolor lectus quis orci. Vestibulum rutrum, mi nec elementum vehicula, eros quam gravida nisl, id fringilla neque ante vel mi. Nullam sagittis. Praesent ac sem eget est egestas volutpat. Morbi vestibulum volutpat enim.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_image' => array(),
  'field_sprint_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Pls add Sub-Title',
        'format' => NULL,
      ),
    ),
  ),
  'field_sprint_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Fusce a quam. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus. Aenean commodo ligula eget dolor. Nullam cursus lacinia erat. Donec mi odio, faucibus at, scelerisque quis, convallis in, nisi.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_team' => array(),
  'field_sprint_audiences' => array(),
  'field_sprint_tracks' => array(),
  'field_sprint_drupal_software' => array(),
  'field_sprint_skill_levels' => array(),
  'field_sprint_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-03-04 01:42:25 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Drupal Multilingual Sprint',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'sprint',
  'language' => 'und',
  'created' => 1425451359,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '747356df-7fee-44b9-909d-338fa923b322',
  'field_sprint_coordinators' => array(),
  'field_sprint_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-19T13:00:00',
        'value2' => '2015-07-19T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_sprint_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Suspendisse enim turpis, dictum sed, iaculis a, condimentum nec, nisi. Nullam vel sem. Pellentesque commodo eros a enim. Vivamus aliquet elit ac nisl. Nullam accumsan lorem in dui.

Etiam imperdiet imperdiet orci.. Morbi nec metus. Ut leo. Sed aliquam ultrices mauris.

Sed a libero. Etiam ut purus mattis mauris sodales aliquam. Nulla porta dolor. In dui magna, posuere eget, vestibulum et, tempor auctor, justo. Sed augue ipsum, egestas nec, vestibulum et, malesuada adipiscing, dui.

Praesent vestibulum dapibus nibh. Phasellus leo dolor, tempus non, auctor et, hendrerit quis, nisi. In consectetuer turpis ut velit. Nullam sagittis. Nam adipiscing.

Fusce neque. Phasellus accumsan cursus velit. Maecenas vestibulum mollis diam. Phasellus a est. Nulla facilisi.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_image' => array(),
  'field_sprint_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Pls add Sub-Title',
        'format' => NULL,
      ),
    ),
  ),
  'field_sprint_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Vestibulum volutpat pretium libero. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Fusce id purus. Integer tincidunt. Donec posuere vulputate arcu. Etiam vitae tortor.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_team' => array(),
  'field_sprint_audiences' => array(),
  'field_sprint_tracks' => array(),
  'field_sprint_drupal_software' => array(),
  'field_sprint_skill_levels' => array(),
  'field_sprint_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-03-04 01:42:39 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Drupal Evolution Sprint',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'sprint',
  'language' => 'und',
  'created' => 1425754112,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7cb2489b-3c2f-444d-9342-cab5c75c7ded',
  'field_sprint_coordinators' => array(),
  'field_sprint_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-19T13:00:00',
        'value2' => '2015-07-19T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_sprint_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Praesent adipiscing. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Fusce id purus. Ut tincidunt tincidunt erat. Etiam imperdiet imperdiet orci. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Fusce id purus.

Nam adipiscing. Sed libero. Duis leo. Nam adipiscing. Nam commodo suscipit quam.

Maecenas egestas arcu quis ligula mattis placerat. Fusce fermentum. Proin magna. Nullam quis ante. Praesent porttitor, nulla vitae posuere iaculis, arcu nisl dignissim dolor, a pretium mi sem ut ipsum.

Vestibulum fringilla pede sit amet augue. Maecenas ullamcorper, dui et placerat feugiat, eros pede varius nisi, condimentum viverra felis nunc et lorem. Aenean posuere, tortor sed cursus feugiat, nunc augue blandit nunc, eu sollicitudin urna dolor sagittis lacus. Aenean tellus metus, bibendum sed, posuere ac, mattis non, nunc. Duis vel nibh at velit scelerisque suscipit.

Fusce fermentum odio nec arcu. Vestibulum dapibus nunc ac augue. Praesent ac sem eget est egestas volutpat. Proin magna. Cras varius.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_image' => array(),
  'field_sprint_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Pls add Sub-Title',
        'format' => NULL,
      ),
    ),
  ),
  'field_sprint_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Aenean vulputate eleifend tellus. Curabitur at lacus ac velit ornare lobortis. Quisque id mi. Curabitur nisi. Sed aliquam ultrices mauris.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_team' => array(),
  'field_sprint_audiences' => array(),
  'field_sprint_tracks' => array(),
  'field_sprint_drupal_software' => array(),
  'field_sprint_skill_levels' => array(),
  'field_sprint_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-03-07 13:48:32 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Media Sprint',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'sprint',
  'language' => 'und',
  'created' => 1425451091,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8745a684-dc80-4f77-811c-8b3d2f4e9063',
  'field_sprint_coordinators' => array(),
  'field_sprint_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-19T13:00:00',
        'value2' => '2015-07-19T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_sprint_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Phasellus ullamcorper ipsum rutrum nunc. Sed augue ipsum, egestas nec, vestibulum et, malesuada adipiscing, dui. Nam at tortor in tellus interdum sagittis. Phasellus magna. Fusce ac felis sit amet ligula pharetra condimentum.

Donec elit libero, sodales nec, volutpat a, suscipit non, turpis. Nunc nec neque. Duis vel nibh at velit scelerisque suscipit. Sed lectus. Curabitur a felis in nunc fringilla tristique.

Vestibulum suscipit nulla quis orci. Pellentesque posuere. Curabitur suscipit suscipit tellus. Praesent ut ligula non mi varius sagittis. Nulla porta dolor.

Aliquam erat volutpat. Vivamus in erat ut urna cursus vestibulum. Sed in libero ut nibh placerat accumsan. Sed lectus. Nam adipiscing.

Nam pretium turpis et arcu. Vestibulum rutrum, mi nec elementum vehicula, eros quam gravida nisl, id fringilla neque ante vel mi. Aenean massa. Etiam feugiat lorem non metus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_image' => array(),
  'field_sprint_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Pls add Sub-Title',
        'format' => NULL,
      ),
    ),
  ),
  'field_sprint_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Etiam iaculis nunc ac metus. Nunc egestas, augue at pellentesque laoreet, felis eros vehicula leo, at malesuada velit leo quis pede. Fusce vulputate eleifend sapien. Duis arcu tortor, suscipit eget, imperdiet nec, imperdiet iaculis, ipsum. Pellentesque egestas, neque sit amet convallis pulvinar, justo nulla eleifend augue, ac auctor orci leo non est.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_team' => array(),
  'field_sprint_audiences' => array(),
  'field_sprint_tracks' => array(),
  'field_sprint_drupal_software' => array(),
  'field_sprint_skill_levels' => array(),
  'field_sprint_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-03-04 01:38:11 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Drupal Core Sprint',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'sprint',
  'language' => 'und',
  'created' => 1425451163,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9e0debd5-0b55-46e0-9337-dcf0598d0f2e',
  'field_sprint_coordinators' => array(),
  'field_sprint_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-13T13:00:00',
        'value2' => '2015-07-19T22:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_sprint_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Duis leo. Pellentesque egestas, neque sit amet convallis pulvinar, justo nulla eleifend augue, ac auctor orci leo non est. Phasellus ullamcorper ipsum rutrum nunc. Suspendisse potenti. Donec mollis hendrerit risus.

Duis lobortis massa imperdiet quam. Nam commodo suscipit quam. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Sed aliquam ultrices mauris. Donec posuere vulputate arcu.

Nulla porta dolor. Fusce vel dui. Suspendisse faucibus, nunc et pellentesque egestas, lacus ante convallis tellus, vitae iaculis lacus elit id tortor. Curabitur ligula sapien, tincidunt non, euismod vitae, posuere imperdiet, leo. Aliquam eu nunc.

In ut quam vitae odio lacinia tincidunt. Sed a libero. Vestibulum eu odio. Morbi vestibulum volutpat enim. Aenean vulputate eleifend tellus.

Etiam rhoncus. Sed cursus turpis vitae tortor. Vivamus aliquet elit ac nisl. Curabitur a felis in nunc fringilla tristique. Nulla porta dolor.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_image' => array(),
  'field_sprint_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Pls add Sub-Title',
        'format' => NULL,
      ),
    ),
  ),
  'field_sprint_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Aenean tellus metus, bibendum sed, posuere ac, mattis non, nunc. Praesent adipiscing. Nullam accumsan lorem in dui. Quisque rutrum. Phasellus accumsan cursus velit.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_team' => array(),
  'field_sprint_audiences' => array(),
  'field_sprint_tracks' => array(),
  'field_sprint_drupal_software' => array(),
  'field_sprint_skill_levels' => array(),
  'field_sprint_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-03-04 01:39:23 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'DrupalTV Sprint',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'sprint',
  'language' => 'und',
  'created' => 1425754065,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dcf340d9-a827-48c6-a15b-70116f25db8b',
  'field_sprint_coordinators' => array(),
  'field_sprint_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-19T13:00:00',
        'value2' => '2015-07-19T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_sprint_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Vestibulum eu odio. Nunc nulla. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Praesent ut ligula non mi varius sagittis. Nullam dictum felis eu pede mollis pretium.

Morbi nec metus. Quisque malesuada placerat nisl. Praesent egestas neque eu enim. Phasellus magna. Phasellus gravida semper nisi.

Aliquam lobortis. Pellentesque libero tortor, tincidunt et, tincidunt eget, semper nec, quam. Donec posuere vulputate arcu. Pellentesque auctor neque nec urna. Donec vitae sapien ut libero venenatis faucibus.

Curabitur blandit mollis lacus. Suspendisse potenti. Aenean commodo ligula eget dolor. Nam eget dui. Vestibulum volutpat pretium libero.

Vivamus consectetuer hendrerit lacus. Praesent egestas neque eu enim. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos. Donec vitae sapien ut libero venenatis faucibus. Sed libero.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_image' => array(),
  'field_sprint_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Pls add Sub-Title',
        'format' => NULL,
      ),
    ),
  ),
  'field_sprint_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Nunc sed turpis. In turpis.. Nullam dictum felis eu pede mollis pretium. Duis vel nibh at velit scelerisque suscipit.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_sprint_team' => array(),
  'field_sprint_audiences' => array(),
  'field_sprint_tracks' => array(),
  'field_sprint_drupal_software' => array(),
  'field_sprint_skill_levels' => array(),
  'field_sprint_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-03-07 13:47:45 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  return $nodes;
}
