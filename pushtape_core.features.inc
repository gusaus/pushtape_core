<?php
/**
 * @file
 * pushtape_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_menu_item_visibility_export_fields().
 */
function pushtape_core_menu_item_visibility_export_fields() {
  $items = array(
    'management_designer:designer' => array(
      0 => array(
        'rid' => 3,
      ),
      1 => array(
        'rid' => 4,
      ),
    ),
    'management_editor:editor' => array(
      0 => array(
        'rid' => 3,
      ),
      1 => array(
        'rid' => 5,
      ),
    ),
  );
  return $items;
}
