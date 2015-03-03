jEditable inline editing module
-------------------------------

  Contents
    INSTALLATION
    DESCRIPTION
    VIEWS INTEGRATION
    WORKFLOW INTEGRATION
    CAVEATS


INSTALLATION
------------
  1) Place this module in your favorite modules directory
     (i.e. sites/all/modules/)

  2) Download the jEditable jQuery plugin from 
     http://www.appelsiini.net/download/jquery.jeditable.mini.js

     $ wget http://www.appelsiini.net/download/jquery.jeditable.mini.js

     If the "libraries" module is installed, place the plugin in "jeditable" in 
     your libraries path. You should end up with:

     sites/all/libraries/jeditable/jquery.jeditable.mini.js

     Otherwise, if the "libraries" modules is not installed, place the plugin in
     the "jeditable" module directory. You should end up with:

     sites/all/modules/jeditable/jquery.jeditable.mini.js

  3) Enable the module. If you're using drush:

     $ drush en jeditable

  4) Turn on the "use jeditable" permission for all roles you want to have 
     access to jeditable operations. The module respects basic node access, so 
     saving using jeditable will only work if the user has "update" permissions
     on the node.

     However, if they don't have update permissions, they will still get the 
     jeditable input forms, so this needs some thought for your application.

  5) Go to the "display settings" of your node, or into the display settings 
     for a View with fields in it and enable the jEditable textfield, jEditable 
     textarea, jEditable datetime or jEditable noderefence fields as 
     appropriate.

  6. Finally, load a node, "click to edit", and enjoy!


DESCRIPTION
-----------------
  jEditable allows users to perform inline editing of content, specifically 
  CCK fields and Workflow fields.

  jEditable provides the same validation of input and formatting of fields
  as if the user were performming a full blown node edit.

  For instance, the Date field defines both the input format and the display
  format for dates. The process for updating a Date field is as follows:

    1) The user clicks on the date.
    2) jEditable loads the node and retrieves the date field value.
    3) jEditable applies input formatting to the date.
    4) jEditable displays a textfield with the formatted value.
    5) The user changes the value and submits.
    6) jEditable builds a node form and uses drupal_execute() to trigger input 
       validation when saving the node.
    7) jEditable loads the node again and retrieves the value that was actually 
       saved.
    8) jEditable applies field formatting to the date and displays the value.


VIEWS INTEGRATION
-----------------
  If you are using the Views module, then options will be available for 
  enabling inline editing in Views. This is perhaps the best reason of using
  jEditable, e.g. when performing sparse updates of different fields in 
  different nodes.

  Since the jEditable jQuery plugin is highly configurable, it is not practical
  to expose all the options in Views. Instead, the user can override the 
  default class and define their own Javascript function to control both the
  behaviour and appearance of the inline editor. 

  For instance, in order to override the field "field_mytextfield", the user
  will need to check the overide option and create the following Javascript 
  function:

    Drupal.behaviors.jeditable_my_overrides = function(context) {

      if ($('.jeditable-field_mytextfield').length) {
        $('.jeditable-field_mytextfield').editable('/jeditable/ajax/save', {
          loadurl  : '/jeditable/ajax/load',
          indicator : 'Saving...',
          tooltip   : 'Click to edit...',
          cancel    : 'Cancel',
          submit    : 'Save',
          style     : 'display: inline; min-width: 100px;'
        });
      }

     // More overides.
    }

  Instructions on how to modify the parameters are available in the source
  code: http://www.appelsiini.net/download/jquery.jeditable.js


WORKFLOW INTEGRATION
--------------------
  If you have the Workflow module, you can use jeditable to change workflow 
  statuses. Use the field handler options in Views to enable inline editing.

  Normally, workflow statuses  won't show up anywhere by default, but you can 
  place it in .tpl.php files by using the following theme function:

  theme('jeditable_workflow', $node);

  You can also use the computed_field module to get this to show up as a field 
  in Views and elsewhere. Use the following snippets.

  For "Computed Code":
  $node_field[0]['value'] = workflow_get_state_name($node->workflow);

  For "Display format":
  $display = theme('jeditable_workflow', $element['#node']);

  For Data type, select "varchar" and set data length to 60 (or whatever you 
  set as maximum length for workflow state names)

  What this will do is store the workflow state name in the database so that 
  you can use this in Views and sort by state name.
  What is then displayed is themed jeditable select drop down.


CAVEATS
-------
  In Views, fields can use relationships to display the field value of a
  referenced node. This works for jEditable for all supported fields except
  Workflow fields. The necessary information does not seem to be available 
  that would allow the referenced node's nid to be retrieved.

  Fields updated in Views will not obey the Views formatter option when it is
  set to something other than 'Default'.
