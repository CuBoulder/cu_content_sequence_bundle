<?php
/**
 * @file
 * cu_timeline.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cu_timeline_taxonomy_default_vocabularies() {
  return array(
    'timeline_category' => array(
      'name' => 'Timeline Category',
      'machine_name' => 'timeline_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
