<?php
/**
 * @file
 * magazines.features.inc
 */

/**
 * Implements hook_views_api().
 */
function magazines_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function magazines_node_info() {
  $items = array(
    'author' => array(
      'name' => t('Author'),
      'base' => 'node_content',
      'description' => t('Use author as the content writer.'),
      'has_title' => '1',
      'title_label' => t('Author Name'),
      'help' => '',
    ),
    'magazine_details' => array(
      'name' => t('Magazine Details'),
      'base' => 'node_content',
      'description' => t('Use magazine details for articles displayed in the Magazine.'),
      'has_title' => '1',
      'title_label' => t('Magazine Name'),
      'help' => '',
    ),
    'publishing_company' => array(
      'name' => t('Publishing company'),
      'base' => 'node_content',
      'description' => t('Use publishing company to save the company details which has published the content.'),
      'has_title' => '1',
      'title_label' => t('Company Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
