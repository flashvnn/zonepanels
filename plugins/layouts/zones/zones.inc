<?php
/**
 * Created by PhpStorm.
 * User: ZM
 * Date: 24/9/2014
 * Time: 6:44 PM
 */
/**
 * Implements hook_panels_layouts().
 */

// Plugin definition
$plugin = array(
  'title' => t('ZONES'),
  'category' => t('ZONES'),
  'icon' => 'zones.png',
  'theme' => 'zones',
  'admin css' => 'zones-layouts-admin.css',
  'regions' => array(
    'zone_1_1' => t('ZONE-1 Z1'),
    'zone_1_2' => t('ZONE-1 Z2'),
    'zone_1_3' => t('ZONE-1 Z3'),
    'zone_1_4' => t('ZONE-1 Z4'),
    'zone_1_5' => t('ZONE-1 Z5'),
    'zone_1_6' => t('ZONE-1 Z6'),
    //
    'zone_2_1' => t('ZONE-2 Z1'),
    'zone_2_2' => t('ZONE-2 Z2'),
    'zone_2_3' => t('ZONE-2 Z3'),
    'zone_2_4' => t('ZONE-2 Z4'),
    'zone_2_5' => t('ZONE-2 Z5'),
    'zone_2_6' => t('ZONE-2 Z6'),
    //
    'zone_3_1' => t('ZONE-3 Z1'),
    'zone_3_2' => t('ZONE-3 Z2'),
    'zone_3_3' => t('ZONE-3 Z3'),
    'zone_3_4' => t('ZONE-3 Z4'),
    'zone_3_5' => t('ZONE-3 Z5'),
    'zone_3_6' => t('ZONE-3 Z6'),
    //
    'zone_4_1' => t('ZONE-4 Z1'),
    'zone_4_2' => t('ZONE-4 Z2'),
    'zone_4_3' => t('ZONE-4 Z3'),
    'zone_4_4' => t('ZONE-4 Z4'),
    'zone_4_5' => t('ZONE-4 Z5'),
    'zone_4_6' => t('ZONE-4 Z6'),
    //
    'zone_5_1' => t('ZONE-5 Z1'),
    'zone_5_2' => t('ZONE-5 Z2'),
    'zone_5_3' => t('ZONE-5 Z3'),
    'zone_5_4' => t('ZONE-5 Z4'),
    'zone_5_5' => t('ZONE-5 Z5'),
    'zone_5_6' => t('ZONE-5 Z6'),
    //
    'zone_6_1' => t('ZONE-6 Z1'),
    'zone_6_2' => t('ZONE-6 Z2'),
    'zone_6_3' => t('ZONE-6 Z3'),
    'zone_6_4' => t('ZONE-6 Z4'),
    'zone_6_5' => t('ZONE-6 Z5'),
    'zone_6_6' => t('ZONE-6 Z6'),

  ),
);


/**
 * Preprocess zone panels layout.
 *
 */
function template_preprocess_zones(&$variables){
  if(!isset($variables['display']->layout_settings['zonepanels'])){
    $variables['display']->layout_settings['zonepanels'] = zonepanels_default_panels_config();
  }

  if ($variables['renderer']->admin) {
    $variables['admin_panels'] = TRUE;
  }
  else {
    $variables['admin_panels'] = FALSE;
    $variables['panel_prefix'] = $variables['display']->layout_settings['zonepanels']['wrapper']['prefix'];
    $variables['panel_suffix'] = $variables['display']->layout_settings['zonepanels']['wrapper']['suffix'];
  }
}
