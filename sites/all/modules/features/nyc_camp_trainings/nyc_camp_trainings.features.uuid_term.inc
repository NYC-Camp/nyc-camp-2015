<?php
/**
 * @file
 * nyc_camp_trainings.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function nyc_camp_trainings_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Advanced',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '02b8febe-c019-4580-b20d-0c8c3b8665dc',
    'vocabulary_machine_name' => 'skill_levels',
    'url_alias' => array(
      0 => array(
        'alias' => 'advanced',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Schedule',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0761b9ff-3f30-41e0-8d7f-cf44c988122e',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'schedule',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Developers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0af8264c-683a-4113-9cd9-faab82e381b2',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'developers',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Trainers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0b0aa395-d428-4182-b786-fde114df629e',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'trainers',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Session Submissions',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '15eba2dc-1f61-43bf-927e-c786e0882a5e',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'session-submissions',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Site Building',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2b3b1a7b-3cf9-45db-bafa-21efa9f7b9b1',
    'vocabulary_machine_name' => 'tracks',
    'url_alias' => array(
      0 => array(
        'alias' => 'site-building',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drupal 5',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '314940b4-0151-4f2d-a9c8-4d24b8b502bf',
    'vocabulary_machine_name' => 'drupal_software',
    'url_alias' => array(
      0 => array(
        'alias' => 'drupal-5',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Beginner',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3ceb66ce-b73b-47d1-acd0-220cca600ab3',
    'vocabulary_machine_name' => 'skill_levels',
    'url_alias' => array(
      0 => array(
        'alias' => 'beginner',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drupal 8.1',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '52b209df-beed-4599-8f28-145beb9dcc44',
    'vocabulary_machine_name' => 'drupal_software',
    'url_alias' => array(
      0 => array(
        'alias' => 'drupal-81',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Registration',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '591ee228-0af6-4136-b847-e18fdce29f71',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'registration',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Session Selection',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5bf1cc3a-6589-4156-96fa-589e6b905f90',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'session-selection',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sessions',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6c9bc364-e34b-4c7e-87f6-ff0b117f25a4',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'sessions',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Partners',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6e3bb4ec-bb96-43c6-b15e-ba02265b1b41',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'partners-0',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Next Generation & Youth',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7357fcb3-369e-4fff-8734-d833d8f28e0a',
    'vocabulary_machine_name' => 'tracks',
    'url_alias' => array(
      0 => array(
        'alias' => 'next-generation-youth',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Project Managers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '74a3bec1-c272-4ac3-956e-2543d49d6dea',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'project-managers',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drupal 7',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '87965ad0-82ae-4fe4-aff3-d82b5b26f391',
    'vocabulary_machine_name' => 'drupal_software',
    'url_alias' => array(
      0 => array(
        'alias' => 'drupal-7',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dev Ops',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8b4ffe9f-796e-47a9-ae29-d4268066e451',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'dev-ops',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Partnerships',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8d856e03-e1bb-44bc-80f7-3445df5e1322',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Drupal 9',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8f56d9d1-930c-4857-84f5-7ee0cf4e9612',
    'vocabulary_machine_name' => 'drupal_software',
    'url_alias' => array(
      0 => array(
        'alias' => 'drupal-9',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drupal 8',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9e0e7c0c-018b-425a-96d1-2feae110c689',
    'vocabulary_machine_name' => 'drupal_software',
    'url_alias' => array(
      0 => array(
        'alias' => 'drupal-8',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Website',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9eb2eb8e-cfac-4438-bc94-459b6b10bbce',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'website',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Module Development',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b22b4439-c5d6-4e05-8a82-97a7b0489024',
    'vocabulary_machine_name' => 'tracks',
    'url_alias' => array(
      0 => array(
        'alias' => 'module-development',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Business',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b621565c-0d58-4e2b-aac9-a9530e6715fb',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'business',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drupal 6',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bd5ba42b-6717-4cf6-9562-22a6b8f62942',
    'vocabulary_machine_name' => 'drupal_software',
    'url_alias' => array(
      0 => array(
        'alias' => 'drupal-6',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drupal Core',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c26b6adf-2b05-490d-aecc-72ac12bcaed7',
    'vocabulary_machine_name' => 'drupal_software',
    'url_alias' => array(
      0 => array(
        'alias' => 'drupal-core',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Intermediate',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd2ec7895-5c0d-496a-9d24-8f9f05133c86',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'intermediate',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Internediate',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd3c0f213-f0da-4fe6-a3f5-64861a26d7eb',
    'vocabulary_machine_name' => 'skill_levels',
    'url_alias' => array(
      0 => array(
        'alias' => 'internediate',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Back End Developers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd82720fa-e809-4874-8808-67ed6f6846b0',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'back-end-developers',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Content Managers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'db6cd91e-8874-475b-b1f8-2a177899e01c',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'content-managers',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Training',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dd50f9ae-1555-4d71-b325-619951966555',
    'vocabulary_machine_name' => 'tracks',
    'url_alias' => array(
      0 => array(
        'alias' => 'training',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Site Builders',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e1c999ed-6520-4d6d-b230-a2e1cc0f6669',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'site-builders',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drupal Contrib',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'eae1754b-e4ef-4cf6-9792-a528694fd44e',
    'vocabulary_machine_name' => 'drupal_software',
    'url_alias' => array(
      0 => array(
        'alias' => 'drupal-contrib',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Front End Developers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f6e87af8-6dfb-466c-938e-32c554fa20ca',
    'vocabulary_machine_name' => 'audiences',
    'url_alias' => array(
      0 => array(
        'alias' => 'front-end-developers',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drupal 8',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fee1cd26-c1d2-49ea-906d-1d896f65ea43',
    'vocabulary_machine_name' => 'tracks',
    'url_alias' => array(
      0 => array(
        'alias' => 'drupal-8-0',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
