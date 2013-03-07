<?php
/**
 * @file
 * impediment_on_entry_into_the_country.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function impediment_on_entry_into_the_country_taxonomy_default_vocabularies() {
  return array(
    'bureaucratic_requirement_type' => array(
      'name' => 'Type of administrative procedure',
      'machine_name' => 'bureaucratic_requirement_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
