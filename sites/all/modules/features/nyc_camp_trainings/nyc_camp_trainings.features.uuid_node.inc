<?php
/**
 * @file
 * nyc_camp_trainings.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nyc_camp_trainings_uuid_features_default_content() {
  $nodes = array();

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
  'title' => 'Drupal Twig Training',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'training',
  'language' => 'und',
  'created' => 1425775560,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '18fbd120-04dc-4d9c-a4dd-c25876b295b3',
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
        'value' => '<p>Prepare yourself with the skills you\'ll need to hit the ground running as a Drupal 8 themer. This training will be a hands-on, an interactive workshop where we will build a Drupal 8 theme from the ground up using Drupal 8\'s new template engine, Twig. We’ll dive into many of its features.</p>

<p>We will recommend best practices around template logic, determining what should be themeable output in the first place, leveraging theme suggestions and reusable theme components, overriding and extending templates, and more. We will also talk about why themers should be excited for the tools that contrib can provide in Drupal 8.</p>

<p>This workshop is intended for intermediate-level Drupal themers and front-end developers. Knowing the basics of git will be helpful but is not necessary. No PHP knowledge is necessary but a laptop is required.</p>

<p>Twig is being improved in Drupal 8 Core @ <a href="http://drupaltwig.org/">http://drupaltwig.org/</a> and you are all welcome to join in and help make Drupal 8 theming awesome!</p>

<p><strong>Prerequisites:&nbsp;</strong></p>

<p>You should have the latest alpha of Drupal 8 installed locally prior to this training.</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_image' => array(),
  'field_training_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => ' Learn how to build a Drupal 8 theme',
        'format' => NULL,
      ),
    ),
  ),
  'field_training_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Prepare yourself with the skills you\'ll need to hit the ground running as a Drupal 8 themer. This training will be a hands-on, an interactive workshop where we will build a Drupal 8 theme from the ground up using Drupal 8\'s new template engine, Twig. We’ll dive into many of its features.</p>
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
  'date' => '2015-03-07 19:46:00 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
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
  'title' => 'Build. Launch. Run Pantheon Training',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'training',
  'language' => 'und',
  'created' => 1425775871,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '65ef7767-d4bb-4e9b-a6ec-f997ff45121d',
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
        'value' => '<p>Are you interested in how to use Pantheon to its fullest? Embrace the version control, including git branching using Pantheon\'s Multidev technology. Learn how to create a high performance Drupal site using Pantheon\'s Launch Check service. Interested in using Pantheon from the command line? Learn about Pantheon\'s CLI "Terminus".</p>

<p>This session will feature Pantheon co-founder Matt Cheney walking attendees through using the Pantheon Drupal development platform to develop a Drupal site. Bring your laptop since these session will be hands on! Learn how to use Pantheon like a seasoned Drupal developer and level up your Drupal development game.</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_image' => array(),
  'field_training_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Drupal Development Best Practices & Building Sites on Pantheon',
        'format' => NULL,
      ),
    ),
  ),
  'field_training_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Are you interested in how to use Pantheon to its fullest? Embrace the version control, including git branching using Pantheon\'s Multidev technology. Learn how to create a high performance Drupal site using Pantheon\'s Launch Check service. Interested in using Pantheon from the command line? Learn about Pantheon\'s CLI "Terminus".</p>
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
  'date' => '2015-03-07 19:51:11 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
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
  'title' => 'Get Started With Drupal!',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'training',
  'language' => 'und',
  'created' => 1425784562,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ca0f04ff-0179-4b09-95f2-f621c4fc8fc2',
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
        'value' => '<p>Maybe you know nothing about Drupal, but you\'ve heard that it\'s really really hard. [kind of true!]</p>

<p>Maybe you\'ve played around with it and been blindsided by some of the quirkiness of the user interface and complexity. [guilty!]</p>

<p>Maybe you\'ve gotten kind of far, but you feel like you missed out on the foundations of Drupal and wish you had a better grasp of how Drupal works. [a LOT of ppl fit this description]&nbsp;</p>

<p>No matter what situation you find yourself in, join me as we spend a whole day building a simple, but powerful, blog and article site together as a class.</p>

<p>We\'ll go step by step and configure:</p>

<ol>
	<li>Menus [for the ABOUT, BLOGS, &amp; ARTICLES page]</li>
	<li>Blocks [For recent Articles list in the sidebar]</li>
	<li>Nodes [Every Blog &amp; Article is a Drupal node]</li>
	<li>Content Types [Blogs &amp; Articles are examples of Content Types]</li>
	<li>Fields [Every Content Type has as many fields as you need]</li>
	<li>Images [Our articles will have images associated with them. We will manage how they’re used in different contexts across the site]</li>
	<li>Listing pages [We want to show listing pages of Articles &amp; Blogs]</li>
	<li>And more! [We’ll have some QnA time where we can go Off-Roading into topics that YOU bring up!]&nbsp;</li>
</ol>

<p>How does this differ from some other beginner classes you may have read about or attended?</p>

<p>Drupal is ALL I do! And Training and Consulting is where the majority of my time is spent. I routinely travel to major universities [PennState, CalState, Butler U, Ohio State, etc.] , private enterprise [Silicon Valley, Publishers, Associations, Design Agencies, etc.] Government agencies [US Fed. Court, State of NY, etc.] They rely on me to address students who may or may not have CompSci Degrees or any real experience in any CMS.</p>

<p>In my class I bring 7 years of Drupal experience and and the full knowledge that Drupal can be painful, especially if you don’t understand the many facets of the UI. I can tell you that after going through my class, I often hear people exclaim that Drupal is finally making sense. I\'m also told that after attedning my class, ppl are able to understand books and videos and camp session much better. I understand the how and why of Drupal and I explain that and reinforce it as we work together to build a site that, while simple, shows off the most popular and powerful features of Drupal!</p>

<p>Let\'s do it!</p>

<p>Questions about this class, me, or Drupal in general? Contact me at http://dougvann.com/contact</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_image' => array(),
  'field_training_sub_title' => array(
    'und' => array(
      0 => array(
        'value' => 'A Step-By-Step Intro to Creating Blog/Article Site in Drupal',
        'format' => NULL,
      ),
    ),
  ),
  'field_training_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>No matter what situation you find yourself in, join me as we spend a whole day building a simple, but powerful, blog and article site together as a class.Get Started With Drupal!</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'field_training_trainers' => array(),
  'field_training_drupal_software' => array(
    'und' => array(
      0 => array(
        'tid' => '87965ad0-82ae-4fe4-aff3-d82b5b26f391',
        'uuid' => '87965ad0-82ae-4fe4-aff3-d82b5b26f391',
      ),
    ),
  ),
  'field_training_audiences' => array(
    'und' => array(
      0 => array(
        'tid' => 'e1c999ed-6520-4d6d-b230-a2e1cc0f6669',
        'uuid' => 'e1c999ed-6520-4d6d-b230-a2e1cc0f6669',
      ),
    ),
  ),
  'field_training_prerequisites' => array(),
  'field_training_skill_levels' => array(
    'und' => array(
      0 => array(
        'tid' => '3ceb66ce-b73b-47d1-acd0-220cca600ab3',
        'uuid' => '3ceb66ce-b73b-47d1-acd0-220cca600ab3',
      ),
    ),
  ),
  'field_training_tracks' => array(
    'und' => array(
      0 => array(
        'tid' => '2b3b1a7b-3cf9-45db-bafa-21efa9f7b9b1',
        'uuid' => '2b3b1a7b-3cf9-45db-bafa-21efa9f7b9b1',
      ),
    ),
  ),
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
  'date' => '2015-03-07 22:16:02 -0500',
  'user_uuid' => '628c37d6-1acc-4eb6-9494-3ea5172799e5',
);
  return $nodes;
}
