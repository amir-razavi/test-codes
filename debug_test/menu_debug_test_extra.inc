<?php
/**
 * Implementing menu_debug_test_extra function
 */
function menu_debug_test_extra($wildcard){
$content = array();

$content = array(
  '#type' => 'markup',
  '#markup' => '<p>' . t('This refelects the url argument: "%wildcard".', array('%wildcard' => $wildcard)) . '</p>',
  );
return $content;
}
