<?php
/**
 * @file
 * CU Search admin page for setting up the Search block attributes
 */

/**
 * Admin form.
 */
function cu_search_admin($form, &$form_state) {
 
  $form['cu_search_google_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Google CSE Key'),
    '#default_value' => variable_get('cu_search_google_key', '')
  );

  $form['cu_search_short_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Site short name'),
    '#default_value' => variable_get('cu_search_short_name', 'This site')
  );
 
  return system_settings_form($form);
}