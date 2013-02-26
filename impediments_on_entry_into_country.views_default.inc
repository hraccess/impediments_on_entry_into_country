<?php
/**
 * @file
 * impediments_on_entry_into_country.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function impediments_on_entry_into_country_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'br_reqs_into_the_country';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bureaucratic requirements into the Country';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Impediments on entry into country';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Administrative procedure submitted */
  $handler->display->display_options['fields']['field_type_of_bureaucratic_requi']['id'] = 'field_type_of_bureaucratic_requi';
  $handler->display->display_options['fields']['field_type_of_bureaucratic_requi']['table'] = 'field_data_field_type_of_bureaucratic_requi';
  $handler->display->display_options['fields']['field_type_of_bureaucratic_requi']['field'] = 'field_type_of_bureaucratic_requi';
  $handler->display->display_options['fields']['field_type_of_bureaucratic_requi']['label'] = 'Type of administrative procedure submitted';
  $handler->display->display_options['fields']['field_type_of_bureaucratic_requi']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'br_requirement_into_country' => 'br_requirement_into_country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Administrative procedure submitted (field_type_of_bureaucratic_requi) */
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['id'] = 'field_type_of_bureaucratic_requi_tid';
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['table'] = 'field_data_field_type_of_bureaucratic_requi';
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['field'] = 'field_type_of_bureaucratic_requi_tid';
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['expose']['operator_id'] = 'field_type_of_bureaucratic_requi_tid_op';
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['expose']['label'] = 'Type of administrative procedure submitted';
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['expose']['operator'] = 'field_type_of_bureaucratic_requi_tid_op';
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['expose']['identifier'] = 'field_type_of_bureaucratic_requi_tid';
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['vocabulary'] = 'bureaucratic_requirement_type';
  $handler->display->display_options['filters']['field_type_of_bureaucratic_requi_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+0';

  /* Display:  Impediments on entry into country */
  $handler = $view->new_display('page', ' Impediments on entry into country', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'br-reqs-into-the-country';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_burea_into');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['attach_text'] = 'Export to XLS';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'path/%/%/burea_into';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['br_reqs_into_the_country'] = array(
    t('Master'),
    t('Impediments on entry into country'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Description'),
    t('Date'),
    t('Type of administrative procedure submitted'),
    t('Date Between'),
    t(' Impediments on entry into country'),
    t('Data export'),
  );
  $export['br_reqs_into_the_country'] = $view;

  return $export;
}
