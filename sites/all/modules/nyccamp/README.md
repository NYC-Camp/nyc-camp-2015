NYC Camp customizations 2015

nyccamp.install
- Changes the weight of nyccamp module to be one more than the ticket_user_registration so that the form from ticket_user_registration is accessible in the form_alter().

nyccamp.module
- Removes access to the quantity form element for tickets.
- Appends the description in Ticket Registrant fieldset to Ticket Registration form (Example description text: "Hello admin@nyccamp.org. Not you? Start over) 
- Attaches js for registration form tweaks

js/registration.js
- Hides the Ticket Registrant form
- Copies the values from the Ticket Registration fieldset form to the Ticket Registrant form on submit.