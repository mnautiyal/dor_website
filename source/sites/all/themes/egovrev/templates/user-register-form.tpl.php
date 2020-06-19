<?php 
global $base_url;
//print_r($form);
drupal_set_title($title = "Register");
$form['account']['name']['#description'] = "";
$form['account']['mail']['#description'] = "";
?>

<div class="form_outer">
	<div class="form_row">
		<?php print render($form['account']['name']);?>
	</div>

	<div class="form_row">
		<?php print render($form['account']['mail']);?>
	</div>
	<div class="profile_head">Profile</div>
	
	<div class="form_row">
		<?php print render($form['profile_main']['field_name']);?>
	</div>

	<div class="form_row">
		<?php print render($form['profile_main']['field_age']);?>
	</div>

	<div class="form_row">
		<?php print render($form['profile_main']['field_mobile_number']);?>
	</div>

	<div class="form_row">
		<?php print render($form['profile_main']['field_pin_code']);?>
	</div>

	<div class="form_row">
		<?php print render($form['profile_main']['field_location']);?>
	</div>

	<div class="form_row">
		<?php print render($form['profile_main']['field_country']);?>
	</div>

	<div class="form_row">
		<?php print render($form['profile_main']['field_state_district']);?>
	</div>
<?php if(!empty($form['captcha'])) {?>
	<div class="form_row">
		<?php print render($form['captcha']);?>
	</div>
        <?php }?>
	<?php print render($form['actions']['submit']);?>
</div>

<div style="display: none;"><?php print drupal_render_children($form) ;?></div>
<script type="text/javascript">
	$(document).ready(function() {
		$('#edit-mail').replaceWith($('#edit-mail').clone().attr('type', 'email'));
	});
</script>
