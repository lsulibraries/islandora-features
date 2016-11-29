<?php
/**
 * @file
 * islandora_collection_landing_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function islandora_collection_landing_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'islandora_collection_landing_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'islandora collection landing pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse All Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';

  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_thumbnail' => 'field_thumbnail',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_thumbnail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;

  /* Header: Global: Alpha Pagination */
  $handler->display->display_options['header']['alpha_pagination']['id'] = 'alpha_pagination';
  $handler->display->display_options['header']['alpha_pagination']['table'] = 'views';
  $handler->display->display_options['header']['alpha_pagination']['field'] = 'alpha_pagination';
  $handler->display->display_options['header']['alpha_pagination']['label'] = 'Alphabetical Paging';
  $handler->display->display_options['header']['alpha_pagination']['pre_letter_path'] = 'browse-collections';
  $handler->display->display_options['header']['alpha_pagination']['paginate_all_display'] = '1';
  $handler->display->display_options['header']['alpha_pagination']['paginate_view_numbers'] = '0';

  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: PID */
  $handler->display->display_options['fields']['field_lp_pid']['id'] = 'field_lp_pid';
  $handler->display->display_options['fields']['field_lp_pid']['table'] = 'field_data_field_lp_pid';
  $handler->display->display_options['fields']['field_lp_pid']['field'] = 'field_lp_pid';
  $handler->display->display_options['fields']['field_lp_pid']['label'] = '';
  $handler->display->display_options['fields']['field_lp_pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_pid']['alter']['text'] = '<a href="/islandora/object/[field_lp_pid]:collection">Browse Items in this Collection</a>';
  $handler->display->display_options['fields']['field_lp_pid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_lp_short_description']['id'] = 'field_lp_short_description';
  $handler->display->display_options['fields']['field_lp_short_description']['table'] = 'field_data_field_lp_short_description';
  $handler->display->display_options['fields']['field_lp_short_description']['field'] = 'field_lp_short_description';
  $handler->display->display_options['fields']['field_lp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_lp_short_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lp_short_description']['alter']['text'] = '<h2><a href="/islandora/object/[field_lp_pid]:collection">[title]</a></h2>
<p class="short_desc">[field_lp_short_description]</p>
<p class="about_collection"><a href="[path]">About this Collection</a>';
  $handler->display->display_options['fields']['field_lp_short_description']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['field_lp_short_description']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_lp_short_description']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_lp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lp_short_description']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['path_case'] = 'upper';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landing_page' => 'landing_page',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Collection Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'word';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Search Descriptions';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'browse-collections';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'islandora collection landing pages';
  $handler->display->display_options['menu']['name'] = 'features';
  $export['islandora_collection_landing_pages'] = $view;

  return $export;
}
