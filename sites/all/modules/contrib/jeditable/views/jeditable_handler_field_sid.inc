<?php

/**
 * Override for workflow_views_handler_field_sid
 *
 */
class jeditable_handler_field_sid extends workflow_views_handler_field_sid {

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
      $field_name = $this->field;

      if ($override_defaults) {
        $inline_editor_class = "jeditable-{$field_name}";
      } else {
        $inline_editor_class = "jeditable-select";
        if ($reload_page) {
          $inline_editor_class .= "-reload";
        }
      }

      $no_tags_value = strip_tags($value);
      $id = 'workflow-'. $values->nid .'-'. $field_name;
      $inline_editor = '<span id="' . $id . '" class="' . $inline_editor_class . '">'. $no_tags_value .'</span>';

      if (!empty($value)) {
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
