<?php
/**
 * @file
 * simple01.features.inc
 */

/**
 * Implements hook_node_info().
 */
function simple01_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Surname'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
