<?php
/**
 * @file
 * cu_timeline.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function cu_timeline_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'timeline';
  $bean_type->label = 'Timeline';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['timeline'] = $bean_type;

  return $export;
}
