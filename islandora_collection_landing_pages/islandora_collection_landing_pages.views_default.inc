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
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
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
<div class="short_desc">[field_lp_short_description]</div>
</td>
<td class="collectionLinks">
<a href="[path]"><p class="about_collection">About</p></a>
<a href="/islandora/object/[field_lp_pid]:collection"><p class="items_collection">items</p></a>';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_lp_short_description' => 'field_lp_short_description',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['path'] = 'browse-collections';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'islandora collection landing pages';
  $handler->display->display_options['menu']['name'] = 'features';

  /* Display: Minigrid */
  $handler = $view->new_display('block', 'Minigrid', 'minigrid');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'minigrid';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Minigrid';
  $export['islandora_collection_landing_pages'] = $view;

  return $export;
}
