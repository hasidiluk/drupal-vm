<?php

function form_fun_cake_page() {
  return drupal_get_form('form_fun_cake');
}

function form_fun_cake($form_state) {
  $form = [];

  $form['choice'] = [
    '#type' => 'select',
    '#title' => t('cake or pie ?'),
    '#description' => t('Would you like cake or pie ?'),
    '#options' => [
      'cake' => t('Cake plese'),
      'pie' => t('Pie I guess'),
    ],
    '#default_value' => 'cake',
    '#required' => TRUE,
  ];

  $form['buttons']['submit'] = [
    '#type' => 'submit',
    '#value' => t('Submit'),
  ];

  $form['buttons']['submit'] = [
    '#type' => 'submit',
    '#value' => t('Equivocate'),
    '#submit' => ['form_fun_cake_unsure'],
    '#validate' => [],
  ];
  return $form;
}

function form_fun_cake_validate(&$form, &$form_state) {
  if($form_state['values']['choice'] == 'cake'){
    form_set_error('choice', t('We are out of cake.'));
  }
}

function form_fun_cake_unsure() {
  drupal_set_message(t('make up your mind'), 'warning');
}

function form_fun_cake_submit(&$form, &$form_state) {
  $form_state['redirect'] = '';
}