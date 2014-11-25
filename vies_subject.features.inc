<?php
/**
 * @file
 * vies_subject.features.inc
 */

/**
 * Implements hook_entityqueue_api().
 */
function vies_subject_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_ctools_plugin_api().
 */
function vies_subject_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vies_subject_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vies_subject_node_info() {
  $items = array(
    'vies_subject' => array(
      'name' => t('Subject'),
      'base' => 'node_content',
      'description' => t('<em>Subjects</em> is used for the subjects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
