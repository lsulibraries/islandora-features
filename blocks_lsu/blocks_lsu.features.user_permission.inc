<?php
/**
 * @file
 * blocks_lsu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function blocks_lsu_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'institution administrator' => 'institution administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search islandora solr'.
  $permissions['search islandora solr'] = array(
    'name' => 'search islandora solr',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'institution administrator' => 'institution administrator',
    ),
    'module' => 'islandora_solr',
  );

  return $permissions;
}
