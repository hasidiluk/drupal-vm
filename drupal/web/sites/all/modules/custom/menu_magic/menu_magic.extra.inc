<?php 

function menu_magic_extra($value) {
	$content = [
      '#type' => 'markup',
      '#markup' => '<p>' . t('The value. %value', array('%value' => $value)) . '</p>',
	];

	return $content;	
}