<?php
/**
 * @file
 * vies_subject.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vies_subject_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
