<?php
/**
 * @file
 * blocks_lsu.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function blocks_lsu_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'advanced_search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'advanced-search' => 'advanced-search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'islandora_solr-advanced' => array(
          'module' => 'islandora_solr',
          'delta' => 'advanced',
          'region' => 'content',
          'weight' => '-10',
        ),
        'islandora_solr-current_query' => array(
          'module' => 'islandora_solr',
          'delta' => 'current_query',
          'region' => 'content',
          'weight' => '-9',
        ),
        'islandora_solr-search_navigation' => array(
          'module' => 'islandora_solr',
          'delta' => 'search_navigation',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'advanced_search',
    ),
  );
  $context->condition_mode = 0;
  $export['advanced_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'home',
    ),
  );
  $context->condition_mode = 0;
  $export['home'] = $context;

  return $export;
}
