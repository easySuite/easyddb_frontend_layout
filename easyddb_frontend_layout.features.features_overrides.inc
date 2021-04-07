<?php
/**
 * @file
 * easyddb_frontend_layout.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function easyddb_frontend_layout_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|collection_list|settings|image_style"] = 'ting_cover_small';
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|collection_primary|settings|image_style"] = 'ting_cover_medium';
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|paragraphs_teaser|settings"] = array(
    'image_style' => 'ding_list_medium',
    'link_type' => 'object',
  );
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|reference_teaser"] = array(
    'label' => 'hidden',
    'module' => 'ting_covers',
    'settings' => array(
      'image_style' => 'ting_cover_medium',
      'link_type' => 'object',
    ),
    'type' => 'ting_cover_default',
    'weight' => 1,
  );
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|search_result|settings|image_style"] = 'ting_cover_small';
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|teaser_no_overlay"] = array(
    'label' => 'hidden',
    'module' => 'ting_covers',
    'type' => 'ting_cover_default',
    'weight' => 0,
  );
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|user_list"] = array(
    'label' => 'hidden',
    'module' => 'ting_covers',
    'settings' => array(
      'image_style' => 'ting_cover_mini',
      'link_type' => 'object',
    ),
    'type' => 'ting_cover_default',
    'weight' => 0,
  );

  return $overrides;
}
