<div class="timeline-image">
  <?php
    if (!empty($content['field_timeline_image'])) {
      print render($content['field_timeline_image']);
    }
  ?>
</div>
<?php
  if (!empty($content['timeline_item_date'])) {
    print render($content['timeline_item_date']);
  }
?>
<?php
  print render($content['body']);
?>
