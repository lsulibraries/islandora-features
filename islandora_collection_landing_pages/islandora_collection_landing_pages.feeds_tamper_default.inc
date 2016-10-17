<?php
/**
 * @file
 * islandora_collection_landing_pages.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function islandora_collection_landing_pages_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landing_pages-banner-rewrite';
  $feeds_tamper->importer = 'landing_pages';
  $feeds_tamper->source = 'Banner';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://lp/banners/[banner]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['landing_pages-banner-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landing_pages-thumbnail-rewrite';
  $feeds_tamper->importer = 'landing_pages';
  $feeds_tamper->source = 'Thumbnail';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://lp/thumbnails/[thumbnail]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['landing_pages-thumbnail-rewrite'] = $feeds_tamper;

  return $export;
}
