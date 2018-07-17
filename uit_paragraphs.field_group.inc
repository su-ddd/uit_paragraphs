<?php
/**
 * @file
 * uit_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uit_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|card|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_card_body',
      1 => 'field_card_url',
      2 => 'field_card_color',
      3 => 'field_card_icon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_content|paragraphs_item|card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|section_generic|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'section_generic';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_section_body',
      1 => 'field_section_icon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_content|paragraphs_item|section_generic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|section_with_cards|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'section_with_cards';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'field_section_cards',
      1 => 'field_section_icon',
      2 => 'field_section_introduction',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_content|paragraphs_item|section_with_cards|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_style|paragraphs_item|section_with_cards|form';
  $field_group->group_name = 'group_style';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'section_with_cards';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Style',
    'weight' => '1',
    'children' => array(
      0 => 'field_section_collapse',
      1 => 'field_section_bg_color',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Style',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-style field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_style|paragraphs_item|section_with_cards|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Style');

  return $field_groups;
}
