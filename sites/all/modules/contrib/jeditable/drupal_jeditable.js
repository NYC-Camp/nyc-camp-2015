Drupal.behaviors.jeditable = function(context) {
  if ($('.jeditable-textfield').length) {
    $('.jeditable-textfield').editable('/jeditable/ajax/save', {
      loadurl  : '/jeditable/ajax/load',
      indicator : 'Saving...',
      tooltip   : 'Click to edit...',
      cancel    : 'Cancel',
      submit    : 'Save',
      style     : 'display: inline; min-width: 100px;'
    });
  }
  if ($('.jeditable-textarea').length) {
    $('.jeditable-textarea').editable('/jeditable/ajax/save', { 
      loadurl  : '/jeditable/ajax/load',
      type      : 'textarea',
      cancel    : 'Cancel',
      submit    : 'OK',
      indicator : 'Saving...',
      tooltip   : 'Click to edit...'
    });
  }
  if ($('.jeditable-select').length) {
    $('.jeditable-select').editable('/jeditable/ajax/save', { 
      loadurl  : '/jeditable/ajax/load',
      type     : 'select',
      submit   : 'OK',
      style    : 'display: inline'
    });
  }
  if ($('.jeditable-textfield-reload').length) {
    $('.jeditable-textfield-reload').editable('/jeditable/ajax/save', {
      loadurl  : '/jeditable/ajax/load',
      indicator : 'Saving...',
      tooltip   : 'Click to edit...',
      cancel    : 'Cancel',
      submit    : 'Save',
      style     : 'display: inline; min-width: 100px;',
      callback : function (value, settings) {
        window.location.reload();
      }
    });
  }
  if ($('.jeditable-textarea-reload').length) {
    $('.jeditable-textarea-reload').editable('/jeditable/ajax/save', { 
      loadurl  : '/jeditable/ajax/load',
      type      : 'textarea',
      cancel    : 'Cancel',
      submit    : 'OK',
      indicator : 'Saving...',
      tooltip   : 'Click to edit...',
      callback : function (value, settings) {
        window.location.reload();
      }
    });
  }
  if ($('.jeditable-select-reload').length) {
    $('.jeditable-select-reload').editable('/jeditable/ajax/save', { 
      loadurl  : '/jeditable/ajax/load',
      type     : 'select',
      submit   : 'OK',
      style    : 'display: inline',
      callback : function (value, settings) {
        window.location.reload();
      }
    });
  }
}
