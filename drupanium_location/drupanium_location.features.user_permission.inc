<?php
/**
 * @file
 * drupanium_location.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupanium_location_user_default_permissions() {
  $permissions = array();

  // Exported permission: create location content
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any location content
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(),
  );

  // Exported permission: delete own location content
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any location content
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(),
  );

  // Exported permission: edit own location content
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
