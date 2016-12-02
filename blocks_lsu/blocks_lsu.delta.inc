<?php
/**
 * @file
 * blocks_lsu.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function blocks_lsu_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'advanced_search';
  $delta->name = 'Advanced Search';
  $delta->description = '';
  $delta->theme = 'ldl';
  $delta->mode = 'preserve';
  $delta->parent = 'home';
  $delta->settings = array(
    'theme_ldl_settings' => NULL,
    'color_ldl_files' => NULL,
    'color_ldl_logo' => NULL,
    'color_ldl_palette' => NULL,
    'color_ldl_stylesheets' => NULL,
    'color_ldl_screenshot' => NULL,
  );
  $export['advanced_search'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'home';
  $delta->name = 'Home';
  $delta->description = '';
  $delta->theme = 'ldl';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_ldl_settings' => array(
      'toggle_slogan' => 0,
      'alpha_region_sidebar_first_columns' => '1',
      'alpha_region_sidebar_first_weight' => '2',
      'alpha_region_content_columns' => '10',
      'alpha_region_content_weight' => '1',
      'alpha_region_sidebar_second_columns' => '1',
    ),
    'color_ldl_files' => NULL,
    'color_ldl_logo' => NULL,
    'color_ldl_palette' => NULL,
    'color_ldl_stylesheets' => NULL,
    'color_ldl_screenshot' => NULL,
  );
  $export['home'] = $delta;

  return $export;
}
