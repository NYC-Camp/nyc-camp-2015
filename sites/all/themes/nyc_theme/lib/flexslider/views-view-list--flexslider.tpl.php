<?php

/**
 * @file
 * Spotlight Display block Views template file.
 *
 * Flexslider requires slideshow content to be wrapped in the "flexslider" and
 * "slides" classes, so we add the classes here.
 */
?>
<div class="flex-container">
	<div class="flexslider">
	  <ul class="slides">
	    <?php foreach ($rows as $id => $row): ?>
	      <li class="views-row slide">
	      	<?php print $row; ?>
	    	</li>
	    <?php endforeach; ?>
	  </ul>
	</div>
</div>