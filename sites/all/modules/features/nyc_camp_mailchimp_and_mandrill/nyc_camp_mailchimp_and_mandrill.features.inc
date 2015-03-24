<?php
/**
 * @file
 * nyc_camp_mailchimp_and_mandrill.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyc_camp_mailchimp_and_mandrill_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function nyc_camp_mailchimp_and_mandrill_default_mailchimp_signup() {
  $items = array();
  $items['sign_up_for_emails_from_nyc_camp'] = entity_import('mailchimp_signup', '{
    "name" : "sign_up_for_emails_from_nyc_camp",
    "mc_lists" : { "ec08e2f9d4" : "ec08e2f9d4" },
    "mode" : "3",
    "title" : "Sign up for emails from NYC Camp",
    "settings" : {
      "path" : "signup",
      "submit_button" : "Submit",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {
          "name" : "Email Address",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        },
        "FNAME" : {
          "name" : "First Name",
          "req" : false,
          "field_type" : "text",
          "public" : true,
          "show" : true,
          "order" : "2",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "FNAME",
          "id" : 1
        },
        "LNAME" : {
          "name" : "Last Name",
          "req" : false,
          "field_type" : "text",
          "public" : true,
          "show" : true,
          "order" : "3",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "LNAME",
          "id" : 2
        },
        "ORG" : {
          "name" : "Organization",
          "req" : false,
          "field_type" : "text",
          "public" : true,
          "show" : true,
          "order" : "5",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "ORG",
          "id" : 3
        }
      },
      "description" : "",
      "doublein" : 1,
      "send_welcome" : 1,
      "include_interest_groups" : 1
    },
    "rdf_mapping" : []
  }');
  return $items;
}
