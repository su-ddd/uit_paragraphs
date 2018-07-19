<?php
/**
 * @file
 * uit_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uit_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uit_paragraphs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_paragraphs_info().
 */
function uit_paragraphs_paragraphs_info() {
  $items = array(
    'card' => array(
      'name' => 'Card',
      'bundle' => 'card',
      'locked' => '1',
    ),
    'faq' => array(
      'name' => 'FAQ',
      'bundle' => 'faq',
      'locked' => '1',
    ),
    'question_and_answer' => array(
      'name' => 'Question and Answer',
      'bundle' => 'question_and_answer',
      'locked' => '1',
    ),
    'section_generic' => array(
      'name' => 'Section (Generic)',
      'bundle' => 'section_generic',
      'locked' => '1',
    ),
    'section_media' => array(
      'name' => 'Section Media',
      'bundle' => 'section_media',
      'locked' => '1',
    ),
    'section_with_cards' => array(
      'name' => 'Section with Cards',
      'bundle' => 'section_with_cards',
      'locked' => '1',
    ),
  );
  return $items;
}
