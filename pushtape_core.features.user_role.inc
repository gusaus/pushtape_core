<?php
/**
 * @file
 * pushtape_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pushtape_core_user_default_roles() {
  $roles = array();

  // Exported role: designer.
  $roles['designer'] = array(
    'name' => 'designer',
    'weight' => 2,
    'machine_name' => '',
  );

  return $roles;
}
