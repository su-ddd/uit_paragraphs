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
<section id="<?php print 'section_' . $item_id; ?>" class="section_media <?php print 'section_media--' . $content['field_section_style']['#items'][0]['value']; ?>">
<div class="section_media_text">
<?php if ($content['field_section_title']): ?>
<h2 class="section_media__title"><?php print render($content['field_section_title']); ?></h2>
<?php endif; ?>
  <div class="section_media__body">
    <?php print render($content['field_section_body']); ?>
  </div>
  <div class="section_media__link">
    <?php print render($content['field_section_link']); ?>
  </div>
</div>
<div class="section_media__image">
  <?php print render($content['field_section_image']); ?>
</div>
</section>
