<?php
/**
 * @file
 * easyddb_frontend_layout.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function easyddb_frontend_layout_field_default_field_instances_alter(&$data) {
  if (isset($data['ting_object-ting_object-ting_cover'])) {
    $data['ting_object-ting_object-ting_cover']['display']['collection_list']['settings']['image_style'] = 'ting_cover_small'; /* WAS: 'ding_list_medium' */
    $data['ting_object-ting_object-ting_cover']['display']['collection_primary']['settings']['image_style'] = 'ting_cover_medium'; /* WAS: 'ding_primary_large' */
    $data['ting_object-ting_object-ting_cover']['display']['paragraphs_teaser']['settings'] = array(
      'image_style' => 'ding_list_medium',
      'link_type' => 'object',
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_cover']['display']['reference_teaser'] = array(
      'label' => 'hidden',
      'module' => 'ting_covers',
      'settings' => array(
        'image_style' => 'ting_cover_medium',
        'link_type' => 'object',
      ),
      'type' => 'ting_cover_default',
      'weight' => 1,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_cover']['display']['search_result']['settings']['image_style'] = 'ting_cover_small'; /* WAS: 'ding_list_medium' */
    $data['ting_object-ting_object-ting_cover']['display']['teaser_no_overlay'] = array(
      'label' => 'hidden',
      'module' => 'ting_covers',
      'type' => 'ting_cover_default',
      'weight' => 0,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_cover']['display']['user_list'] = array(
      'label' => 'hidden',
      'module' => 'ting_covers',
      'settings' => array(
        'image_style' => 'ting_cover_mini',
        'link_type' => 'object',
      ),
      'type' => 'ting_cover_default',
      'weight' => 0,
    ); /* WAS: '' */
  }
}
