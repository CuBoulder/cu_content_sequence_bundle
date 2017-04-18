<section class="cd-horizontal-timeline">
  <div class="cd-timeline-view-all">
    <?php print l('View All', 'timeline/view/' . $bean->bid); ?>
  </div>
	<div class="timeline">
		<div class="events-wrapper">
			<div class="events">
				<ol>
          <?php
            foreach ($dates as $key => $date) {
              print '<li><a href="#' . $key . '" data-date="' . $key . '">' . $date . '</a></li>';
            }
          ?>
				</ol>

				<span class="filling-line" aria-hidden="true"></span>
			</div> <!-- .events -->
		</div> <!-- .events-wrapper -->

		<ul class="cd-timeline-navigation">
			<li><a href="#" class="prev inactive"><i class="fa fa-chevron-circle-left"></i><span class="element-invisible">Previous</span></a></li>
			<li><a href="#" class="next"><i class="fa fa-chevron-circle-right"></i><span class="element-invisible">Next</span></a></li>
		</ul> <!-- .cd-timeline-navigation -->
	</div> <!-- .timeline -->

	<div class="events-content">
		<ol>
      <?php $count = 0; foreach ($content['timeline_items'] as $item): ?>
        <?php
        $count++;
          $index = str_pad($count, 4, "0", STR_PAD_LEFT);
          $data_date = $index;
        ?>
				<li class="timeline-single-item" data-date="<?php print $data_date; ?>">
					<div class="timeline-item-wrapper">
            <?php print render($item); ?>
          </div>
				</li>
			<?php endforeach; ?>
		</ol>
	</div> <!-- .events-content -->
  <div class="cd-timeline-item-navigation-wrapper">
    <ul class="cd-timeline-item-navigation">
      <li><a href="#0" class="prev inactive"><i class="fa fa-chevron-left"></i><span class="element-invisible">Previous</span></a></li>
      <li><a href="#0" class="next"><i class="fa fa-chevron-right"></i><span class="element-invisible">Next</span></a></li>
    </ul>
  </div>
</section>
