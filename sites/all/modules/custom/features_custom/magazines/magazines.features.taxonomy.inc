<?php
/**
 * @file
 * magazines.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function magazines_taxonomy_default_vocabularies() {
  return array(
    'magazine_type' => array(
      'name' => 'Magazine Type',
      'machine_name' => 'magazine_type',
      'description' => 'Type of Magazines',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
