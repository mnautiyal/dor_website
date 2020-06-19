<?php



/**
 * Determine whether the user has permission to use menu_block module.
 */


function webguidlines_settings(){
	return drupal_get_form('webguidlines_settings_form');
}

function webguidlines_settings_form($form, &$form_state){
	webguidlines_help();
	global $base_url;
	$form = array();	
	$external_link = 1;	
	if(variable_get('external_link')){
		$external_link = variable_get('external_link');
	}
	$external_link_msg = "External site that opens in a new window";
	if(variable_get('external_link_msg')){
		$external_link_msg = variable_get('external_link_msg');
	}
	
	
	$show_download = "1";
	
	if(variable_get('show_download')){
		$show_download = variable_get('show_download');
	}
	
	$show_download_msg = "Download The file";
	if(variable_get('show_download_msg')){
		$show_download_msg = variable_get('show_download_msg');
	}
	
	$show_file_icon = "1";	
	if(variable_get('show_file_icon')){
		$show_file_icon = variable_get('show_file_icon');
	}
	
	
	$show_file_size = "1";	
	if(variable_get('show_file_size')){
		$show_file_size = variable_get('show_file_size');
	}
	
	$show_internal_file = "1";	
	if(variable_get('show_internal_file')){
		$show_file_size = variable_get('show_internal_file');
	}
	
	$show_internal_file_msg = "Open in new window";
	if(variable_get('show_internal_file_msg')){
		$show_internal_file_msg = variable_get('show_internal_file_msg');
	}
	
	$show_internal_file_extaintion = "pdf,txt";
	if(variable_get('show_internal_file_extaintion')){
		$show_internal_file_extaintion = variable_get('show_internal_file_extaintion');
	}
	

	
	$options = array();
	$options["1"] = "Show massase in external url";		
	$form['external_link'] = array(
	  '#title' => t('External Link'),
	  '#type' => 'checkboxes',
	  '#description' => t('Add target Blank and new window massage.'),
	  '#options' => $options,
	  '#default_value' => array($external_link),
	); 
	$form['external_link_msg'] = array(
	  '#title' => t('External Link Massage'),
	  '#type' => 'textfield',
	  '#description' => t('Add target Blank and new window massage.'),
	  '#value' => $external_link_msg ,	  
	);
	
	
	
	$options = array();
	$opt["1"] = "Show Internal files massage for new window";		
	$form['show_internal_file'] = array(
	  '#title' => t('Internal files massage for new window'),
	  '#type' => 'checkboxes',
	  '#description' => t('Show Internal files massage for new window.'),
	  '#options' => $opt,
	  '#default_value' => array($show_internal_file),
	); 
	
	$form['show_internal_file_msg'] = array(
	  '#title' => t('Massage of Internal files massage for new window'),
	  '#type' => 'textfield',
	  '#description' => t('Massage of Internal files massage for new window'),
	  '#value' => $show_internal_file_msg ,	  
	);
	
	
	$form['show_internal_file_extaintion'] = array(
	  '#title' => t('Expaintion of Internal files massage for new window'),
	  '#type' => 'textfield',
	  '#description' => t('Please add "," inbetween two extaintion.'),
	  '#value' => $show_internal_file_extaintion,	  
	);
	
	
	
	$options = array();
	$opt["1"] = "Show File download massase";		
	$form['show_download'] = array(
	  '#title' => t('Show Download massage'),
	  '#type' => 'checkboxes',
	  '#description' => t('Show Download massage.'),
	  '#options' => $opt,
	  '#default_value' => array($show_download),
	); 
	
	
	
	
	$form['show_download_msg'] = array(
	  '#title' => t('File download massage'),
	  '#type' => 'textfield',
	  '#description' => t('File download massage.'),
	  '#value' => $show_download_msg ,	  
	);
	
	
	

	$options = array();
	$icon_opt["1"] = "Show File Icon";		
	$form['show_file_icon'] = array(
	  '#title' => t('File Icon'),
	  '#type' => 'checkboxes',
	  '#description' => t('File Icon.'),
	  '#options' => $icon_opt,
	  '#default_value' => array($show_file_icon),
	); 
	
	
	
	$options = array();
	$size_opt["1"] = "Show file Size";		
	$form['show_file_size'] = array(
	  '#title' => t('File Size'),
	  '#type' => 'checkboxes',
	  '#description' => t('File Size'),
	  '#options' => $size_opt,
	  '#default_value' => array($show_file_size),
	); 
	
	
	
	$form['submit_button'] = array(
		'#type' => 'submit',
		'#value' => t('Submit'),
	);
	return $form;
}



function webguidlines_settings_form_submit($form, &$form_state){
	global $base_url;	
	if(!empty($form_state['input']['external_link'][1])){
		variable_set('external_link', $form_state['input']['external_link'][1]);
	}else{
		variable_set('external_link', 2);
		
	}
	variable_set('external_link_msg', $form_state['input']['external_link_msg']);
	
	if(!empty($form_state['input']['show_download'][1])){
		variable_set('show_download', $form_state['input']['show_download'][1]);
	}else{
		variable_set('show_download', 2);
	}
	variable_set('show_download_msg', $form_state['input']['show_download_msg']);
	
	
	
	if(!empty($form_state['input']['show_file_icon'][1])){
		variable_set('show_file_icon', $form_state['input']['show_file_icon'][1]);
	}else{
		variable_set('show_file_icon', 2);
		
	}
	
	if(!empty($form_state['input']['show_file_size'][1])){
		variable_set('show_file_size', $form_state['input']['show_file_size'][1]);
	}else{
		variable_set('show_file_size', 2);
	}
	
	
	if(!empty($form_state['input']['show_internal_file'][1])){
		variable_set('show_internal_file', $form_state['input']['show_internal_file'][1]);
	}else{
		variable_set('show_internal_file', 2);
	}
	variable_set('show_internal_file_msg', $form_state['input']['show_internal_file_msg']);
	variable_set('show_internal_file_extaintion', $form_state['input']['show_internal_file_extaintion']);
	
    drupal_set_message(t('Your configuration has been saved.'));
	drupal_goto(current_path());
}

function innerTextFormat($text){
	$text1 = explode("/",$text);
	$textArray = explode(".",str_replace("_"," ",str_replace("-"," ", $text1[count($text1) - 1])));
	$new_text = $textArray[0];
	for($i = 1; $i < count($textArray)-1; $i++){
		$new_text = $new_text." ".$textArray[$i];
	}
	return $text1[count($text1) - 1];
}

function isExternalSite($url,$site_url) {
	$site_url = str_replace("www.","",str_replace("http://","",str_replace("https://","",$site_url)));
	$urls = parse_url($url);
	if(array_key_exists('scheme',$urls)){
		if(strpos($url,$site_url) !== false || strpos($url,"/") === '0' || $url == "#"){
			return FALSE;
		}else{
			return TRUE;
		}
	}else{
		return FALSE;
	}
}
