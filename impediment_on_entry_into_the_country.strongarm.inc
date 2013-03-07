<?php
/**
 * @file
 * impediment_on_entry_into_the_country.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function impediment_on_entry_into_the_country_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_br_requirement_into_country';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_br_requirement_into_country';
  $strongarm->value = '[node:field_date] [node:field_type_of_bureaucratic_requi] [node:field-organization-affected]';
  $export['auto_entitylabel_pattern_node_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_br_requirement_into_country';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_br_requirement_into_country';
  $strongarm->value = 0;
  $export['comment_anonymous_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_br_requirement_into_country';
  $strongarm->value = '1';
  $export['comment_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_br_requirement_into_country';
  $strongarm->value = 0;
  $export['comment_default_mode_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_br_requirement_into_country';
  $strongarm->value = '50';
  $export['comment_default_per_page_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_br_requirement_into_country';
  $strongarm->value = 0;
  $export['comment_form_location_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_br_requirement_into_country';
  $strongarm->value = '0';
  $export['comment_preview_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_br_requirement_into_country';
  $strongarm->value = 0;
  $export['comment_subject_field_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__br_requirement_into_country';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_br_requirement_into_country';
  $strongarm->value = '0';
  $export['language_content_type_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_br_requirement_into_country';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_br_requirement_into_country';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_br_requirement_into_country';
  $strongarm->value = array(
    0 => 'promote',
  );
  $export['node_options_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_br_requirement_into_country';
  $strongarm->value = '0';
  $export['node_preview_br_requirement_into_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_br_requirement_into_country';
  $strongarm->value = 1;
  $export['node_submitted_br_requirement_into_country'] = $strongarm;

  return $export;
}
