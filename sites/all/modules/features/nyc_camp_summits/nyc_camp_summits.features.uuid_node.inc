<?php
/**
 * @file
 * nyc_camp_summits.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nyc_camp_summits_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Security & Privacy Summit',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425667682,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '070a739d-a164-434a-887d-2b611727a6f8',
  'field_summit_coordinators' => array(),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-17T13:00:00',
        'value2' => '2015-07-17T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'The Security and Privacy summit takes an in depth look at security in Drupal and the Drupal ecosystem.   We will spend some time discussing best practices around securing your Drupal environment, writing secure Drupal code and securing your site configuration. 

We will look at common mistakes, with real world examples, made by coders and site builders and how those mistakes have lead to sites being compromised.   We will learn about how to find bugs in Drupal code, and how to report them to the  security team. We will also explore the security team’s processes.  Finally, we will also look into what happened with https://www.drupal.org/SA-CORE-2014-005 and how you can be prepared to handle security issues in the future. ',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Sub-Title',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Teaser. Nullam dictum felis eu pede mollis pretium. Phasellus blandit leo ut odio. In hac habitasse platea dictumst. Suspendisse nisl elit, rhoncus eget, elementum ac, condimentum eget, diam. Vestibulum volutpat pretium libero.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-06 13:48:02 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Commerce Summit',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425452530,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2e0e04a1-f3af-4f5e-9cbf-0dc9f02b2430',
  'field_summit_coordinators' => array(),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-17T13:00:00',
        'value2' => '2015-07-17T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'The Commerce Summit is aimed at helping business decision makers (managers and executives) understand how Drupal can be used to keep ahead of the technology curve in order to drive either B2B or B2C engagements. 

This summit will bring together decision makers from enterprise businesses using or considering Drupal. Specifically, we will discuss:
How the Drupal community allows Drupal to do just about anything
How you can engage and support the community
B2B and B2C Drupal success stories and best practices
How to find and manage Drupal vendors
What is Drupal Commerce and the business cases for using it
Beyond Commerce, risk mitigation and efficiency improvements with Drupal

This Summit will be focused on understanding key business decisions related to Drupal and commerce. Nearly all of the presentations will be from organizations that have been successful at adopting Drupal. Attendees will be hearing about real situations faced by peer decision makers to better understand how to make their Drupal projects successful.

If you want to get the most out of your Drupal implementation while driving your business forward, this is the summit for you.
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Sub-TItle',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Maecenas ullamcorper, dui et placerat feugiat, eros pede varius nisi, condimentum viverra felis nunc et lorem. Nunc nulla. Vivamus quis mi. Praesent blandit laoreet nibh. Nam at tortor in tellus interdum sagittis.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-04 02:02:10 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Apps Camp',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425667977,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '349eb695-2438-419d-bf2f-ea364537b7a6',
  'field_summit_coordinators' => array(
    'und' => array(
      0 => array(
        'target_id' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
        'uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
      ),
    ),
  ),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-18T01:00:00',
        'value2' => '2015-07-19T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Curabitur ullamcorper ultricies nisi. Phasellus viverra nulla ut metus varius laoreet. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Vivamus quis mi. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Curabitur ullamcorper ultricies nisi. Phasellus viverra nulla ut metus varius laoreet. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Vivamus quis mi. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo.

Curabitur ullamcorper ultricies nisi. Phasellus viverra nulla ut metus varius laoreet. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Vivamus quis mi. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Curabitur ullamcorper ultricies nisi. Phasellus viverra nulla ut metus varius laoreet. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Vivamus quis mi. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo.


',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Sub-Title',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Curabitur ullamcorper ultricies nisi. Phasellus viverra nulla ut metus varius laoreet. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Vivamus quis mi. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Curabitur ullamcorper ultricies nisi. Phasellus viverra nulla ut metus varius laoreet. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Vivamus quis mi. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-06 13:52:57 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Front Camp',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425668292,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a4ce16d0-2211-4436-9a98-9ec513e60b1b',
  'field_summit_coordinators' => array(),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-03-06T19:00:00',
        'value2' => '2015-03-06T19:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Description. Sed libero. Nullam tincidunt adipiscing enim. Sed magna purus, fermentum eu, tincidunt eu, varius ut, felis. Donec vitae sapien ut libero venenatis faucibus. Suspendisse pulvinar, augue ac venenatis condimentum, sem libero volutpat nibh, nec pellentesque velit pede quis nunc.

 Sed libero. Nullam tincidunt adipiscing enim. Sed magna purus, fermentum eu, tincidunt eu, varius ut, felis. Donec vitae sapien ut libero venenatis faucibus. Suspendisse pulvinar, augue ac venenatis condimentum, sem libero volutpat nibh, nec pellentesque velit pede quis nunc.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Sub-Title',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Teaser. Sed libero. Nullam tincidunt adipiscing enim. Sed magna purus, fermentum eu, tincidunt eu, varius ut, felis. Donec vitae sapien ut libero venenatis faucibus. Suspendisse pulvinar, augue ac venenatis condimentum, sem libero volutpat nibh, nec pellentesque velit pede quis nunc.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-06 13:58:12 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Ops Camp',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425659882,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bf11075d-339c-49d7-b3d7-c8d9c5ee9e90',
  'field_summit_coordinators' => array(),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-17T13:00:00',
        'value2' => '2015-07-17T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'A day long convocation of some of the best engineers on the web for an in-depth exploration of all things DevOps, including a Configuration Management Roundtable. The DevOps Summit will focus on everything Dev, Ops, NoOps, continuous delivery/integration, and everything in between - delving into all of the latest technology and trends, with real, tailored and informative content.

In addition to hosting really great sessions, the DevOps summit will have a number of breakout groups as well as hands-on sessions, which will all be topped off with some great networking opportunities.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Sub-TItle',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Teaser. Phasellus magna. Pellentesque libero tortor, tincidunt et, tincidunt eget, semper nec, quam. Suspendisse non nisl sit amet velit hendrerit rutrum. Fusce risus nisl, viverra et, tempor et, pretium in, sapien. Aenean massa.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-06 11:38:02 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Higher Ed Summit',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425452628,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd2ba029a-ecdd-43fe-b87a-f0e9ad84c272',
  'field_summit_coordinators' => array(),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-17T13:00:00',
        'value2' => '2015-07-17T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'The Higher Education Summit aims to bring together peers from higher education institutions working with Drupal. Drupal\'s versatility is transforming the way higher education uses technology and is being used in many different ways throughout universities: from public-facing university sites, library and departmental websites, to intranets, learning management content repositories and communities, scholarly publishing, platforms for viewing books and photographs, and complete audio, video & multimedia collections. 

If you\'re involved in higher education this will be an opportunity to discuss key topics with peers from other universities. See how colleagues are leveraging Drupal to solve common problems and how they are integrating with authentication and identity management systems, registry and student information systems, and learning management systems. 
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Sub-TItle',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Vivamus aliquet elit ac nisl. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Sed aliquam, nisi quis porttitor congue, elit erat euismod orci, ac placerat dolor lectus quis orci. Nulla consequat massa quis enim. Aenean vulputate eleifend tellus. Donec venenatis vulputate lorem.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-04 02:03:48 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Training Summit',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425452671,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e6f822be-9e80-4d02-abfe-a7367292e26f',
  'field_summit_coordinators' => array(),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-16T13:00:00',
        'value2' => '2015-07-16T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Duis vel nibh at velit scelerisque suscipit. Fusce pharetra convallis urna. Donec interdum, metus et hendrerit aliquet, dolor diam sagittis ligula, eget egestas libero turpis vel mi. In auctor lobortis lacus. Praesent adipiscing.

Pellentesque commodo eros a enim. Sed cursus turpis vitae tortor. Ut a nisl id ante tempus hendrerit. Sed a libero. Aenean tellus metus, bibendum sed, posuere ac, mattis non, nunc.

Vivamus quis mi. Praesent ac sem eget est egestas volutpat. Phasellus viverra nulla ut metus varius laoreet. Fusce convallis metus id felis luctus adipiscing. Etiam iaculis nunc ac metus.

Mauris sollicitudin fermentum libero. Praesent nonummy mi in odio. In ut quam vitae odio lacinia tincidunt. Aenean imperdiet. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos.

Donec sodales sagittis magna. Pellentesque egestas, neque sit amet convallis pulvinar, justo nulla eleifend augue, ac auctor orci leo non est. Fusce fermentum odio nec arcu. Praesent turpis. Donec venenatis vulputate lorem.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Sub-TItle',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Cras sagittis. Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Etiam iaculis nunc ac metus. Praesent egestas tristique nibh. In auctor lobortis lacus.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-04 02:04:31 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Digital Publishing & Media Summit',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425660171,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f4ae0ba3-c52a-46ef-b9be-72c41cb6e3a3',
  'field_summit_coordinators' => array(),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-17T13:00:00',
        'value2' => '2015-07-17T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Proin sapien ipsum, porta a, auctor quis, euismod ut, mi. Vestibulum eu odio. Aenean vulputate eleifend tellus. Pellentesque auctor neque nec urna. Sed mollis, eros et ultrices tempus, mauris ipsum aliquam libero, non adipiscing dolor urna a orci.

Praesent nonummy mi in odio. In hac habitasse platea dictumst. Suspendisse non nisl sit amet velit hendrerit rutrum. Nullam quis ante. Ut leo.

Aliquam lobortis. Maecenas egestas arcu quis ligula mattis placerat. Aenean vulputate eleifend tellus. Pellentesque auctor neque nec urna. Proin faucibus arcu quis ante.

Curabitur a felis in nunc fringilla tristique. Donec posuere vulputate arcu. Proin pretium, leo ac pellentesque mollis, felis nunc ultrices eros, sed gravida augue augue mollis justo. Mauris turpis nunc, blandit et, volutpat molestie, porta ut, ligula. Proin sapien ipsum, porta a, auctor quis, euismod ut, mi.

Nullam tincidunt adipiscing enim. Nullam vel sem. Suspendisse enim turpis, dictum sed, iaculis a, condimentum nec, nisi. Sed a libero. Nam quam nunc, blandit vel, luctus pulvinar, hendrerit id, lorem.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Sub-TItle',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => ' Suspendisse feugiat. Praesent nonummy mi in odio. Aliquam lobortis. Vestibulum eu odio.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-06 11:42:51 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Summits',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1421468577,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f6fac042-92e8-4fe4-9fa9-6ed1d3add7f8',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>Please Provide Your Feedback</h3>

<p><a href="http://nycsummit.drupalgardens.com" target="_blank">http://nycsummit.drupalgardens.com</a></p>

<h3>What is a "Summit"?</h3>

<p><strong>NYC Camp features a full day of "summits." What is a summit exactly?&nbsp;</strong></p>

<p>Basically, a summit brings together a group of people united by an interest in a common domain area, to discuss and share notes and practices. Depending on the topic area of interest, summit formats span&nbsp;a gamut from purely roundtable discussions to highly structured forums with an agenda and presentations, etc.&nbsp;</p>

<p>Summits strive to identify and answer common questions that the participants have in their shared area of interest.&nbsp;The summit format allows for any number of \'modes\' from plenary or panel discussions to presentations; the particular mix of modes that a summit uses varies by what the domain/topic is being discussed. &nbsp;Summits often make use of break-out groups to discuss specific sub-topics. Often, these break-out groups will report back on their findings to the summit attendees at large.&nbsp;</p>

<p>This year\'s NYC Camp will feature summits on the following topics:&nbsp;</p>

<ul>
	<li><a href="/commerce-summit">Commerce</a>&nbsp;-&nbsp;S-1519</li>
	<li><a href="/2014/summit/dev-ops">Dev Ops</a>&nbsp;-&nbsp;S-1521</li>
	<li><a href="/media-summit">Digital Publishing &amp; Media</a>&nbsp;- S-1520</li>
	<li><a href="/2014/summit/drupal-core-summit">Drupal Core</a>&nbsp;- S-1524</li>
	<li><a href="/summit/higher-education-summit">Higher Education</a>&nbsp;- S-2726/2727 Flex</li>
	<li><a href="/2014/summit/NPO-NGO">Non-Profits&nbsp;&amp; NGO</a>&nbsp;- S-1522/1523 Flex</li>
	<li><a href="/2014/summits/security">Security &amp; Privacy</a>&nbsp;- S-1517BR<br />
	and</li>
	<li><a href="/2014/summit/apps-startup">Apps &amp;&nbsp;Startup</a>&nbsp;- NLB-2022 (LANG5)</li>
</ul>

<p>Summits in Drupal were originally based around discussions of \'core\' (ie Drupal\'s main codebase which is extended through contribution.) &nbsp;Core summits were thus an assembly of <a href="https://api.drupal.org/api/drupal/MAINTAINERS.txt">core maintainers</a> meeting to discuss the roadmap for Drupal code. NYC Camp this year will also host a <a href="drupal-core-summit">core summit</a>, which is intended for those developers who are actively contributing to Drupal core. &nbsp;</p>

<p>For more detail information please see the full Friday Summit Day Schedule, which will be added here shortly.&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_images' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'date' => '2015-01-16 23:22:57 -0500',
  'user_uuid' => '463f64d9-5369-4d2e-91ce-929ceaefa62a',
);
  $nodes[] = array(
  'title' => 'Non-Profits & NGO Summit',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425667776,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'faa0f58a-76f4-411b-bfbc-1712a8f227a4',
  'field_summit_coordinators' => array(),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-17T13:00:00',
        'value2' => '2015-07-17T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Non-profits & NGOs deal with many of the same challenges in developing their online program including getting resources, 3rd party CRM integration, establishing effective processes for online engagement, and maintaining their systems.  

This summit aims to bring together mission driven organizations that are using open source technology to facilitate conversation, collaboration, and strategy sharing between non-profits as well as technologists that work in the nonprofit space.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Sub-TItle',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Please add Teaser. Curabitur a felis in nunc fringilla tristique. Fusce a quam. Fusce vulputate eleifend sapien. Phasellus volutpat, metus eget egestas mollis, lacus lacus blandit dui, id egestas quam mauris ut lacus. Vivamus quis mi.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-06 13:49:36 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Core Summit',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'summit',
  'language' => 'und',
  'created' => 1425660279,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ff04fb12-5c6e-4fb5-9506-1b94b07a1e6a',
  'field_summit_coordinators' => array(),
  'field_summit_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-13T13:00:00',
        'value2' => '2015-07-19T21:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_summit_description' => array(
    'und' => array(
      0 => array(
        'value' => 'This face-to-face get together of Drupal core contributors will be a strong opportunity to take stock of what the rundown looks like for the release of Drupal 8, what areas need to be paid attention to, and how to resolve cross-cutting concerns in the remaining issues until a suitable release candidate will be ready. 

This is a meeting for core developers to put their heads together to help move Drupal 8 a few more steps forward.

Aspiring core contributors are advised to come to sprints on Sunday. This summit is mainly for core maintainers, i.e. those who are actively contributing to the Drupal Core project.
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_image' => array(),
  'field_summit_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'A week long gathering for Drupal Core contributors',
        'format' => NULL,
      ),
    ),
  ),
  'field_summit_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'This is a meeting for core developers to put their heads together to help move Drupal 8 a few more steps forward.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_summit_team' => array(),
  'field_summit_tracks' => array(),
  'field_summit_audiences' => array(),
  'field_summit_skill_levels' => array(),
  'field_summit_drupal_software' => array(),
  'field_summit_tags' => array(),
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
  'date' => '2015-03-06 11:44:39 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  return $nodes;
}
