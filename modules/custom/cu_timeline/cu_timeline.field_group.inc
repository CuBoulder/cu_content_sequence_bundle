<?php
/**
 * @file
 * cu_timeline.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_timeline_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_range|bean|timeline|form';
  $field_group->group_name = 'group_date_range';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'timeline';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Range',
    'weight' => '4',
    'children' => array(
      0 => 'field_timeline_date_range',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Date Range',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-date-range field-group-fieldset',
        'description' => 'Choose a starting date, or date range of timeline items.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_date_range|bean|timeline|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Date Range');

  return $field_groups;
}
