<?php
/**
 * @file
 * cu_advanced_timeline.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function cu_advanced_timeline_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'advanced_timeline';
  $bean_type->label = 'Advanced Timeline';
  $bean_type->options = '';
  $bean_type->description = 'Display a sequence of content, such as important dates or milestones.';
  $export['advanced_timeline'] = $bean_type;

  return $export;
}
