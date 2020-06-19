<?php
//print_r($form);
?>
<div class="form_outer">
	<div class="form_row">
		<?php print render($form['submitted']['feedback_topic']);?>
	</div>

	<div class="form_row">
		<?php print render($form['submitted']['name']);?>
	</div>

	<div class="form_row">
		<?php print render($form['submitted']['email_address']);?>
	</div>

	<div class="form_row">
		<?php print render($form['submitted']['feedback']);?>
	</div>
	
	<?php if(!empty($form['captcha'])) {?>
	<div class="form_row">
		<?php print render($form['captcha']);?>
	</div>
    <?php }?>
	
	
	<?php print render($form['actions']['submit']);?>
</div>
<div style="display: none;"><?php print drupal_render_children($form) ;?></div>
