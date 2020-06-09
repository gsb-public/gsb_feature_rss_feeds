<?php
/**
 * @file
 * gsb_feature_rss_feeds.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_rss_feeds_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mba_admit_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MBA Admit Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['translate_labels'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Publication Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'published';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y-m-d',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'url';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Key Image */
  $handler->display->display_options['fields']['field_image_key_image']['id'] = 'field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image']['table'] = 'field_data_field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image']['field'] = 'field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image']['label'] = 'photo_url';
  $handler->display->display_options['fields']['field_image_key_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['alter']['text'] = '[field_image_key_image] ';
  $handler->display->display_options['fields']['field_image_key_image']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_key_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_key_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_image_key_image']['settings'] = array(
    'file_view_mode' => 'default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_image_key_image] ';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'photo_url';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'https://www.gsb.stanford.edu/sites/gsb/files/[nothing]';
  /* Field: Content: Key Image */
  $handler->display->display_options['fields']['field_image_key_image_1']['id'] = 'field_image_key_image_1';
  $handler->display->display_options['fields']['field_image_key_image_1']['table'] = 'field_data_field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image_1']['field'] = 'field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image_1']['label'] = 'photo_alt';
  $handler->display->display_options['fields']['field_image_key_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image_1']['alter']['text'] = '[field_image_key_image_1-alt]';
  $handler->display->display_options['fields']['field_image_key_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_key_image_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_image_key_image_1']['settings'] = array(
    'file_view_mode' => 'default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = 'description';
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Degree & Year */
  $handler->display->display_options['fields']['field_degree_year']['id'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['table'] = 'field_data_field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['field'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['label'] = 'degree_year';
  $handler->display->display_options['fields']['field_degree_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_year']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Keywords */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Keywords (field_tag) */
  $handler->display->display_options['arguments']['field_tag_tid']['id'] = 'field_tag_tid';
  $handler->display->display_options['arguments']['field_tag_tid']['table'] = 'field_data_field_tag';
  $handler->display->display_options['arguments']['field_tag_tid']['field'] = 'field_tag_tid';
  $handler->display->display_options['arguments']['field_tag_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tag_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'school_story' => 'school_story',
  );

  /* Display: Voices */
  $handler = $view->new_display('page', 'Voices', 'voices');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'published';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'url';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Key Image */
  $handler->display->display_options['fields']['field_image_key_image']['id'] = 'field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image']['table'] = 'field_data_field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image']['field'] = 'field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image']['label'] = 'photo_url';
  $handler->display->display_options['fields']['field_image_key_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['alter']['text'] = '[field_image_key_image] ';
  $handler->display->display_options['fields']['field_image_key_image']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_key_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_key_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_image_key_image']['settings'] = array(
    'file_view_mode' => 'default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_image_key_image] ';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'photo_url';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'https://www.gsb.stanford.edu/sites/gsb/files/[nothing]';
  /* Field: Content: Key Image */
  $handler->display->display_options['fields']['field_image_key_image_1']['id'] = 'field_image_key_image_1';
  $handler->display->display_options['fields']['field_image_key_image_1']['table'] = 'field_data_field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image_1']['field'] = 'field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image_1']['label'] = 'photo_alt';
  $handler->display->display_options['fields']['field_image_key_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image_1']['alter']['text'] = '[field_image_key_image_1-alt]';
  $handler->display->display_options['fields']['field_image_key_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_key_image_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_image_key_image_1']['settings'] = array(
    'file_view_mode' => 'default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = 'description';
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Degree & Year */
  $handler->display->display_options['fields']['field_degree_year']['id'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['table'] = 'field_data_field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['field'] = 'field_degree_year';
  $handler->display->display_options['fields']['field_degree_year']['label'] = 'degree_year';
  $handler->display->display_options['fields']['field_degree_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_degree_year']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Keywords */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices' => 'voices',
  );
  $handler->display->display_options['path'] = 'microsite/voices';

  /* Display: Clubs */
  $handler = $view->new_display('page', 'Clubs', 'clubs');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'published';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = 'description';
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'contact';
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Keywords */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'club' => 'club',
  );
  $handler->display->display_options['path'] = 'microsite/clubs';

  /* Display: School Story */
  $handler = $view->new_display('page', 'School Story', 'school_story');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: PR Contact (field_pr_contact_unlimited) */
  $handler->display->display_options['relationships']['field_pr_contact_unlimited_tid']['id'] = 'field_pr_contact_unlimited_tid';
  $handler->display->display_options['relationships']['field_pr_contact_unlimited_tid']['table'] = 'field_data_field_pr_contact_unlimited';
  $handler->display->display_options['relationships']['field_pr_contact_unlimited_tid']['field'] = 'field_pr_contact_unlimited_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Publication Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'published';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y-m-d',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'url';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Key Image */
  $handler->display->display_options['fields']['field_image_key_image']['id'] = 'field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image']['table'] = 'field_data_field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image']['field'] = 'field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image']['label'] = 'photo_url';
  $handler->display->display_options['fields']['field_image_key_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['alter']['text'] = '[field_image_key_image] ';
  $handler->display->display_options['fields']['field_image_key_image']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_key_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_key_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_image_key_image']['settings'] = array(
    'file_view_mode' => 'default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_image_key_image] ';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'photo_url';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'https://www.gsb.stanford.edu/sites/gsb/files/[nothing]';
  /* Field: Content: Key Image */
  $handler->display->display_options['fields']['field_image_key_image_1']['id'] = 'field_image_key_image_1';
  $handler->display->display_options['fields']['field_image_key_image_1']['table'] = 'field_data_field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image_1']['field'] = 'field_image_key_image';
  $handler->display->display_options['fields']['field_image_key_image_1']['label'] = 'photo_alt';
  $handler->display->display_options['fields']['field_image_key_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_key_image_1']['alter']['text'] = '[field_image_key_image_1-alt]';
  $handler->display->display_options['fields']['field_image_key_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_key_image_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_image_key_image_1']['settings'] = array(
    'file_view_mode' => 'default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Dek */
  $handler->display->display_options['fields']['field_editorial_summary']['id'] = 'field_editorial_summary';
  $handler->display->display_options['fields']['field_editorial_summary']['table'] = 'field_data_field_editorial_summary';
  $handler->display->display_options['fields']['field_editorial_summary']['field'] = 'field_editorial_summary';
  $handler->display->display_options['fields']['field_editorial_summary']['label'] = 'summary';
  $handler->display->display_options['fields']['field_editorial_summary']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = 'description';
  $handler->display->display_options['fields']['field_body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: PR Email */
  $handler->display->display_options['fields']['field_pr_contact_email']['id'] = 'field_pr_contact_email';
  $handler->display->display_options['fields']['field_pr_contact_email']['table'] = 'field_data_field_pr_contact_email';
  $handler->display->display_options['fields']['field_pr_contact_email']['field'] = 'field_pr_contact_email';
  $handler->display->display_options['fields']['field_pr_contact_email']['relationship'] = 'field_pr_contact_unlimited_tid';
  $handler->display->display_options['fields']['field_pr_contact_email']['label'] = 'contact';
  $handler->display->display_options['fields']['field_pr_contact_email']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Keywords */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'microsite/school-news';

  /* Display: Week in the Life */
  $handler = $view->new_display('page', 'Week in the Life', 'witl');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'published';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'url';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_image_single_public']['id'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['table'] = 'field_data_field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['field'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['label'] = '';
  $handler->display->display_options['fields']['field_image_single_public']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_single_public']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_image_single_public']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_image_single_public']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_single_public']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_single_public']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_image_single_public']['settings'] = array(
    'file_view_mode' => 'default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_image_single_public] ';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'photo_url';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'https://www.gsb.stanford.edu/sites/gsb/files/[nothing]';
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_image_single_public_1']['id'] = 'field_image_single_public_1';
  $handler->display->display_options['fields']['field_image_single_public_1']['table'] = 'field_data_field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public_1']['field'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public_1']['label'] = 'photo_alt';
  $handler->display->display_options['fields']['field_image_single_public_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_single_public_1']['alter']['text'] = '[field_image_single_public_1-alt]';
  $handler->display->display_options['fields']['field_image_single_public_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_single_public_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_image_single_public_1']['settings'] = array(
    'file_view_mode' => 'default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Post MBA Goals */
  $handler->display->display_options['fields']['field_witl_post_mba_goals']['id'] = 'field_witl_post_mba_goals';
  $handler->display->display_options['fields']['field_witl_post_mba_goals']['table'] = 'field_data_field_witl_post_mba_goals';
  $handler->display->display_options['fields']['field_witl_post_mba_goals']['field'] = 'field_witl_post_mba_goals';
  $handler->display->display_options['fields']['field_witl_post_mba_goals']['label'] = 'description';
  $handler->display->display_options['fields']['field_witl_post_mba_goals']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Keywords */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'week_in_the_life' => 'week_in_the_life',
  );
  $handler->display->display_options['path'] = 'microsite/witl';
  $export['mba_admit_feed'] = $view;

  $view = new view();
  $view->name = 'rss_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'xml';
  $view->human_name = 'RSS Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['xml_file'] = '%1';
  $handler->display->display_options['query']['options']['row_xpath'] = '/rss/channel/item';
  $handler->display->display_options['query']['options']['show_errors'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Link */
  $handler->display->display_options['fields']['text_1']['id'] = 'text_1';
  $handler->display->display_options['fields']['text_1']['table'] = 'xml';
  $handler->display->display_options['fields']['text_1']['field'] = 'text';
  $handler->display->display_options['fields']['text_1']['ui_name'] = 'Link';
  $handler->display->display_options['fields']['text_1']['label'] = '';
  $handler->display->display_options['fields']['text_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['text_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_1']['xpath_selector'] = 'link';
  $handler->display->display_options['fields']['text_1']['multiple'] = 0;
  /* Field: Title */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'xml';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['text']['alter']['path'] = '[text_1]';
  $handler->display->display_options['fields']['text']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['xpath_selector'] = 'title';
  $handler->display->display_options['fields']['text']['multiple'] = 0;
  /* Field: Description */
  $handler->display->display_options['fields']['text_2']['id'] = 'text_2';
  $handler->display->display_options['fields']['text_2']['table'] = 'xml';
  $handler->display->display_options['fields']['text_2']['field'] = 'text';
  $handler->display->display_options['fields']['text_2']['ui_name'] = 'Description';
  $handler->display->display_options['fields']['text_2']['label'] = '';
  $handler->display->display_options['fields']['text_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_2']['xpath_selector'] = 'description';
  $handler->display->display_options['fields']['text_2']['multiple'] = 0;
  /* Contextual filter: XML: Pass through */
  $handler->display->display_options['arguments']['passthru']['id'] = 'passthru';
  $handler->display->display_options['arguments']['passthru']['table'] = 'xml';
  $handler->display->display_options['arguments']['passthru']['field'] = 'passthru';
  $handler->display->display_options['arguments']['passthru']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['passthru']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['passthru']['default_argument_options']['argument'] = 'jacksonblog';
  $handler->display->display_options['arguments']['passthru']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['passthru']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['passthru']['summary_options']['items_per_page'] = '25';

  /* Display: RSS Feed */
  $handler = $view->new_display('panel_pane', 'RSS Feed', 'rss_feed');
  $handler->display->display_options['pane_title'] = 'RSS Feed';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'passthru' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.field_cta_action',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feed URL',
    ),
  );
  $export['rss_feed'] = $view;

  return $export;
}
