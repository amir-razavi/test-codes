<?php
/**
 * Implementation of menu_debug_test_node_context function
 */
function menu_debug_test_node_context($node){
  $output = array(
      '#type' => 'markup',
      '#markup' => t('This is a test!'),
      );
    return $output;
}
/*
function menu_debug_test_node_context($nid){
  if (is_numeric($nid) && $node = node_load($nid)){
    //$text =
    $output = array(
      '#type' => 'markup',
      '#markup' => t('This is a test!'),
      );
    return $output;
  }
  else{
    return drupal_not_found();
  }
}
*/
