<?php

function form_fun_tree($form_state) {
  $form = [];

  $form['#tree'] = TRUE;

  $form['home'] = [
    '#type' => 'fieldset',
    '#title' => t('Home address'),
  ];

  $form['home']['street'] = [
    '#type' => 'textfield',
    '#title' => t('Street Address'),
  ];

  $form['home']['city'] = [
    '#type' => 'textfield',
    '#title' => t('City'),
  ];

  $form['work'] = [
    '#type' => 'fieldset',
    '#title' => t('Work address'),
  ];

  $form['work']['street'] = [
    '#type' => 'textfield',
    '#title' => t('Street Address'),
  ];

  $form['work']['city'] = [
    '#type' => 'textfield',
    '#title' => t('City'),
  ];

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Submit'),
  ];

  return $form;
}

function form_fun_tree_submit(&$form, &$form_state) {

}