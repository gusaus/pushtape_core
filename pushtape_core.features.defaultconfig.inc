<?php
/**
 * @file
 * pushtape_core.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function pushtape_core_defaultconfig_features() {
  return array(
    'pushtape_core' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function pushtape_core_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer panelizer node album content'.
  $permissions['administer panelizer node album content'] = array(
    'name' => 'administer panelizer node album content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node album layout'.
  $permissions['administer panelizer node album layout'] = array(
    'name' => 'administer panelizer node album layout',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event content'.
  $permissions['administer panelizer node event content'] = array(
    'name' => 'administer panelizer node event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event layout'.
  $permissions['administer panelizer node event layout'] = array(
    'name' => 'administer panelizer node event layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news content'.
  $permissions['administer panelizer node news content'] = array(
    'name' => 'administer panelizer node news content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news layout'.
  $permissions['administer panelizer node news layout'] = array(
    'name' => 'administer panelizer node news layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node photoset content'.
  $permissions['administer panelizer node photoset content'] = array(
    'name' => 'administer panelizer node photoset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node photoset layout'.
  $permissions['administer panelizer node photoset layout'] = array(
    'name' => 'administer panelizer node photoset layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node track content'.
  $permissions['administer panelizer node track content'] = array(
    'name' => 'administer panelizer node track content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node track layout'.
  $permissions['administer panelizer node track layout'] = array(
    'name' => 'administer panelizer node track layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node video content'.
  $permissions['administer panelizer node video content'] = array(
    'name' => 'administer panelizer node video content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node video layout'.
  $permissions['administer panelizer node video layout'] = array(
    'name' => 'administer panelizer node video layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  return $permissions;
}
