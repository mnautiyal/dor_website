<?php
global $base_url;
//print_r($form);
drupal_set_title($title = "Login", $output = CHECK_PLAIN);
$form['name']['#description'] = t('');
$form['pass']['#description'] = t('');
?>

<div class="form_outer">
	<div class="form_row">
		<?php print render($form['name']);?>
	</div>

	<div class="form_row">
		<?php print render($form['pass']);?>
	</div>
	<?php if(!empty($form['captcha'])) {?>
	<div class="form_row">
		<?php print render($form['captcha']);?>
	</div>
        <?php }?>
	<?php print render($form['actions']['submit']);?>
	<div class="forgot-pass">
		<a href="<?php echo $base_url; ?>/user/password">Forgot Password?</a>
	</div>
        <?php if(!empty($form['encrypt_submissions_status'])) {?>
	  <?php print render($form['encrypt_submissions_status']);?>
	<?php }?>
</div>

<div style="display: none;"><?php print drupal_render_children($form) ;?></div>
<script type="text/javascript">
	var $ = jQuery;
	$(document).ready(function(){
		$('form').attr('autocomplete', 'off');
		$('#user-login .form-text').each(function(){
			$(this).attr('readonly', 'readonly');
			$(this).focus(function(){ $(this).removeAttr('readonly'); });
			$(this).focusout(function(){ $(this).attr('readonly', 'readonly'); });
		});
	});
</script>
