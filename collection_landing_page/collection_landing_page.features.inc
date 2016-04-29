<?php
/**
 * @file
 * collection_landing_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function collection_landing_page_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('https://github.com/mjordan/islandora_migrate_cdm_collections'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
