<?php

class so__genotype_widget extends ChadoFieldWidget {

  // The default label for this field.
  public static $default_label = 'Genotype';

  // The list of field types for which this formatter is appropriate.
  public static $field_types = ['so__genotype'];

  /**
   *
   * @see TripalFieldWidget::form()
   */
  public function form(&$widget, &$form, &$form_state, $langcode, $items, $delta, $element) {
    parent::form($widget, $form, $form_state, $langcode, $items, $delta, $element);
  }

  /**
   *
   * @see TripalFieldWidget::submit()
   */
  public function submit($form, &$form_state, $entity_type, $entity, $langcode, $delta) {

  }
}
