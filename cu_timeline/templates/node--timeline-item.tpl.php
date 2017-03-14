<div class="timeline-image">
  <?php
    if (!empty($content['field_timeline_image'])) {
      print render($content['field_timeline_image']);
    }
  ?>
</div>
<?php
  print render($content['body']);
?>
