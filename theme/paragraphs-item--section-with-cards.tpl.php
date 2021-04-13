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
  /**
   * We determine if this section is collapsible or not, and if it is,
   * what its default state should be.  The options are:
   * open (always open, not collapsible),
   * collapsible (open by default, collapsible),
   * collapsed (closed by default, collapsible)
   */
   $collapse = 'open';
   if (isset($content['field_section_collapse']['#items'][0]['value'])) {
     $collapse = $content['field_section_collapse']['#items'][0]['value'];
   }

   $section_body_classes = ['section-body'];
   if ($collapse != 'open') {
     $section_body_classes[] = 'accordion-group';
   }
   $section_body_css_classes = join(' ', $section_body_classes);

   $section_classes = [];
   if (isset($content['field_section_bg_color']['#items'][0]['value'])) {
     $bg_color = $content['field_section_bg_color']['#items'][0]['value'];
     $section_classes[] = $bg_color;
   }
   $section_css_classes = join(' ', $section_classes);
?>
<div id="<?php print 'section_' . $item_id; ?>" class="section">
<section <?php if (!empty($section_css_classes)) { print 'class="' . $section_css_classes . '"'; }?>>
<div <?php if (!empty($section_body_css_classes)) { print 'class="' . $section_body_css_classes . '"'; } ?>>
<?php if ($content['field_section_title']): ?>
  <h2 <?php if ($collapse != 'open') { print 'class="accordion-heading"'; } ?>>
    <?php if ($collapse != 'open') { print '<a class="accordion-toggle" data-toggle="collapse" href="#' . $item_id . '_content' . '"'; } ?>
    <?php if ($collapse == 'collapsible') { print 'aria-expanded="true"'; } else { print 'aria-expanded="false"'; } ?>
    <?php if ($collapse != 'open') { print '>'; } ?>
    <?php if ($content['field_section_icon']): ?><?php print render($content['field_section_icon']); ?><?php endif; ?><?php print render($content['field_section_title']); ?>
    <?php if ($collapse != 'open') { print '</a>'; } ?>
  </h2>
<?php endif; ?>
<?php if ($collapse != 'open'): ?>
<div id="<?php print $item_id . '_content'; ?>" class="accordion-body collapse <?php if ($collapse == 'collapsible') { print 'in'; } ?>">
<div class="accordion-inner">
<?php endif; ?>
<?php print render($content['field_section_introduction']); ?>
<?php print render($content['field_section_cards']); ?>
<div class="section-link"><?php print render($content['field_section_link']); ?></div>
<?php if ($collapse != 'open'): ?>
</div>
</div>
<?php endif; ?>
</div>
</section>
</div>
