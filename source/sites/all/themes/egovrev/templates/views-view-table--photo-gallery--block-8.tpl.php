<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
 global $base_url;
 //echo "<pre>";
 //print_r($rows);
?>

<div class="gallery-area clearfix">
      <div class="gallery-heading">
        <h3><?php print t('Photo Gallery'); ?></h3>
        <a class="bttn-more bttn-view" href="gallery-landing"><span><?php print t('View All'); ?></span></a>
      </div>
      <div class="gallery-holder">
        <div id="galleryCarousel" class="flexslider">
          <ul class="slides">
			<?php foreach ($rows as $row_count => $row): ?>
            <li data-thumb="<?php echo $row['field_image_1'] ?>"><img src="<?php echo $row['field_image'] ?>" /></li>
            <?php endforeach; ?>
          </ul>
        </div>
      </div>
    </div>
