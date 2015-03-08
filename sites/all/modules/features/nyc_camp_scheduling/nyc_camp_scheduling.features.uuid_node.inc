<?php
/**
 * @file
 * nyc_camp_scheduling.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nyc_camp_scheduling_uuid_features_default_content() {
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
  'title' => 'NLB-2062A (LANG2)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199840,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '09e0514f-fe17-4240-b898-f633ab39466e',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:30:40 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-5',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199775,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '09e959fe-e38c-495f-b548-030008f56578',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:29:35 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-2062 (LANG1)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199827,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0ae5a5e7-8bed-440e-9754-b8d4a44346ef',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:30:27 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '11:30am - 12:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395735014,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0bee3247-9c20-40c3-88f4-91e0c89749a8',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 41400,
        'value2' => 44100,
        'value_formatted' => '11:30am',
        'value2_formatted' => '12:15pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 04:10:14 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '7:45pm - 8:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395739318,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0c3cabbf-0fef-4783-ad88-168b97fd33a7',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 71100,
        'value2' => 73800,
        'value_formatted' => '7:45pm',
        'value2_formatted' => '8:30pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 05:21:58 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Drupal for Decision Makers',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'training',
  'language' => 'und',
  'created' => 1425451300,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0d466c71-4d74-438c-b7aa-f4fa5c9252c2',
  'field_training_dates' => array(
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
  'field_training_description' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong>Course Description</strong></p>

<p>What are the big decisions that Drupal team leaders have to make to ensure the lasting success of their projects and people? On Drupal projects, how do you address needs and mitigate risks?</p>

<p>This training is lead by authors of the Definitive Guide to Drupal 7 and covers several key areas that are crucial for decision makers.</p>

<p>If you are responsible for leading a Drupal team, or are exploring adopting Drupal for your team, you are invited to sign up below. No technical experience with Drupal or web technology is required - the training is designed for leaders of teams who may or may not perform development tasks themselves.</p>

<p>The day\'s format is designed to give brief, broad overviews of each topic, with follow-on in small groups using hands-on examples. On-site and remote authors will lead each of the small groups.</p>

<p><strong>Bring your laptop.</strong></p>

<p>The training has been developed by OwnSourcing and will be led by two authors of the Definitive Guide to Drupal 7: Kay VanValkenburgh, chief learning officer&nbsp;at OwnSourcing, and&nbsp;Benjamin Melançon, principal at Agaric /&nbsp;Definitive Guide lead author. Additional instructors Leslie Glynn (OwnSourcing trainer) and Micky Metts (Agaric princpal) will co-lead session breakouts.</p>

<p><strong>Learning Objectives</strong></p>

<p>This training helps decision makers recognize how their choices regarding the following topics affect the efficiency and quality of Drupal team output. The day\'s takeaways will enable them to provide the structure, tools and information that Drupal development teams and projects need to succeed.</p>

<p><strong>Who will gain the most from this course?</strong></p>

<p>People who are responsible for the success of development teams working on high priority projects, including directors of IT, directors of communications, directors of human resources, project managers, development team leads.</p>

<p><strong>Prerequisites for this course</strong></p>

<p>Experience addressing the challenges facing web development teams, whether their teams use Drupal or another technology (no familiarity with Drupal required).</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_image' => array(),
  'field_training_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Key considerations when leading Drupal development teams',
        'format' => NULL,
      ),
    ),
  ),
  'field_training_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This training is lead by authors of the Definitive Guide to Drupal 7 and covers several key areas that are crucial for decision makers.</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_trainers' => array(),
  'field_training_drupal_software' => array(),
  'field_training_audiences' => array(),
  'field_training_prerequisites' => array(),
  'field_training_skill_levels' => array(),
  'field_training_tracks' => array(),
  'field_training_tags' => array(),
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
  'date' => '2015-03-04 01:41:40 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '10:15am - 10:45am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396686037,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0ddfc09a-bb06-419a-a65d-abeb7ce2d063',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 36900,
        'value2' => 38700,
        'value_formatted' => '10:15am',
        'value2_formatted' => '10:45am',
      ),
    ),
  ),
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
  'date' => '2014-04-05 04:20:37 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '10:30am - 11:15am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395734975,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '11effd6b-44d6-46c9-9919-991250e0001d',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 37800,
        'value2' => 40500,
        'value_formatted' => '10:30am',
        'value2_formatted' => '11:15am',
      ),
    ),
  ),
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
  'date' => '2014-03-25 04:09:35 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:00pm - 3:20pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396766951,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1272067c-8910-4192-bfa4-5ac1001203d6',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 54000,
        'value2' => 55200,
        'value_formatted' => '3:00pm',
        'value2_formatted' => '3:20pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:49:11 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'CB-D',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199763,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '139485f2-39f1-469d-8da8-4a9b49bbd489',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:29:23 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '4:00pm - 4:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396724810,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '14359db6-2875-4bee-81d9-f551a4caa1a4',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 57600,
        'value2' => 59400,
        'value_formatted' => '4:00pm',
        'value2_formatted' => '4:30pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 15:06:50 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:00pm - 1:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395735092,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1477236f-7d6c-4e3c-9498-5929a8827204',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 46800,
        'value2' => 48600,
        'value_formatted' => '1:00pm',
        'value2_formatted' => '1:30pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 04:11:32 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Advanced RWD & Sass Training',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'training',
  'language' => 'und',
  'created' => 1425451420,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '147f7f4e-1256-4963-8cea-f870bf1e3d02',
  'field_training_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-03-04T06:45:00',
        'value2' => '2015-03-04T06:45:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_training_description' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong>Ruby with Bundler and Node.js with yo, bower, grunt-cli, generator-sketch, and generator-north&nbsp;must be installed and running globally on your computer before the training begins. Installation will not be covered.</strong></p>

<p><strong>This will be taught as an advanced course.&nbsp;Fundamental knowledge of RWD techniques is required.</strong> This session will *not* go over the basics of media queries, conditional CSS, or other beginning topics of RWD.</p>

<p>Responsive Web Design is on everyone\'s mind at the moment, and for good reason. With more mobile device activations per day than human births and full internet browsers coming to television sets and gaming consoles (both home and portable), the old techniques we have used to create pixel perfect sites for desktop audiences have already become a thing of the past.</p>

<p>This session will explore some of the tools and techniques available today to build responsive sites with a focus on the CSS preprocessor, Sass, and the Sass framework Compass. These tools can ease much of the hard work related to creating truly awesome responsive websites. We will explore:</p>

<ul>
	<li>How to create content-first grid systems unique to our designs</li>
	<li>How to author mobile-first, em-based media queries using a simple, human-readable workflow</li>
	<li>How to combine feature detection and Sass, making progressive enhancement a breeze</li>
</ul>

<p>This workshop will be very hands-on so everyone can become very familiar with the tools we\'re using. You should have some pre-existing knowledge of Sass and Compass going into this workshop as well as a working knowledge of Responsive Web Design. We are going to jump right into coding with very little introduction and will be taught at an intermediate to advanced level.</p>

<p>The code examples we\'ll use to provide training is all open source. They will be available for download after the workshop.</p>

<p><strong>COURSE PREREQUISITES</strong></p>

<p><strong>Hardware</strong></p>

<ul>
	<li>A computer that can be set up to run the Ruby 2.0.0p451 programming language. Sass requires Ruby.</li>
	<li>A computer that can be set up to run Node.js.</li>
</ul>

<p><strong>Software</strong></p>

<ul>
	<li>A plain-text editor or coding IDE. For this course WYSIWYG editing is impossible, not just discouraged.</li>
	<li>Ruby with the Bundler gem installed. Installation will not be covered in the training.</li>
	<li>Node.js with yo, bower, grunt-cli, gulp, generator-sketch, and generator-north installed globally. Installation will not be covered in the training.</li>
</ul>

<p><strong>Skills</strong></p>

<ul>
	<li><strong>Fundamental knowledge of RWD techniques is required. </strong>This session will *not* go over the basics of media queries, conditional CSS, or other beginning topics of RWD.</li>
</ul>

<p><strong>TARGET AUDIENCE</strong></p>

<p>The target audience includes intermediate/advanced themers and frontend developers. This session will assume that you have built responsive websites before and are looking for a more refined workflow.</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_image' => array(),
  'field_training_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Advanced Responsive Web Design Techniques',
        'format' => NULL,
      ),
    ),
  ),
  'field_training_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Responsive Web Design is on everyone\'s mind at the moment, and for good reason. With more mobile device activations per day than human births and full internet browsers coming to television sets and gaming consoles (both home and portable), the old techniques we have used to create pixel perfect sites for desktop audiences have already become a thing of the past.&nbsp;This will be taught as an advanced course.&nbsp;Fundamental knowledge of RWD techniques is required.&nbsp;</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_trainers' => array(),
  'field_training_drupal_software' => array(),
  'field_training_audiences' => array(),
  'field_training_prerequisites' => array(),
  'field_training_skill_levels' => array(),
  'field_training_tracks' => array(),
  'field_training_tags' => array(),
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
  'date' => '2015-03-04 01:43:40 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '11:00am - 11:15am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396766818,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '155c5bfb-5e1f-4f11-b021-40c7b0587b5d',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 39600,
        'value2' => 40500,
        'value_formatted' => '11:00am',
        'value2_formatted' => '11:15am',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:46:58 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:15pm - 2:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396767329,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '16762c58-7c79-4a65-a2e2-cc0e60c9916e',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 47700,
        'value2' => 51300,
        'value_formatted' => '1:15pm',
        'value2_formatted' => '2:15pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:55:29 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-4',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396676320,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1ea20782-e9f8-4320-8d53-15f0593530ca',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-04-05 01:38:40 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'CB-2',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199672,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1fb0f9d2-8b8f-434c-b359-3eec2a8f8a5a',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:27:52 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:50pm - 4:10pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396767413,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1fbbca79-ca1a-4b93-a33c-41b0a0efdbec',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 57000,
        'value2' => 58200,
        'value_formatted' => '3:50pm',
        'value2_formatted' => '4:10pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:56:53 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Beginning Drupal',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'training',
  'language' => 'und',
  'created' => 1425451434,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '243a388c-0d1a-47a6-bf7a-b9439b4cb5da',
  'field_training_dates' => array(
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
  'field_training_description' => array(
    'und' => array(
      0 => array(
        'value' => '<p>A training session delivered by Alexander Ross (<a href="http://twitter.com/bleen18">@bleen18</a> | <a href="http://bleen.net/">bleen.net</a>) from NBC Universal.</p>

<p>This Beginning Drupal course introduces you to the core concepts behind building websites in Drupal 7. This course will take you through a series of practical exercises to build a functional Drupal 7 site and prepare you to create your own dynamic websites using Drupal.</p>

<p><strong>Who is this course for?</strong></p>

<p>This beginning course is for anybody who wants to start making websites with Drupal. Among those who this course is for are:</p>

<ul>
	<li>Web Designers and Developers who want to learn how to make more powerful websites</li>
	<li>WordPress developers who want to add Drupal to their skillset</li>
	<li>Business owners who want to evaluate Drupal for their business</li>
	<li>PHP programmers who want to learn how to build sites in Drupal</li>
</ul>

<p>This training does not involve any programming, scripting, off-by-one errors, css preprocessing, or Java whatsoever.</p>

<p><strong>What will you learn?</strong></p>

<ul>
	<li>Adding and editing site content</li>
	<li>Creating new content types and fields</li>
	<li>Controlling page elements with blocks</li>
	<li>User management</li>
	<li>Controlling the look of your site with themes</li>
	<li>Installing extra modules to add functionality to your site</li>
	<li>Keeping your site up-to-date</li>
	<li>Using the Drupal community to learn even more</li>
</ul>

<p><strong>Prerequisites:</strong></p>

<ul>
	<li>You should already have an instance of Drupal available to work with. This can either be a hosted Drupal site on <a href="https://www.getpantheon.com/">Pantheon</a> or a local version on your laptop.</li>
	<li>This course assumes no Drupal knowledge. If you are ready to learn, this course is for you!</li>
</ul>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_image' => array(),
  'field_training_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Intro to the basic concepts behind building websites in Drupal 7',
        'format' => NULL,
      ),
    ),
  ),
  'field_training_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This Beginning Drupal course introduces you to the core concepts behind building websites in Drupal 7. This course will take you through a series of practical exercises to build a functional Drupal 7 site and prepare you to create your own dynamic websites using Drupal.</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_trainers' => array(),
  'field_training_drupal_software' => array(),
  'field_training_audiences' => array(),
  'field_training_prerequisites' => array(),
  'field_training_skill_levels' => array(),
  'field_training_tracks' => array(),
  'field_training_tags' => array(),
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
  'date' => '2015-03-04 01:43:54 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:15pm - 1:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396766867,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2b253965-21e7-4fda-8158-25ec7c998d28',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 47700,
        'value2' => 49500,
        'value_formatted' => '1:15pm',
        'value2_formatted' => '1:45pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:47:47 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-1524',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396169994,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2c5dfbd7-7fdd-4749-806e-484d3fe1ccd3',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 04:59:54 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '10:15am - 11:00am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396766766,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2cdc46f1-7e51-4c1e-a47b-e7e09582e9cf',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 36900,
        'value2' => 39600,
        'value_formatted' => '10:15am',
        'value2_formatted' => '11:00am',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:46:06 -0400',
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
  'title' => '9:00am - 10:30am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396996497,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2f1b2a1b-3310-4e6e-b2cb-433ea161ab4f',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 32400,
        'value2' => 37800,
        'value_formatted' => '9:00am',
        'value2_formatted' => '10:30am',
      ),
    ),
  ),
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
  'date' => '2014-04-08 18:34:57 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '9:00am - 9:30am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395734910,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '32c5c966-e43c-4201-a56f-ca7eb9c6f365',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 32400,
        'value2' => 34200,
        'value_formatted' => '9:00am',
        'value2_formatted' => '9:30am',
      ),
    ),
  ),
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
  'date' => '2014-03-25 04:08:30 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:15pm - 4:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396671459,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '33fb62b2-1f1e-42d0-9c21-8b966509f2a4',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 54900,
        'value2' => 57600,
        'value_formatted' => '3:15pm',
        'value2_formatted' => '4:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 00:17:39 -0400',
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
  'title' => '5:15pm - 6:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395739019,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '351fa998-59e0-4d28-a4f2-be0880885d2a',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 62100,
        'value2' => 64800,
        'value_formatted' => '5:15pm',
        'value2_formatted' => '6:00pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 05:16:59 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-1519',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396169902,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3c45923a-88cd-4b97-9506-7b6bd34cde57',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 04:58:22 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Multilingual Hands-On Training',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'training',
  'language' => 'und',
  'created' => 1425451401,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '40507aca-6e1b-4c64-9a7e-28e45dab3cef',
  'field_training_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-17T14:00:00',
        'value2' => '2015-07-17T16:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_training_description' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Over a thousand people participated in the issues around improving multilingual features and APIs in Drupal 8 for the past three years. There are around a thousand issues, most of which are resolved in this initiative as of this submission making Drupal 8 a truly outstanding release for everybody looking to create even single language non-English sites but especially those making multilingual sites. Although there will surely be contributed modules useful to round out multilingual sites in Drupal 8, there is support for way more than there was in Drupal 7 core and even if you add in all available contributed modules - and with less code and more unified approaches.</p>

<p>This training provides a hands-on way showing you around all the great improvements and gives tips as to how to best utilise the new solutions. We will also talk about where contributed modules will still be needed.</p>

<p>The ideal attendee at this session has some experience in Drupal 6 or 7 foreign language and/or multilingual site building, however those who have no experience in foreign/multilingual site building will also get a lot out of it.</p>

<p>Want to be involved in this project? See&nbsp;<a href="http://hojtsy.hu/multilingual-drupal8">http://hojtsy.hu/multilingual-drupal8</a>&nbsp;for an article series on the details on what we accomplished.&nbsp;<a href="http://www.drupal8multilingual.org/">http://www.drupal8multilingual.org/</a>&nbsp;is our initiative home and we have meetings every Wednesday to discuss and move current efforts forward (see times on the front page). We also&nbsp;<a href="https://groups.drupal.org/node/427578">have one of the biggest sprints at and before/after DrupalCon</a>.</p>

<p>Ps. its not evident from this entry, but the lab actually runs until 6pm (see&nbsp;<a href="https://amsterdam2014.drupal.org/session/drupal-8-multilingual-hands-continued">https://amsterdam2014.drupal.org/session/drupal-8-multilingual-hands-con...</a>&nbsp;for the other scheduled session that follows this one and blocks out that time in the schedule).</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_image' => array(),
  'field_training_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'A Hands-On Training on Drupal 8 Multilingual Features',
        'format' => NULL,
      ),
    ),
  ),
  'field_training_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This training to provides a hands-on way showing you around all the great improvements to multilingual in Drupal 8&nbsp;and gives tips as to how to best utilise the new solutions. We will also talk about where contributed modules will still be needed.</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_trainers' => array(),
  'field_training_drupal_software' => array(),
  'field_training_audiences' => array(),
  'field_training_prerequisites' => array(),
  'field_training_skill_levels' => array(),
  'field_training_tracks' => array(),
  'field_training_tags' => array(),
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
  'date' => '2015-03-04 01:43:21 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-2009A (LANG4)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199900,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '407c19d2-cc3e-4b23-8a22-38bdb5e7a868',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:31:40 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:00pm - 1:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396671363,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '438284f8-960c-4a45-ac2b-058241b26ce0',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 46800,
        'value2' => 49500,
        'value_formatted' => '1:00pm',
        'value2_formatted' => '1:45pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 00:16:03 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '10:45am - 11:00am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396671230,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '447b02a3-54b2-4eba-9988-2736d89907b9',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 38700,
        'value2' => 39600,
        'value_formatted' => '10:45am',
        'value2_formatted' => '11:00am',
      ),
    ),
  ),
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
  'date' => '2014-04-05 00:13:50 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '12:30pm - 1:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396915946,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4483c7d2-8ff2-4552-a879-ba1d7bae0dd9',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 45000,
        'value2' => 48600,
        'value_formatted' => '12:30pm',
        'value2_formatted' => '1:30pm',
      ),
    ),
  ),
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
  'date' => '2014-04-07 20:12:26 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-1518',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396169888,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4563b5b6-eeb1-4677-8843-ddbcb2e2276f',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 04:58:08 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '11:00am - 11:30am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396889688,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '48ef2aad-65d5-45b3-9bb6-8e28ae92bc61',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 39600,
        'value2' => 41400,
        'value_formatted' => '11:00am',
        'value2_formatted' => '11:30am',
      ),
    ),
  ),
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
  'date' => '2014-04-07 12:54:48 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-2726/2727 Flex',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396170043,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4930790f-1f4f-495a-a676-cba7267962cb',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 05:00:43 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '11:15am - 12:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396766791,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '494ccd39-410e-42e4-8be2-f775360f81d2',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 40500,
        'value2' => 44100,
        'value_formatted' => '11:15am',
        'value2_formatted' => '12:15pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:46:31 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-1522/1523 Flex',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396169980,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4bc843c9-c682-46dc-8b10-37d55427703c',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 04:59:40 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '4:15pm - 4:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396770844,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4c198b36-c76d-4835-a753-ff998803855d',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 58500,
        'value2' => 59400,
        'value_formatted' => '4:15pm',
        'value2_formatted' => '4:30pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 03:54:04 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '7:15pm - 7:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396850517,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4c2ede5c-e202-4d31-92b4-d923ea14fb89',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 69300,
        'value2' => 71100,
        'value_formatted' => '7:15pm',
        'value2_formatted' => '7:45pm',
      ),
    ),
  ),
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
  'date' => '2014-04-07 02:01:57 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:45pm - 2:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396766892,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4fda9169-d53c-4b87-b81e-a221a4793cbc',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 49500,
        'value2' => 53100,
        'value_formatted' => '1:45pm',
        'value2_formatted' => '2:45pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:48:12 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:30pm - 2:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395735216,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '516b70db-bf9a-4d17-a31d-36780f97b67d',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 48600,
        'value2' => 52200,
        'value_formatted' => '1:30pm',
        'value2_formatted' => '2:30pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 04:13:36 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:30pm - 2:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395735128,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '518e9784-adfd-4ff7-8073-f68a39506a25',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 48600,
        'value2' => 50400,
        'value_formatted' => '1:30pm',
        'value2_formatted' => '2:00pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 04:12:08 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'CB-3',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199689,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '54663afe-42b8-4419-816e-f8b92a295afc',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:28:09 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:45pm - 2:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396671384,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '55c39aae-5132-4c01-bb4b-bb1be61fa70e',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 49500,
        'value2' => 51300,
        'value_formatted' => '1:45pm',
        'value2_formatted' => '2:15pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 00:16:24 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '9:30am - 10:15am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395734951,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '55e29ca6-38b5-4043-9513-5e137776c843',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 34200,
        'value2' => 36900,
        'value_formatted' => '9:30am',
        'value2_formatted' => '10:15am',
      ),
    ),
  ),
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
  'date' => '2014-03-25 04:09:11 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '4:45pm - 5:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396995954,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5cb5a813-0828-47dc-a104-07bca09ae568',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 60300,
        'value2' => 63000,
        'value_formatted' => '4:45pm',
        'value2_formatted' => '5:30pm',
      ),
    ),
  ),
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
  'date' => '2014-04-08 18:25:54 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
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
  'title' => 'NLB-E',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396506086,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5e571133-a084-441e-8022-d1a869441d80',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-04-03 02:21:26 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'CB-A',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199725,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5f8b843f-f2f6-49f8-b322-adc16bd76609',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:28:45 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Conference Building',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'building',
  'language' => 'und',
  'created' => 1395740934,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '60f9f21b-eb53-4fd0-b255-c7f7109b7bcc',
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
  'date' => '2014-03-25 05:48:54 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-1520',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396169915,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '61ea7a76-6e45-4cee-8ba3-4a3696ee82c9',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 04:58:35 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '4:10pm - 4:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396767439,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '621b2b94-e368-4e12-b4d1-61bb34f31c2a',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 58200,
        'value2' => 59400,
        'value_formatted' => '4:10pm',
        'value2_formatted' => '4:30pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:57:19 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:00pm - 3:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396671407,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '63a31b2b-2c9b-4ea0-9277-297afcbe6020',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 54000,
        'value2' => 54900,
        'value_formatted' => '3:00pm',
        'value2_formatted' => '3:15pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 00:16:47 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:30pm - 3:50pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396767393,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6537989a-56ce-461a-a492-c9ad69483e6d',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 55800,
        'value2' => 57000,
        'value_formatted' => '3:30pm',
        'value2_formatted' => '3:50pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:56:33 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '2:15pm - 3:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396684292,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '665118e4-d4e4-44e9-b5ea-48d53a377412',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 51300,
        'value2' => 54000,
        'value_formatted' => '2:15pm',
        'value2_formatted' => '3:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 03:51:32 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-E',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396506085,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '665a4f24-e019-43c4-9fb1-5fd34fda5287',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-04-03 02:21:25 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '2:00pm - 2:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395735171,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '67dac113-4e73-45f9-8e11-6d262dd000ae',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 50400,
        'value2' => 52200,
        'value_formatted' => '2:00pm',
        'value2_formatted' => '2:30pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 04:12:51 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-2034 (LANG7)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199932,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6d530835-f49d-49a0-b9e1-36ef3fc64f88',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:32:12 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '12:15pm - 1:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395735069,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6da9de8a-f803-4dad-a7d8-29b70bcbd071',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 44100,
        'value2' => 46800,
        'value_formatted' => '12:15pm',
        'value2_formatted' => '1:00pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 04:11:09 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '6:00pm - 7:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395739041,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6e940e86-bbe8-402d-9fb1-3e5d01abbca6',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 64800,
        'value2' => 68400,
        'value_formatted' => '6:00pm',
        'value2_formatted' => '7:00pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 05:17:21 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Git Training',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'training',
  'language' => 'und',
  'created' => 1425451258,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7043633e-1a07-4ff2-b4be-913045a0aa81',
  'field_training_dates' => array(
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
  'field_training_description' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This is a one-hour introductory training on Git during which you will set up Git locally, configure Git on your drupal.org account, and learn how it works through the practical examples of getting set up to use Drupal 8 — and contribute back!</p>

<p>Ever made a mistake and wished for the power to turn back time? In this session you\'ll experience the magical world of version control, where you can:</p>

<ul>
	<li>try out massive code changes without worrying that you\'ll break your entire site,</li>
	<li>have access to different versions of your code without saving tons of copies with elaborate naming schemes, and</li>
	<li>collaborate with others without ever again having to utter the phrase, "Okay, I\'ve finished working on styles.css, so you can go ahead and make your changes now."</li>
</ul>

<p>This will be a play-along crash course on Git, the version control system that Drupal.org developers (and lots of other people) use to share code with one another and save themselves time and misery.</p>

<p>We\'ll start with fundamental commands, trying them out along the way. By the end of the session you\'ll have mastered a simple daily workflow that you\'ll be able to start using immediately. Plus, you\'ll leave with a cheat sheet and resources for future reference.</p>

<p>This session will include:</p>

<ul>
	<li>Why use version control?</li>
	<li>Why use Git?</li>
	<li>How to use Git repositories on Drupal.org</li>
	<li>Fundamental commands</li>
	<li>A simple daily workflow</li>
	<li>How to turn back time when something goes wrong</li>
	<li>How to use Git to experiment safely</li>
	<li>How to see who did what when and review changes</li>
	<li>Additional resources/Where to learn more (if you\'d like to get a head start:&nbsp;<a href="http://pcottle.github.io/learnGitBranching/">Learn Git Branching</a></li>
</ul>

<p><em>If you\'ve been meaning to get around to learning Git, now\'s the time!</em></p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_image' => array(),
  'field_training_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Intro training on Git to get you up, running & contributing',
        'format' => NULL,
      ),
    ),
  ),
  'field_training_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This is a one-hour introductory training on Git during which you will set up Git locally, configure Git on your drupal.org account, and learn how it works through the practical examples of getting set up to use Drupal 8 — and contribute back!</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_trainers' => array(),
  'field_training_drupal_software' => array(),
  'field_training_audiences' => array(),
  'field_training_prerequisites' => array(),
  'field_training_skill_levels' => array(),
  'field_training_tracks' => array(),
  'field_training_tags' => array(),
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
  'date' => '2015-03-04 01:40:58 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-1517BR',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396169834,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '73a6a046-4a22-47cd-8a2b-6812c2f896e6',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 04:57:14 -0400',
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
  'title' => '3:30pm - 4:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395738859,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7488b14f-2348-405d-a4e4-96179244dd6a',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 55800,
        'value2' => 58500,
        'value_formatted' => '3:30pm',
        'value2_formatted' => '4:15pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 05:14:19 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '6:00pm - 6:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396850497,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '756f8fec-af7a-41db-ab3f-c0f88a86b097',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 64800,
        'value2' => 67500,
        'value_formatted' => '6:00pm',
        'value2_formatted' => '6:45pm',
      ),
    ),
  ),
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
  'date' => '2014-04-07 02:01:37 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-2034A (LANG8)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199949,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7da0a32c-4cd1-4e90-9310-cb430c92d3a0',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:32:29 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:20pm - 3:40pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396747483,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7e9875e9-7c0a-4a66-a6da-e99aeb4077a0',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 55200,
        'value2' => 56400,
        'value_formatted' => '3:20pm',
        'value2_formatted' => '3:40pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 21:24:43 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:00pm - 3:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396771499,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '80c72664-b3e8-4291-9221-7df39f486557',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 54000,
        'value2' => 56700,
        'value_formatted' => '3:00pm',
        'value2_formatted' => '3:45pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 04:04:59 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-2728',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396170057,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '83b703a4-1cda-4499-9e76-c4534dda1eb7',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 05:00:57 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'North Lawn Building',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'building',
  'language' => 'und',
  'created' => 1395740918,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '84ba14e9-dfbd-43aa-a69e-52017dcdb358',
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
  'date' => '2014-03-25 05:48:38 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
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
  'title' => 'NYC Camp 2015',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'conference',
  'language' => 'und',
  'created' => 1425452227,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '881e207d-353a-4c88-99a9-64173cba2945',
  'field_conference_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2015-07-13T00:00:00',
        'value2' => '2015-07-19T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
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
  'date' => '2015-03-04 01:57:07 -0500',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-8',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199809,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8bdb06de-9812-4a5b-8e22-cd4c81b2f6dd',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:30:09 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:30pm - 2:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396806736,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8c4c33c0-54f9-4dff-9d8b-32e40d42fb79',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 48600,
        'value2' => 51300,
        'value_formatted' => '1:30pm',
        'value2_formatted' => '2:15pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 13:52:16 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '4:00pm - 4:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396995873,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8db75790-096f-497b-88f4-dc587c7bd6f5',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 57600,
        'value2' => 60300,
        'value_formatted' => '4:00pm',
        'value2_formatted' => '4:45pm',
      ),
    ),
  ),
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
  'date' => '2014-04-08 18:24:33 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '10:00am - 10:45am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396671072,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9020c210-1a74-44ae-a4c9-66f4823c365a',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 36000,
        'value2' => 38700,
        'value_formatted' => '10:00am',
        'value2_formatted' => '10:45am',
      ),
    ),
  ),
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
  'date' => '2014-04-05 00:11:12 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Secretariat Building',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'building',
  'language' => 'und',
  'created' => 1396169847,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '93359252-91c0-47d6-a6f9-cebcacc606ac',
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
  'date' => '2014-03-30 04:57:27 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '4:30pm - 5:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396724828,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '967cb258-06dd-4840-ac2f-4f2e11391300',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 59400,
        'value2' => 61200,
        'value_formatted' => '4:30pm',
        'value2_formatted' => '5:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 15:07:08 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-2022 (LANG5)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199910,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '97873ff8-dff5-4686-81e6-b17d33c44faa',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:31:50 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '11:15am - 11:30am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396808622,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '97f463d8-50f2-44e2-9736-4163d370f02b',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 40500,
        'value2' => 41400,
        'value_formatted' => '11:15am',
        'value2_formatted' => '11:30am',
      ),
    ),
  ),
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
  'date' => '2014-04-06 14:23:42 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '9:30am - 10:00am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396671024,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '98abb55b-5c03-4d78-bed1-8e1c7b4afdb8',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 34200,
        'value2' => 36000,
        'value_formatted' => '9:30am',
        'value2_formatted' => '10:00am',
      ),
    ),
  ),
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
  'date' => '2014-04-05 00:10:24 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '2:15pm - 2:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396767358,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9e079469-44e3-4162-8209-cd75066c6d21',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 51300,
        'value2' => 53100,
        'value_formatted' => '2:15pm',
        'value2_formatted' => '2:45pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:55:58 -0400',
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
  'title' => 'KC 802 - Community Spotlight ',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1371422539,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a1753ce8-83bd-4b6b-a1fa-dd14cb00ef8e',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2013-06-16 18:42:19 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-2022A (LANG6)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199922,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a1d080b5-3aa9-459a-84de-01ba7084bbfe',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:32:02 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:00pm - 3:20pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396747471,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a408baa0-eec0-4d65-b509-2d645c3a02e2',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 54000,
        'value2' => 55200,
        'value_formatted' => '3:00pm',
        'value2_formatted' => '3:20pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 21:24:31 -0400',
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
  'title' => '10:00am - 11:00am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396758097,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a7c0a8d4-1f80-4af8-b32c-4c6ac52beba4',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 36000,
        'value2' => 39600,
        'value_formatted' => '10:00am',
        'value2_formatted' => '11:00am',
      ),
    ),
  ),
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
  'date' => '2014-04-06 00:21:37 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '2:30pm - 3:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395738976,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a873bd38-3e7d-421c-af2a-8bd1d7931ce9',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 52200,
        'value2' => 54900,
        'value_formatted' => '2:30pm',
        'value2_formatted' => '3:15pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 05:16:16 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '12:15pm - 1:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396766842,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'aab7d790-2195-4f7a-92cf-51faa87fdf72',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 44100,
        'value2' => 47700,
        'value_formatted' => '12:15pm',
        'value2_formatted' => '1:15pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:47:22 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB Commons',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199963,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ababa997-19e9-4d7f-a234-2fb73cb1218e',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:32:43 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'CB-C',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199752,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ac43e34f-dc01-409d-909f-2c56b88a3e00',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:29:12 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '9:00am - 10:00am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396760829,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ace60575-fbe6-4550-8bc6-56f1a620ed37',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 32400,
        'value2' => 36000,
        'value_formatted' => '9:00am',
        'value2_formatted' => '10:00am',
      ),
    ),
  ),
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
  'date' => '2014-04-06 01:07:09 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '2:45pm - 3:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396763363,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ad19bf94-19be-4782-9493-77cd6758de9a',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 53100,
        'value2' => 54900,
        'value_formatted' => '2:45pm',
        'value2_formatted' => '3:15pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 01:49:23 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-6',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199783,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ad209998-c555-4832-a6b8-57a24a98c013',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:29:43 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:45pm - 4:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396771079,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ad256ac5-d453-4b0a-b80a-ed619dfcfdc8',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 56700,
        'value2' => 57600,
        'value_formatted' => '3:45pm',
        'value2_formatted' => '4:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 03:57:59 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:00pm - 3:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396767057,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'aea9b00f-cf55-40e6-81eb-a3497b4fe209',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 54000,
        'value2' => 55800,
        'value_formatted' => '3:00pm',
        'value2_formatted' => '3:30pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:50:57 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Skirball Theatre',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1373691290,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'af6df16e-272f-4902-9e39-545445aa30b8',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2013-07-13 00:54:50 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-1525',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396170011,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b1d37588-3c19-4f34-baba-5c351454b617',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 05:00:11 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '11:20am - 11:40am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396760928,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b2fa0564-f464-4e04-aeee-de2a3899467d',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 40800,
        'value2' => 42000,
        'value_formatted' => '11:20am',
        'value2_formatted' => '11:40am',
      ),
    ),
  ),
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
  'date' => '2014-04-06 01:08:48 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '12:00pm - 1:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396671254,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b4267306-9246-414b-8ac8-96fa7215fced',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 43200,
        'value2' => 46800,
        'value_formatted' => '12:00pm',
        'value2_formatted' => '1:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 00:14:14 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'United Nations',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'venue',
  'language' => 'und',
  'created' => 1395740052,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b5afef84-2c3c-4221-839b-1fbafc703894',
  'field_venue_conference' => array(),
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
  'date' => '2014-03-25 05:34:12 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '4:30pm - 5:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395738914,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b7d3c8ca-2607-4867-afde-9b3f713f4c58',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 59400,
        'value2' => 62100,
        'value_formatted' => '4:30pm',
        'value2_formatted' => '5:15pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 05:15:14 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '1:00pm - 2:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396808821,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b8bce888-b6ac-4344-8dfa-00f489d4c8f1',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 46800,
        'value2' => 50400,
        'value_formatted' => '1:00pm',
        'value2_formatted' => '2:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 14:27:01 -0400',
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
  'title' => '4:00pm - 4:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396771159,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bf8019e5-f913-44eb-b1a1-1e97343ab8d3',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 57600,
        'value2' => 58500,
        'value_formatted' => '4:00pm',
        'value2_formatted' => '4:15pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 03:59:19 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '12:00pm - 12:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396915456,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c16005a6-75e0-4b71-8fb1-7b4e44f2bf77',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 43200,
        'value2' => 45000,
        'value_formatted' => '12:00pm',
        'value2_formatted' => '12:30pm',
      ),
    ),
  ),
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
  'date' => '2014-04-07 20:04:16 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-7',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199794,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c29d5f81-0765-4df0-b020-32868f38f610',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:29:54 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '11:15am - 12:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396804801,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c663818a-3f29-402d-83ee-8eb5be7c3c93',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 40500,
        'value2' => 43200,
        'value_formatted' => '11:15am',
        'value2_formatted' => '12:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 13:20:01 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '7:00pm - 7:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395738941,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cc7b278f-9253-4c14-abf1-8d8ba1dfe80d',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 68400,
        'value2' => 71100,
        'value_formatted' => '7:00pm',
        'value2_formatted' => '7:45pm',
      ),
    ),
  ),
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
  'date' => '2014-03-25 05:15:41 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:40pm - 4:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396747506,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cd41f59e-bd07-4dd4-b954-1701b6782607',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 56400,
        'value2' => 57600,
        'value_formatted' => '3:40pm',
        'value2_formatted' => '4:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 21:25:06 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'NLB-2009 (LANG3)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199862,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cfc26405-7d37-4051-a438-cbb050fd6b4b',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:31:02 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'S-1521',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396169934,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd14e5925-4c7d-44c9-ab6f-51ee89670da1',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-30 04:58:54 -0400',
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
  'title' => '11:00am - 11:20am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396760902,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd43d853b-1761-486c-8c36-a56a1cf1b23c',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 39600,
        'value2' => 40800,
        'value_formatted' => '11:00am',
        'value2_formatted' => '11:20am',
      ),
    ),
  ),
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
  'date' => '2014-04-06 01:08:22 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'CB-B',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1395199734,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd5c647dc-a9f7-4765-b996-c9bd9f0f86e1',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-03-18 23:28:54 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '7:00pm - 7:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396850382,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'da3fc9fa-245b-4b7d-9c39-38c505712411',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 68400,
        'value2' => 70200,
        'value_formatted' => '7:00pm',
        'value2_formatted' => '7:30pm',
      ),
    ),
  ),
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
  'date' => '2014-04-07 01:59:42 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '8:00am - 9:00am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1395733961,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dbc5d97a-236a-45ae-8378-d9d0668fa641',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 28800,
        'value2' => 32400,
        'value_formatted' => '8:00am',
        'value2_formatted' => '9:00am',
      ),
    ),
  ),
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
  'date' => '2014-03-25 03:52:41 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '12:45pm - 1:30pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396804748,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dbdc7c72-cb8f-4005-a906-167e5499f489',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 45900,
        'value2' => 48600,
        'value_formatted' => '12:45pm',
        'value2_formatted' => '1:30pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 13:19:08 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '9:30am - 10:30am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396806358,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dea2d0af-a1c2-4a6b-9c20-d6fdf0174828',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 34200,
        'value2' => 37800,
        'value_formatted' => '9:30am',
        'value2_formatted' => '10:30am',
      ),
    ),
  ),
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
  'date' => '2014-04-06 13:45:58 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '4:00pm - 5:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396671486,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e1df4dde-34e2-48c8-9460-073ef9e6e3c0',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 57600,
        'value2' => 61200,
        'value_formatted' => '4:00pm',
        'value2_formatted' => '5:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 00:18:06 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => 'Second Floor Lounge',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1373742777,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e5cd8d9f-5094-4571-9ad3-03a8aa2f342e',
  'field_room_building' => array(),
  'field_room_capacity_max' => array(),
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
  'date' => '2013-07-13 15:12:57 -0400',
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
  'title' => 'Delegates Dining Room',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'room',
  'language' => 'und',
  'created' => 1396827883,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e7bb199b-fae9-49b2-af9c-6fcab7620139',
  'field_room_building' => array(
    'und' => array(
      0 => array(
        'target_id' => '60f9f21b-eb53-4fd0-b255-c7f7109b7bcc',
        'uuid' => '60f9f21b-eb53-4fd0-b255-c7f7109b7bcc',
      ),
    ),
  ),
  'field_room_capacity_max' => array(),
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
  'date' => '2014-04-06 19:44:43 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '11:40am - 12:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396760939,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ec039d4a-8b50-45bf-90ad-cb1f7e077831',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 42000,
        'value2' => 43200,
        'value_formatted' => '11:40am',
        'value2_formatted' => '12:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 01:08:59 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '3:30pm - 5:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396917726,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'eefb714c-9d86-4b30-b17e-164958eeab80',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 55800,
        'value2' => 61200,
        'value_formatted' => '3:30pm',
        'value2_formatted' => '5:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-07 20:42:06 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '2:00pm - 2:45pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396763350,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ef7605bc-0cca-4b82-b795-45988e0cf393',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 50400,
        'value2' => 53100,
        'value_formatted' => '2:00pm',
        'value2_formatted' => '2:45pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 01:49:10 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '11:00am - 12:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396682875,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f2c63c01-95a2-4829-950e-2cfec7ae0f10',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 39600,
        'value2' => 43200,
        'value_formatted' => '11:00am',
        'value2_formatted' => '12:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-05 03:27:55 -0400',
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
  'title' => '11:15am - 11:45am',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396914973,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f883b155-515a-4619-b09a-b65fb0505831',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 40500,
        'value2' => 42300,
        'value_formatted' => '11:15am',
        'value2_formatted' => '11:45am',
      ),
    ),
  ),
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
  'date' => '2014-04-07 19:56:13 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '6:45pm - 7:15pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396850441,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fa3939c1-bb38-46e3-9bcc-879771516b42',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 67500,
        'value2' => 69300,
        'value_formatted' => '6:45pm',
        'value2_formatted' => '7:15pm',
      ),
    ),
  ),
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
  'date' => '2014-04-07 02:00:41 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
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
  'title' => '11:30am - 12:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396889663,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fbdfaeef-e207-46ad-a5aa-f86796e1638a',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 41400,
        'value2' => 43200,
        'value_formatted' => '11:30am',
        'value2_formatted' => '12:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-07 12:54:23 -0400',
  'user_uuid' => 'f7753eb0-af07-4b3c-9af4-416bf29c5c04',
);
  $nodes[] = array(
  'title' => '2:45pm - 3:00pm',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'schedule_time_slot',
  'language' => 'und',
  'created' => 1396766925,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fd5ad91f-45f3-4d9a-a3be-32545fc79147',
  'field_schedule_time_slot' => array(
    'und' => array(
      0 => array(
        'value' => 53100,
        'value2' => 54000,
        'value_formatted' => '2:45pm',
        'value2_formatted' => '3:00pm',
      ),
    ),
  ),
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
  'date' => '2014-04-06 02:48:45 -0400',
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
