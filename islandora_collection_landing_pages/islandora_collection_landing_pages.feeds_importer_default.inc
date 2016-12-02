<?php
/**
 * @file
 * islandora_collection_landing_pages.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function islandora_collection_landing_pages_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'landing_pages';
  $feeds_importer->config = array(
    'name' => 'Landing Pages',
    'description' => 'Import landing page info',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'auto',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'PID',
            'target' => 'field_lp_pid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Institution',
            'target' => 'field_lp_institution',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Collection Name',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Body',
            'target' => 'body',
            'format' => 'full_html',
          ),
          4 => array(
            'source' => 'Short Description',
            'target' => 'field_lp_short_description',
            'format' => 'full_html',
          ),
          5 => array(
            'source' => 'Banner',
            'target' => 'field_lp_banner:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Thumbnail',
            'target' => 'field_lp_thumbnail:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landing_page',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['landing_pages'] = $feeds_importer;

  return $export;
}
