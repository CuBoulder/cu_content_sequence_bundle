<section class="cd-vertical-timeline">
	<div class="events-content">
		<ol class="clearfix">
			<?php foreach ($content['timeline_items'] as $item): ?>

				<li class="timeline-single-item">
					<?php print render($item); ?>
				</li>
			<?php endforeach; ?>
		</ol>
	</div> <!-- .events-content -->
</section>
