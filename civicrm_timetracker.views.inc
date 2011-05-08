<?php 


function civicrm_timetracker_views_data() {

  $data['civicrm_case'] = array(
    'table' => array(
      'group' => 'CiviCRM Case',
      'title' => 'civicrm_case',
      'join' => array(
        'node' => array(
          'left_table' => 'content_type_project',
          'left_field' => 'field_project_value',
          'field' => 'id',        
         ),
      ),
    ),
    'status_id' => array(
      'title' => t('Status CiviCRM Case'),
      'help' => t('Status of the case in civicrm'), 
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
    ),
  );
// already defined
/*  $data['content_type_issue']['join']['node'] = array(
     'left_field' => 'nid',
     'field' => 'nid',
  
  );
*/
  $data['civicrm_activity'] = array(
    'table' => array(
/*      'group' => 'CiviCRM Activities',*/
      'title' => 'civicrm_activity',
      'join' => array(
        'node' => array(
          'table' => 'civicrm_activity',
          'left_table' => 'content_type_issue',
          'left_field' => 'field_activity_value',
          'field' => 'id',        
         ),
      ),
    ),
/*    'status_id' => array(
      'title' => t('Status CiviCRM'),
      'help' => t('Status from the activity in civicrm'), 
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
    ),
*/
  );
  return $data;  
}

