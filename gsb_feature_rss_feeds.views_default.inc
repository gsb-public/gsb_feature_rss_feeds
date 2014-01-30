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
  $handler->display->display_options['pane_category']['name'] = 'Content panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
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
