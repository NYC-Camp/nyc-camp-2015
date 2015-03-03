<?php

/**
 * Override for date_handler_field_multiple
 *
 */
class jeditable_handler_field_date extends date_handler_field_multiple {

  // Specify explicitly which field and widget types are supported.
  protected $inline_editor_lookup = array(
    'datetime' => array(
      'date_popup' => 'jeditable-textfield',
      'date_select' => 'jeditable-textfield',
      'date_text' => 'jeditable-textfield',
    ),
  );

  function construct() {
    parent::construct();

    $field_type = $this->content_field['type'];
    $field_widget_type = $this->content_field['widget']['type'];

    if (!$inline_editor_lookup[$field_type] ||
        !$inline_editor_lookup[$field_type][$field_widget_type]) {
      $this->inline_editor_class = $this->inline_editor_lookup[$field_type][$field_widget_type];
    } else {
      $this->inline_editor_class = NULL;
    }
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['jeditable']['enabled'] = array('default' => FALSE);
    $options['jeditable']['reload_page'] = array('default' => FALSE);
    $options['jeditable']['hide_if_empty'] = array('default' => FALSE);
    $options['jeditable']['disable_if_not_empty'] = array('default' => FALSE);
    $options['jeditable']['override_defaults'] = array('default' => FALSE);

    return $options;
  }

  /**
   * Define the extra form elements for the field.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    if (empty($this->inline_editor_class)) {
      return;
    }

    $form['jeditable'] = array(
      '#type' => 'fieldset',
      '#title' => t('Inline editing'),
    );

    $form['jeditable']['enabled'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable inline editing'),
      '#default_value' => $this->options['jeditable']['enabled'],
      '#description' => t('Enable or disable inline editing with jEditable. ') .
                        '<br/><b>' . t('Note: ') . '</b>' . t("If the 'Empty text' field is empty, then the plugin 'placeholder' will be displayed instead using default text. See below for more information on how to change this."),
     );
 
    $form['jeditable']['reload_page'] = array(
      '#type' => 'checkbox',
      '#title' => t('Reload page'),
      '#default_value' => $this->options['jeditable']['reload_page'],
      '#description' => t('Reload the page if the field has been updated. This is useful for refreshing other values in the View that are affected by the change.'),
     );

    $form['jeditable']['hide_if_empty'] = array(
      '#type' => 'checkbox',
      '#title' => t('Hide if empty'),
      '#default_value' => $this->options['jeditable']['hide_if_empty'],
      '#description' => t('Hide the inline editor if the field is empty.'),
     );

    $form['jeditable']['disable_if_not_empty'] = array(
      '#type' => 'checkbox',
      '#title' => t('Disable if not empty'),
      '#default_value' => $this->options['jeditable']['disable_if_not_empty'],
      '#description' => t('Disable inline editing if the field is set.'),
    );

    $form['jeditable']['override_defaults'] = array(
      '#type' => 'checkbox',
      '#title' => t('Override defaults'),
      '#default_value' => $this->options['jeditable']['override_defaults'],
      '#description' => t('It is possible to customize the operation and appearance of the inline editor. See the !readme for instructions.',
                          array('!readme' => l('README.txt',
                                             JEDITABLE_DIR . '/README.txt',
                                             array('attributes' => array('target' => '_blank'))),
                               )
                          ) . '<br/><b>' . t('Note: ') . '</b>' . t("The 'Reload page' option will also be overridden."),
    );
  }

  /**
   * Render the field.
   * The inline editor tags are placed innermost.
   */
  function render($values) {
    $value = parent::render($values);

    $is_enabled = $this->options['jeditable']['enabled'];
    $reload_page = $this->options['jeditable']['reload_page'];
    $hide_if_empty = $this->options['jeditable']['hide_if_empty'];
    $disable_if_not_empty = $this->options['jeditable']['disable_if_not_empty'];
    $override_defaults = $this->options['jeditable']['override_defaults'];

    if (empty($value) && $hide_if_empty) {
      return $value;
    }

    if (!empty($value) && $disable_if_not_empty) {
      return $value;
    }

    if ($is_enabled) {
      $field = $this->content_field;
      $field_name = $field['field_name'];

      if ($override_defaults) {
        $inline_editor_class = "jeditable-{$field_name}";
      } else {
        $inline_editor_class = $this->inline_editor_class;
        if ($reload_page) {
          $inline_editor_class .= "-reload";
        }
      }

      $nid_field_alias = $this->aliases['nid'];
      $no_tags_value = strip_tags($value);
      $id = 'cck-'. $values->$nid_field_alias .'-'. $field_name;
      $inline_editor = '<span id="' . $id . '" class="' . $inline_editor_class . ' edit-datetime">'. $no_tags_value .'</span>';

      if (!empty($value)) {
        // If tags were stripped, then we need to be sure that we are replacing
        // the text and not some part of a tag.
        if (strcmp($value, $no_tags_value) == 0) {
          $value = str_replace($no_tags_value, $inline_editor, $value);
        } else {
          $value = str_replace('>'.$no_tags_value.'<', '>'.$inline_editor.'<', $value);
        }
      } else {
        $value = $inline_editor;
      }
    }
    return $value;
  }

}

// End of script
