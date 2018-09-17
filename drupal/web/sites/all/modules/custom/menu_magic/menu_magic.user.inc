<?php

/**
 * Page call back for user/%/magic
 */

function menu_magic_user_tab($value) {
  if (is_numeric($value) && ($account = user_load($value))) {
    return [
      '#type' => 'markup',
      '#markup' => t('%username is totaly awsome', ['%username' => $account->name]),
    ];
  }
  else {
  	return drupal_not_found();
  }
}

