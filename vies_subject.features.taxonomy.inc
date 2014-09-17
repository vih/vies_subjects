<?php
/**
 * @file
 * vies_subject.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vies_subject_taxonomy_default_vocabularies() {
  return array(
    'vies_subject_group' => array(
      'name' => 'Subject group',
      'machine_name' => 'vies_subject_group',
      'description' => 'Used to categorize the subjects.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
