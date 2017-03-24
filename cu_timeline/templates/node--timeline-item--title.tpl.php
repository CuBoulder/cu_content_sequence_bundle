
  <a name="<?php print $data_date; ?>" id="<?php print $data_date; ?>"></a>
	<div class="timeline-item-wrapper">

    <div class="timeline-item">
      <?php
        if (!empty($content['field_timeline_image'])) {
          print render($content['field_timeline_image']);
        }
      ?>

      <div class="timeline-item-content">
        <strong class="timeline-node-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></strong>
        <?php if (isset($timeline_display_date['date'])): ?>
        	<div class="timeline-item-date">
            <?php print $timeline_display_date['date']; ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
  </div>
