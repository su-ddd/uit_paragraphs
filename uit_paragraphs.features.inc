<?php
/**
 * @file
 * uit_paragraphs.features.inc
 */

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
  );
  return $items;
}
