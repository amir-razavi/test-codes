<?php
/**
 * Implement menu_debug_test_user_tab callback function
 */

function menu_debug_test_user_tab($wildcard){
  if (is_numeric($wildcard) && ($account = user_load($wildcard))){
    return array(
      '#type' => 'markup',
      '#markup' => t("%username is validated!", array('%username' => $account->name)),
      );
  }
  else {
    return drupal_not_found();
  }

}
