<?php
/**
 * @file
 * soc_odder_candidates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soc_odder_candidates_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function soc_odder_candidates_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function soc_odder_candidates_node_info() {
  $items = array(
    'kandidat' => array(
      'name' => t('Kandidat'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
