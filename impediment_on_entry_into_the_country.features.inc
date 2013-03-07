<?php
/**
 * @file
 * impediment_on_entry_into_the_country.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function impediment_on_entry_into_the_country_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function impediment_on_entry_into_the_country_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function impediment_on_entry_into_the_country_node_info() {
  $items = array(
    'br_requirement_into_country' => array(
      'name' => t('Impediments on entry into country'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
