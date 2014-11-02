/**
 * @file
 * Manage tweaks for registration.
 */

(function ($) {
  Drupal.behaviors.nyccampRegistration = {
    attach: function (context, settings) {
      // Hide the irrelevant ticket registrant fieldset.
      $('#edit-ticket-registrant').hide();

      // Get the ids for the registration and ticket fields.
      registrationFields = {
        'email': '#edit-ticket-registrant-ticket-user-registrant-email',
        'fname': '#edit-ticket-registrant-field-profile-first-und-0-value',
        'lname': '#edit-ticket-registrant-field-profile-last-und-0-value'
      };

      ticketFields = {
        'email': '#edit-ticket-registrationnew-0-ticket-user-registration-email0',
        'fname': '#edit-ticket-registrationnew-0-field-profile-first-und-0-value',
        'lname': '#edit-ticket-registrationnew-0-field-profile-last-und-0-value'
      };

      // If the email is set in the registrant field, then it is disabled.
      // We want to replicate this behavior in the user registrant email field.
      var disabled = $(registrationFields['email']).attr('disabled');

      if (disabled) {
        $(ticketFields['email']).val($(registrationFields['email']).val());
      }

      // On form submit, add the values to the ticket registrant form.
      $('#ticket-register-form').submit( function (e) {
        if (!disabled) {
          $(registrationFields['email']).val($(ticketFields['email']).val());
        }

        $(registrationFields['fname']).val($(ticketFields['fname']).val());
        $(registrationFields['lname']).val($(ticketFields['lname']).val());
      });

    }
  };
})(jQuery);
