<?php
/**
 * @file
 * amir_crm_contacts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amir_crm_contacts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function amir_crm_contacts_node_info() {
  $items = array(
    'applicant' => array(
      'name' => t('Applicant'),
      'base' => 'node_content',
      'description' => t('Use <i>Applicant</i> to add applicants to the system.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
    'client' => array(
      'name' => t('Client'),
      'base' => 'node_content',
      'description' => t('Use <i>Client</i> to add new clients related to a company to the system.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
    'company' => array(
      'name' => t('Company'),
      'base' => 'node_content',
      'description' => t('Use <i>Company</i> to add companies to the system.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'consultant' => array(
      'name' => t('Consultant'),
      'base' => 'node_content',
      'description' => t('Use <i>Consultant</i> to add new consultant to the system.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
    'contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => t('Use <i>Contacts</i> to add main specifications of each individual (including Consultant, Applicant or Client).'),
      'has_title' => '1',
      'title_label' => t('Surname'),
      'help' => '',
    ),
    'interview' => array(
      'name' => t('Interview'),
      'base' => 'node_content',
      'description' => t('Use <i>Interview</i> to initiate and manage interviews.'),
      'has_title' => '1',
      'title_label' => t('Reference'),
      'help' => '',
    ),
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Use <i>Job</i> to post New Job.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
    'sector' => array(
      'name' => t('Sector'),
      'base' => 'node_content',
      'description' => t('Use <i>Sector</i> to clarify your company\'s sectors.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
