<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php
  $card_color = 'gray';
  if (isset($content['field_card_color'])) {
    $card_color = $content['field_card_color']['#items'][0]['value'];
  }
?>
<div class="column card <?php print 'card-' . $card_color; ?>">
  <?php if ($content['field_card_icon'] || $content['field_card_title']): ?>
  <h3><i class="fa <?php print render($content['field_card_icon']); ?> fa-2x" aria-hidden="true"></i><?php print render($content['field_card_title']); ?></h3>
  <?php endif; ?>
  <?php print render($content['field_card_body']); ?>
  <?php print render($content['field_card_url']); ?>
</div>
