<?php
/**
 * @file
 * nyc_camp_news.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nyc_camp_news_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Initial Sessions Selected',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425747607,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2307b9df-6d1f-468f-92de-958e5a90f3ac',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Pellentesque auctor neque nec urna. Maecenas vestibulum mollis diam. In ut quam vitae odio lacinia tincidunt. Sed mollis, eros et ultrices tempus, mauris ipsum aliquam libero, non adipiscing dolor urna a orci. Suspendisse non nisl sit amet velit hendrerit rutrum.

Phasellus tempus. Quisque ut nisi. Aenean posuere, tortor sed cursus feugiat, nunc augue blandit nunc, eu sollicitudin urna dolor sagittis lacus. Morbi mollis tellus ac sapien. Sed aliquam ultrices mauris.

Nulla sit amet est. Pellentesque posuere. Praesent vestibulum dapibus nibh. Sed in libero ut nibh placerat accumsan. Nulla facilisi.

Curabitur suscipit suscipit tellus. Cras ultricies mi eu turpis hendrerit fringilla. Etiam feugiat lorem non metus. Curabitur suscipit suscipit tellus. Sed lectus.

In hac habitasse platea dictumst. Vestibulum fringilla pede sit amet augue. Pellentesque ut neque. Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Nulla porta dolor.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-04-06T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Our First 5 Sessions Have Selected, Propose Yours Now',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Cras sagittis. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. Donec sodales sagittis magna. Lorem ipsum dolor sit amet, consectetuer adipiscing elit.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
        'uuid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
      ),
      1 => array(
        'tid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
        'uuid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
      ),
      2 => array(
        'tid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
        'uuid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
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
  'date' => '2015-03-07 12:00:07 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Registrations Now Open',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425747261,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '24c619c2-a549-4e2b-a637-bdd2e28d93a1',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Praesent ac sem eget est egestas volutpat. Vestibulum eu odio. Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nunc nonummy metus. Fusce vulputate eleifend sapien.

Morbi vestibulum volutpat enim. Aenean viverra rhoncus pede. Maecenas vestibulum mollis diam. Vestibulum purus quam, scelerisque ut, mollis sed, nonummy id, metus. Curabitur nisi.

Duis lobortis massa imperdiet quam. Nullam sagittis. Sed augue ipsum, egestas nec, vestibulum et, malesuada adipiscing, dui. Phasellus tempus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem.

Phasellus tempus. Morbi vestibulum volutpat enim. Nunc nonummy metus. Quisque libero metus, condimentum nec, tempor a, commodo mollis, magna. In hac habitasse platea dictumst.

Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vestibulum volutpat pretium libero. Cras sagittis. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-03-16T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Registration is Now Open, Lots of Space, But We\'ll Fill Up',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Proin faucibus arcu quis ante. Fusce vulputate eleifend sapien. Etiam vitae tortor. Duis arcu tortor, suscipit eget, imperdiet nec, imperdiet iaculis, ipsum. Quisque malesuada placerat nisl.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(),
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
  'date' => '2015-03-07 11:54:21 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Sessions Submissions Closing',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425747439,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2c4a319a-c608-43e7-ae10-63d492ea3ec2',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Nam ipsum risus, rutrum vitae, vestibulum eu, molestie vel, lacus. Nam eget dui. Aliquam erat volutpat. Maecenas vestibulum mollis diam. Fusce a quam.

Suspendisse feugiat. Aenean imperdiet. Quisque id odio. Vivamus in erat ut urna cursus vestibulum. Sed aliquam ultrices mauris.

Aenean vulputate eleifend tellus. Nam commodo suscipit quam. Morbi mattis ullamcorper velit. Fusce fermentum. Donec mollis hendrerit risus.

Cras non dolor. Vestibulum fringilla pede sit amet augue. Curabitur at lacus ac velit ornare lobortis. Aenean massa. Nam pretium turpis et arcu.

Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Fusce id purus. Nullam dictum felis eu pede mollis pretium. Maecenas vestibulum mollis diam. Ut non enim eleifend felis pretium feugiat. Donec sodales sagittis magna.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-04-10T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Propose Your Session Before Submissions Close Next Week',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; In ac dui quis mi consectetuer lacinia. Aenean ut eros et nisl sagittis vestibulum. Cras ultricies mi eu turpis hendrerit fringilla. Nulla sit amet est. Aliquam erat volutpat.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
        'uuid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
      ),
      1 => array(
        'tid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
        'uuid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
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
  'date' => '2015-03-07 11:57:19 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Final Selected Sessiosn',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425748393,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '59cab60b-7b37-48dd-ba38-b242860af2ef',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Suspendisse pulvinar, augue ac venenatis condimentum, sem libero volutpat nibh, nec pellentesque velit pede quis nunc. Vivamus laoreet. Vestibulum eu odio. Sed libero.

Donec vitae orci sed dolor rutrum auctor. Curabitur nisi. Etiam vitae tortor. Nulla sit amet est. Vestibulum eu odio.

Nunc interdum lacus sit amet orci. Vivamus elementum semper nisi. Fusce egestas elit eget lorem. Morbi mattis ullamcorper velit. Vestibulum suscipit nulla quis orci.

Etiam sit amet orci eget eros faucibus tincidunt. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Ut varius tincidunt libero. Fusce pharetra convallis urna. Nunc nulla.

Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Fusce id purus. Praesent congue erat at massa. Vivamus in erat ut urna cursus vestibulum. Morbi mattis ullamcorper velit. Praesent turpis.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-05-11T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'We\'ve Selected Our Last Group of Sessions, Schedule Coming Next Week',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Quisque id mi. Vestibulum volutpat pretium libero. Sed a libero. Phasellus ullamcorper ipsum rutrum nunc. Ut varius tincidunt libero.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
        'uuid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
      ),
      1 => array(
        'tid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
        'uuid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
      ),
      2 => array(
        'tid' => '0761b9ff-3f30-41e0-8d7f-cf44c988122e',
        'uuid' => '0761b9ff-3f30-41e0-8d7f-cf44c988122e',
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
  'date' => '2015-03-07 12:13:13 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Registration Open Next Week',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425747155,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5dcccbfb-fe88-4a8c-bef8-04ac1dd4962a',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Sed mollis, eros et ultrices tempus, mauris ipsum aliquam libero, non adipiscing dolor urna a orci. Ut tincidunt tincidunt erat. Nam pretium turpis et arcu. Ut varius tincidunt libero. Etiam ultricies nisi vel augue.

Nunc nulla. Sed lectus. Sed a libero. Nullam tincidunt adipiscing enim. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; In ac dui quis mi consectetuer lacinia.

Morbi nec metus. Donec vitae sapien ut libero venenatis faucibus. Pellentesque auctor neque nec urna. Cras non dolor. In ut quam vitae odio lacinia tincidunt.

Suspendisse pulvinar, augue ac venenatis condimentum, sem libero volutpat nibh, nec pellentesque velit pede quis nunc. Morbi ac felis. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Integer ante arcu, accumsan a, consectetuer eget, posuere ut, mauris. Sed aliquam ultrices mauris.

Curabitur suscipit suscipit tellus. Proin magna. In ac felis quis tortor malesuada pretium. Vivamus in erat ut urna cursus vestibulum. Sed a libero.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-03-13T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Registrations Opening, Session Submissions to Follow',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Phasellus gravida semper nisi. Vivamus in erat ut urna cursus vestibulum. Curabitur turpis. Nam at tortor in tellus interdum sagittis.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '591ee228-0af6-4136-b847-e18fdce29f71',
        'uuid' => '591ee228-0af6-4136-b847-e18fdce29f71',
      ),
      1 => array(
        'tid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
        'uuid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
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
  'date' => '2015-03-07 11:52:35 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Session Submissions Closing',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425747762,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7466857d-6e32-4208-8682-0742efff1b67',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Nam eget dui. Nunc nec neque. Aenean ut eros et nisl sagittis vestibulum. Sed consequat, leo eget bibendum sodales, augue velit cursus nunc, quis gravida magna mi a libero. Curabitur ullamcorper ultricies nisi.

Maecenas nec odio et ante tincidunt tempus. Praesent ac massa at ligula laoreet iaculis. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; In ac dui quis mi consectetuer lacinia. Sed magna purus, fermentum eu, tincidunt eu, varius ut, felis. Aenean posuere, tortor sed cursus feugiat, nunc augue blandit nunc, eu sollicitudin urna dolor sagittis lacus.

In hac habitasse platea dictumst. Donec venenatis vulputate lorem. Etiam imperdiet imperdiet orci. Mauris sollicitudin fermentum libero. Praesent ut ligula non mi varius sagittis.

Pellentesque libero tortor, tincidunt et, tincidunt eget, semper nec, quam. Duis leo. Integer tincidunt. Sed augue ipsum, egestas nec, vestibulum et, malesuada adipiscing, dui. Vestibulum turpis sem, aliquet eget, lobortis pellentesque, rutrum eu, nisl.

Vestibulum rutrum, mi nec elementum vehicula, eros quam gravida nisl, id fringilla neque ante vel mi. Quisque rutrum. Integer ante arcu, accumsan a, consectetuer eget, posuere ut, mauris. Vestibulum volutpat pretium libero. Donec elit libero, sodales nec, volutpat a, suscipit non, turpis.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-04-17T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Sessions Submissions Close Tonight at Midnight',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Sed consequat, leo eget bibendum sodales, augue velit cursus nunc, quis gravida magna mi a libero. Praesent congue erat at massa. Etiam imperdiet imperdiet orci. Vestibulum turpis sem, aliquet eget, lobortis pellentesque, rutrum eu, nisl. Curabitur a felis in nunc fringilla tristique.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
        'uuid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
      ),
      1 => array(
        'tid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
        'uuid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
      ),
      2 => array(
        'tid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
        'uuid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
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
  'date' => '2015-03-07 12:02:42 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Our Selected Sessions',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425748073,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7c438013-2d1c-42bd-8ab2-252a6c502083',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Proin magna. Duis vel nibh at velit scelerisque suscipit. Etiam feugiat lorem non metus. Fusce vel dui. Phasellus magna.

Suspendisse nisl elit, rhoncus eget, elementum ac, condimentum eget, diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; In ac dui quis mi consectetuer lacinia. Phasellus leo dolor, tempus non, auctor et, hendrerit quis, nisi. Pellentesque egestas, neque sit amet convallis pulvinar, justo nulla eleifend augue, ac auctor orci leo non est. Etiam sollicitudin, ipsum eu pulvinar rutrum, tellus ipsum laoreet sapien, quis venenatis ante odio sit amet eros.

Praesent egestas neque eu enim. Quisque ut nisi. Suspendisse faucibus, nunc et pellentesque egestas, lacus ante convallis tellus, vitae iaculis lacus elit id tortor. Praesent metus tellus, elementum eu, semper a, adipiscing nec, purus. Vestibulum facilisis, purus nec pulvinar iaculis, ligula mi congue nunc, vitae euismod ligula urna in dolor.

Nulla porta dolor. Morbi ac felis. Morbi vestibulum volutpat enim. Nulla facilisi. Nunc interdum lacus sit amet orci.

Fusce neque. Fusce convallis metus id felis luctus adipiscing. Sed hendrerit. Nam at tortor in tellus interdum sagittis. Quisque malesuada placerat nisl.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-04-27T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'We\'ve Selected another 10 Sessions',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Vestibulum eu odio. Vestibulum facilisis, purus nec pulvinar iaculis, ligula mi congue nunc, vitae euismod ligula urna in dolor. Praesent porttitor, nulla vitae posuere iaculis, arcu nisl dignissim dolor, a pretium mi sem ut ipsum. Nunc sed turpis. Aenean tellus metus, bibendum sed, posuere ac, mattis non, nunc.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
        'uuid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
      ),
      1 => array(
        'tid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
        'uuid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
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
  'date' => '2015-03-07 12:07:53 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Our Selected Sessions',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425748273,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '87a762e6-3eaa-4fb3-9fba-c88e2170f6e0',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Pellentesque libero tortor, tincidunt et, tincidunt eget, semper nec, quam. Aenean massa. Pellentesque dapibus hendrerit tortor. In turpis. Nulla sit amet est.

Fusce pharetra convallis urna. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus. Praesent nec nisl a purus blandit viverra. Sed mollis, eros et ultrices tempus, mauris ipsum aliquam libero, non adipiscing dolor urna a orci. Nunc interdum lacus sit amet orci.

Nulla sit amet est. Donec vitae orci sed dolor rutrum auctor. Nam ipsum risus, rutrum vitae, vestibulum eu, molestie vel, lacus. Praesent ut ligula non mi varius sagittis. Sed libero.

Cras sagittis. Ut tincidunt tincidunt erat. Praesent vestibulum dapibus nibh. Quisque id odio. Praesent egestas tristique nibh.

Pellentesque auctor neque nec urna. Vestibulum eu odio. Phasellus ullamcorper ipsum rutrum nunc. Phasellus viverra nulla ut metus varius laoreet. Vivamus consectetuer hendrerit lacus.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-05-04T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'We\'ve Selected Another 25 Sessions, Schedule Coming Soon',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Nam quam nunc, blandit vel, luctus pulvinar, hendrerit id, lorem. Aliquam eu nunc. Phasellus magna. Donec sodales sagittis magna. Praesent nonummy mi in odio.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
        'uuid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
      ),
      1 => array(
        'tid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
        'uuid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
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
  'date' => '2015-03-07 12:11:13 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Partnerships Available',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425746720,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '90818bcc-b627-4c0b-b374-3875f9933c18',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Fusce egestas elit eget lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Cras sagittis. Nunc nulla. Curabitur a felis in nunc fringilla tristique.

Cras dapibus. Cras varius. Praesent adipiscing. Aenean commodo ligula eget dolor. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.

Nulla neque dolor, sagittis eget, iaculis quis, molestie non, velit. Phasellus magna. Praesent ac sem eget est egestas volutpat.. Fusce fermentum odio nec arcu.

Nulla porta dolor. Mauris sollicitudin fermentum libero. Mauris turpis nunc, blandit et, volutpat molestie, porta ut, ligula. Proin pretium, leo ac pellentesque mollis, felis nunc ultrices eros, sed gravida augue augue mollis justo. Phasellus viverra nulla ut metus varius laoreet.

Nullam accumsan lorem in dui. Suspendisse nisl elit, rhoncus eget, elementum ac, condimentum eget, diam. Nam pretium turpis et arcu. Praesent adipiscing. Nam at tortor in tellus interdum sagittis.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-03-12T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => '2015 Partnership Options Are Now Available & Going Fast',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Integer ante arcu, accumsan a, consectetuer eget, posuere ut, mauris. Maecenas egestas arcu quis ligula mattis placerat. Fusce risus nisl, viverra et, tempor et, pretium in, sapien. Sed cursus turpis vitae tortor. Phasellus nec sem in justo pellentesque facilisis.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '8d856e03-e1bb-44bc-80f7-3445df5e1322',
        'uuid' => '8d856e03-e1bb-44bc-80f7-3445df5e1322',
      ),
      1 => array(
        'tid' => '6e3bb4ec-bb96-43c6-b15e-ba02265b1b41',
        'uuid' => '6e3bb4ec-bb96-43c6-b15e-ba02265b1b41',
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
  'date' => '2015-03-07 11:45:20 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Session Submissions Open',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425747326,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '91cdacdc-ff7b-4d98-9b20-8e4d786477fd',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Fusce neque. Duis arcu tortor, suscipit eget, imperdiet nec, imperdiet iaculis, ipsum. Nulla consequat massa quis enim. Quisque ut nisi. Sed fringilla mauris sit amet nibh.

Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Praesent congue erat at massa. Sed augue ipsum, egestas nec, vestibulum et, malesuada adipiscing, dui. Vivamus laoreet. Sed aliquam ultrices mauris.

Aenean ut eros et nisl sagittis vestibulum. Nunc sed turpis. In ut quam vitae odio lacinia tincidunt. Morbi vestibulum volutpat enim. Vivamus aliquet elit ac nisl.

Nam pretium turpis et arcu. Praesent blandit laoreet nibh. Nullam nulla eros, ultricies sit amet, nonummy id, imperdiet feugiat, pede. Aenean ut eros et nisl sagittis vestibulum. Maecenas vestibulum mollis diam.

Phasellus tempus. Ut tincidunt tincidunt erat. Curabitur nisi. Aenean massa. Ut leo.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-03-20T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Session Submissions Are Open for Next 4 Weeks',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Praesent blandit laoreet nibh. Donec vitae sapien ut libero venenatis faucibus. Pellentesque ut neque. Morbi vestibulum volutpat enim. Etiam sit amet orci eget eros faucibus tincidunt.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
        'uuid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
      ),
      1 => array(
        'tid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
        'uuid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
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
  'date' => '2015-03-07 11:55:26 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'A Few More Selected Sessions',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425747695,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a231243d-6a11-4794-ae9e-4fc26e466d5b',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Integer ante arcu, accumsan a, consectetuer eget, posuere ut, mauris. Nullam accumsan lorem in dui. Maecenas malesuada. Sed lectus. Nam eget dui.

Vivamus quis mi. Duis vel nibh at velit scelerisque suscipit. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Phasellus nec sem in justo pellentesque facilisis. Integer ante arcu, accumsan a, consectetuer eget, posuere ut, mauris.

Phasellus ullamcorper ipsum rutrum nunc. Cras non dolor. Etiam iaculis nunc ac metus. Curabitur blandit mollis lacus. Morbi nec metus.

Morbi vestibulum volutpat enim. Donec orci lectus, aliquam ut, faucibus non, euismod id, nulla. Vivamus aliquet elit ac nisl. Donec mi odio, faucibus at, scelerisque quis, convallis in, nisi. Etiam sit amet orci eget eros faucibus tincidunt.

Etiam feugiat lorem non metus. Suspendisse pulvinar, augue ac venenatis condimentum, sem libero volutpat nibh, nec pellentesque velit pede quis nunc. Sed consequat, leo eget bibendum sodales, augue velit cursus nunc, quis gravida magna mi a libero. Etiam iaculis nunc ac metus. Pellentesque auctor neque nec urna.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-04-13T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'We\'ve Selected Another 5 Sessions, Submissions Close on Friday',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Morbi vestibulum volutpat enim. Suspendisse faucibus, nunc et pellentesque egestas, lacus ante convallis tellus, vitae iaculis lacus elit id tortor. Phasellus magna. Pellentesque libero tortor, tincidunt et, tincidunt eget, semper nec, quam.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
        'uuid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
      ),
      1 => array(
        'tid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
        'uuid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
      ),
      2 => array(
        'tid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
        'uuid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
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
  'date' => '2015-03-07 12:01:35 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'New Web Site',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425746515,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c18ba1fa-f221-4db9-8526-0e087f27bd4c',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Cras risus ipsum, faucibus ut, ullamcorper id, varius ac, leo. Vestibulum dapibus nunc ac augue. Praesent turpis. Nullam tincidunt adipiscing enim. Pellentesque posuere.

Nulla porta dolor. Nullam accumsan lorem in dui. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus. Fusce convallis metus id felis luctus adipiscing. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus.

Donec vitae sapien ut libero venenatis faucibus. Nullam vel sem. Nulla consequat massa quis enim. Vestibulum turpis sem, aliquet eget, lobortis pellentesque, rutrum eu, nisl. Phasellus consectetuer vestibulum elit.

Quisque rutrum. Duis vel nibh at velit scelerisque suscipit. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus. In ac felis quis tortor malesuada pretium. Praesent metus tellus, elementum eu, semper a, adipiscing nec, purus.

Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; In ac dui quis mi consectetuer lacinia. Proin pretium, leo ac pellentesque mollis, felis nunc ultrices eros, sed gravida augue augue mollis justo. Phasellus gravida semper nisi. Nunc nec neque. Sed libero.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-03-07T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'We\'re excited to be launch our new site',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'In auctor lobortis lacus. Pellentesque egestas, neque sit amet convallis pulvinar, justo nulla eleifend augue, ac auctor orci leo non est. Etiam rhoncus. Curabitur blandit mollis lacus. Nam pretium turpis et arcu.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '9eb2eb8e-cfac-4438-bc94-459b6b10bbce',
        'uuid' => '9eb2eb8e-cfac-4438-bc94-459b6b10bbce',
      ),
      1 => array(
        'tid' => '591ee228-0af6-4136-b847-e18fdce29f71',
        'uuid' => '591ee228-0af6-4136-b847-e18fdce29f71',
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
  'date' => '2015-03-07 11:41:55 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  $nodes[] = array(
  'title' => 'Another Batch of Sessions Selected',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'news',
  'language' => 'und',
  'created' => 1425748151,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fffd5913-d902-4ccb-a3e0-ad24b2c644f4',
  'field_news_body' => array(
    'und' => array(
      0 => array(
        'value' => 'Phasellus volutpat, metus eget egestas mollis, lacus lacus blandit dui, id egestas quam mauris ut lacus. Quisque libero metus, condimentum nec, tempor a, commodo mollis, magna. Donec elit libero, sodales nec, volutpat a, suscipit non, turpis. Donec vitae sapien ut libero venenatis faucibus. Praesent ut ligula non mi varius sagittis.

Nunc interdum lacus sit amet orci. Phasellus consectetuer vestibulum elit. Pellentesque libero tortor, tincidunt et, tincidunt eget, semper nec, quam. Etiam sollicitudin, ipsum eu pulvinar rutrum, tellus ipsum laoreet sapien, quis venenatis ante odio sit amet eros. Nullam dictum felis eu pede mollis pretium.

Sed lectus. Mauris sollicitudin fermentum libero. Donec venenatis vulputate lorem. Aliquam erat volutpat. Cras ultricies mi eu turpis hendrerit fringilla.

Phasellus blandit leo ut odio. Ut leo. Mauris sollicitudin fermentum libero. Etiam iaculis nunc ac metus. Phasellus tempus.

Curabitur ullamcorper ultricies nisi. Fusce fermentum. Curabitur vestibulum aliquam leo. Etiam iaculis nunc ac metus. Nulla neque dolor, sagittis eget, iaculis quis, molestie non, velit.',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_date' => array(
    'und' => array(
      0 => array(
        'value' => '2015-04-20T00:00:00',
        'timezone' => 'America/New_York',
        'timezone_db' => 'America/New_York',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_news_image' => array(),
  'field_news_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'We\'ve Selected another 5 Sessions',
        'format' => NULL,
      ),
    ),
  ),
  'field_news_teaser' => array(
    'und' => array(
      0 => array(
        'value' => 'Nam adipiscing. Nam commodo suscipit quam. Sed aliquam ultrices mauris. Donec orci lectus, aliquam ut, faucibus non, euismod id, nulla. Sed libero.',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
        'uuid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
      ),
      1 => array(
        'tid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
        'uuid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
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
  'date' => '2015-03-07 12:09:11 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  return $nodes;
}
