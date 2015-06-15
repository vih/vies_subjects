<?php
/**
 * @file
 * vies_subject.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function vies_subject_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'frontpage_subjects';
  $queue->label = 'Frontpage Subjects';
  $queue->language = 'da';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'vies_subject' => 'vies_subject',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['frontpage_subjects'] = $queue;

  return $export;
}
