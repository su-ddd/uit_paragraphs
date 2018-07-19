<?php
/**
 * @file
 * uit_paragraphs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uit_paragraphs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'guide_sections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Guide Sections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_sections']['id'] = 'field_sections';
  $handler->display->display_options['fields']['field_sections']['table'] = 'field_data_field_sections';
  $handler->display->display_options['fields']['field_sections']['field'] = 'field_sections';
  $handler->display->display_options['fields']['field_sections']['label'] = '';
  $handler->display->display_options['fields']['field_sections']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sections']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sections']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sections']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sections']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sections']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sections']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'guide' => 'guide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['guide_sections'] = $view;

  return $export;
}
