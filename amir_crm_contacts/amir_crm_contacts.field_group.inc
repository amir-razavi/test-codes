<?php
/**
 * @file
 * amir_crm_contacts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function amir_crm_contacts_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apdetails|node|applicant|form';
  $field_group->group_name = 'group_apdetails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'applicant';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_application_source',
      1 => 'field_employment_type',
      2 => 'field_notice_period',
      3 => 'field_availability_date',
      4 => 'field_currency',
      5 => 'field_min_basic',
      6 => 'field_current_basic',
      7 => 'field_min_package',
      8 => 'field_current_package',
      9 => 'field_rate',
      10 => 'field_rate_unit',
      11 => 'field_current_company',
      12 => 'field_applicant_sectors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-apdetails field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_apdetails|node|applicant|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_app|node|interview|default';
  $field_group->group_name = 'group_app';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'interview';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job and Applicant',
    'weight' => '6',
    'children' => array(
      0 => 'field_application_process',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Job and Applicant',
      'instance_settings' => array(
        'classes' => 'group-app field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_app|node|interview|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_client|node|job|embedded';
  $field_group->group_name = 'group_client';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'embedded';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Client',
    'weight' => '1',
    'children' => array(
      0 => 'field_client_job_proposed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Client',
      'instance_settings' => array(
        'classes' => 'group-client field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_client|node|job|embedded'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_consultant|node|job|embedded';
  $field_group->group_name = 'group_consultant';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'embedded';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Consultant',
    'weight' => '2',
    'children' => array(
      0 => 'field_main_consultant',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Consultant',
      'instance_settings' => array(
        'classes' => 'group-consultant field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_consultant|node|job|embedded'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|job|default';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description on the site',
    'weight' => '10',
    'children' => array(
      0 => 'field_job_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Description on the site',
      'instance_settings' => array(
        'classes' => 'group-description field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_description|node|job|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|job|internal';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'internal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '10',
    'children' => array(
      0 => 'field_job_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'classes' => 'group-description field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_description|node|job|internal'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|applicant|internal';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'applicant';
  $field_group->mode = 'internal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More details',
    'weight' => '4',
    'children' => array(
      0 => 'field_application_source',
      1 => 'field_employment_type',
      2 => 'field_notice_period',
      3 => 'field_availability_date',
      4 => 'field_current_company',
      5 => 'field_applicant_sectors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More details',
      'instance_settings' => array(
        'classes' => 'group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_details|node|applicant|internal'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|company|teaser';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_rebate_period',
      1 => 'field_reg_no',
      2 => 'field_vat_no',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'classes' => 'group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_details|node|company|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|job|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_position',
      1 => 'field_employment_type',
      2 => 'field_number_of_placements',
      3 => 'field_hours_per_week',
      4 => 'field_job_sector',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Job Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-details field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_details|node|job|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extras|node|job|form';
  $field_group->group_name = 'group_extras';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra Settings',
    'weight' => '15',
    'children' => array(
      0 => 'field_consulatants',
      1 => 'field_job_status',
      2 => 'field_hours_per_week',
      3 => 'field_job_sector',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Extra Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-extras field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_extras|node|job|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|job|internal';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'internal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_position',
      1 => 'field_employment_type',
      2 => 'field_consulatants',
      3 => 'field_sectors',
      4 => 'field_placements',
      5 => 'field_description_file',
      6 => 'field_hours_per_week',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More Information',
      'instance_settings' => array(
        'classes' => 'group-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_information|node|job|internal'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_locations|node|company|teaser';
  $field_group->group_name = 'group_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Locations',
    'weight' => '2',
    'children' => array(
      0 => 'field_locations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Locations',
      'instance_settings' => array(
        'classes' => 'group-locations field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_locations|node|company|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|job|internal';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'internal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '8',
    'children' => array(
      0 => 'field_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'classes' => 'group-location field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_location|node|job|internal'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_salary|node|applicant|internal';
  $field_group->group_name = 'group_salary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'applicant';
  $field_group->mode = 'internal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Salary',
    'weight' => '5',
    'children' => array(
      0 => 'field_currency',
      1 => 'field_min_basic',
      2 => 'field_current_basic',
      3 => 'field_min_package',
      4 => 'field_current_package',
      5 => 'field_rate',
      6 => 'field_rate_unit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Salary',
      'instance_settings' => array(
        'classes' => 'group-salary field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_salary|node|applicant|internal'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_salary|node|job|default';
  $field_group->group_name = 'group_salary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Salary',
    'weight' => '6',
    'children' => array(
      0 => 'field_currency',
      1 => 'field_minimum_basic',
      2 => 'field_maximum_basic',
      3 => 'field_minimum_package',
      4 => 'field_maximum_package',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Salary',
      'instance_settings' => array(
        'classes' => 'group-salary field-group-fieldset',
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_salary|node|job|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_salary|node|job|internal';
  $field_group->group_name = 'group_salary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'internal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Salary',
    'weight' => '6',
    'children' => array(
      0 => 'field_currency',
      1 => 'field_minimum_basic',
      2 => 'field_maximum_basic',
      3 => 'field_minimum_package',
      4 => 'field_maximum_package',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Salary',
      'instance_settings' => array(
        'classes' => 'group-salary field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_salary|node|job|internal'] = $field_group;

  return $export;
}
