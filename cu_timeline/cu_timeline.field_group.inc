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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline_content|field_collection_item|field_timeline_item|form';
  $field_group->group_name = 'group_timeline_content';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_timeline_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'group_timeline_title',
      1 => 'group_timeline_text',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-timeline-content field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_timeline_content|field_collection_item|field_timeline_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline_display|bean|timeline|form';
  $field_group->group_name = 'group_timeline_display';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'timeline';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display',
    'weight' => '2',
    'children' => array(
      0 => 'field_timeline_style',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-timeline-display field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_timeline_display|bean|timeline|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline_image|field_collection_item|field_timeline_item_content|form';
  $field_group->group_name = 'group_timeline_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_timeline_item_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_timeline_item';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '7',
    'children' => array(
      0 => 'field_timeline_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-timeline-image field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_timeline_image|field_collection_item|field_timeline_item_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline_item|field_collection_item|field_timeline_item_content|form';
  $field_group->group_name = 'group_timeline_item';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_timeline_item_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeline Item',
    'weight' => '0',
    'children' => array(
      0 => 'group_timeline_title',
      1 => 'group_timeline_image',
      2 => 'group_timeline_text',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-timeline-item field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_timeline_item|field_collection_item|field_timeline_item_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline_text|field_collection_item|field_timeline_item_content|form';
  $field_group->group_name = 'group_timeline_text';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_timeline_item_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_timeline_item';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '6',
    'children' => array(
      0 => 'field_timeline_item_text',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-timeline-text field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_timeline_text|field_collection_item|field_timeline_item_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline_text|field_collection_item|field_timeline_item|form';
  $field_group->group_name = 'group_timeline_text';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_timeline_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_timeline_content';
  $field_group->data = array(
    'label' => 'Timeline Item Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_timeline_item_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Timeline Item Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-timeline-text field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_timeline_text|field_collection_item|field_timeline_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline_title|field_collection_item|field_timeline_item_content|form';
  $field_group->group_name = 'group_timeline_title';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_timeline_item_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_timeline_item';
  $field_group->data = array(
    'label' => 'Title',
    'weight' => '5',
    'children' => array(
      0 => 'field_timeline_item_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-timeline-title field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_timeline_title|field_collection_item|field_timeline_item_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_timeline_title|field_collection_item|field_timeline_item|form';
  $field_group->group_name = 'group_timeline_title';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_timeline_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_timeline_content';
  $field_group->data = array(
    'label' => 'Timeline Item Title',
    'weight' => '3',
    'children' => array(
      0 => 'field_timeline_item_short_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Timeline Item Title',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-timeline-title field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_timeline_title|field_collection_item|field_timeline_item|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Date Range');
  t('Display');
  t('Image');
  t('Text');
  t('Timeline Item');
  t('Timeline Item Content');
  t('Timeline Item Title');
  t('Title');

  return $field_groups;
}
