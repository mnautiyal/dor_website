<?php
/**
 * @file
 * cmf_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cmf_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:node/21
  $menu_links['main-menu_about-us:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'alter' => TRUE,
      'node_type' => 'page',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_about-us:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_acts:acts
  $menu_links['main-menu_acts:acts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'acts',
    'router_path' => 'acts',
    'link_title' => 'Acts',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_acts:acts',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_advisories:taxonomy/term/2255
  $menu_links['main-menu_advisories:taxonomy/term/2255'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2255',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Advisories',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_advisories:taxonomy/term/2255',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_documents:documents',
  );
  // Exported menu link: main-menu_appellate-authority:node/15
  $menu_links['main-menu_appellate-authority:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Appellate Authority',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_appellate-authority:node/15',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_rti:node/15',
  );
  // Exported menu link: main-menu_budget:taxonomy/term/2251
  $menu_links['main-menu_budget:taxonomy/term/2251'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2251',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Budget',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_budget:taxonomy/term/2251',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_documents:documents',
  );
  // Exported menu link: main-menu_circulars:circulars
  $menu_links['main-menu_circulars:circulars'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'circulars',
    'router_path' => 'circulars',
    'link_title' => 'Circulars',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_circulars:circulars',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_citizen-charter:taxonomy/term/2252
  $menu_links['main-menu_citizen-charter:taxonomy/term/2252'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2252',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Citizen Charter',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_citizen-charter:taxonomy/term/2252',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_documents:documents',
  );
  // Exported menu link: main-menu_contacts:node/27
  $menu_links['main-menu_contacts:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Contacts',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contacts:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_documents:documents
  $menu_links['main-menu_documents:documents'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents',
    'router_path' => 'documents',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_documents:documents',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_downloadable:taxonomy/term/2275
  $menu_links['main-menu_downloadable:taxonomy/term/2275'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2275',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Downloadable',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_downloadable:taxonomy/term/2275',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forms:forms',
  );
  // Exported menu link: main-menu_former-minister:about-us/former-minister
  $menu_links['main-menu_former-minister:about-us/former-minister'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about-us/former-minister',
    'router_path' => 'about-us/former-minister',
    'link_title' => 'Former Minister',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_former-minister:about-us/former-minister',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/21',
  );
  // Exported menu link: main-menu_forms:forms
  $menu_links['main-menu_forms:forms'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forms',
    'router_path' => 'forms',
    'link_title' => 'Forms',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_forms:forms',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_guidelines:taxonomy/term/2249
  $menu_links['main-menu_guidelines:taxonomy/term/2249'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2249',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Guidelines',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_guidelines:taxonomy/term/2249',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_documents:documents',
  );
  // Exported menu link: main-menu_history:node/103
  $menu_links['main-menu_history:node/103'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/103',
    'router_path' => 'node/%',
    'link_title' => 'History',
    'options' => array(
      'alter' => TRUE,
      'node_type' => 'page',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_history:node/103',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/21',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_lodge-your-complaint:node/35
  $menu_links['main-menu_lodge-your-complaint:node/35'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Lodge Your Complaint',
    'options' => array(
      'node_type' => 'rti',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_lodge-your-complaint:node/35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_rti:node/15',
  );
  // Exported menu link: main-menu_lok-sabha:taxonomy/term/2
  $menu_links['main-menu_lok-sabha:taxonomy/term/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Lok Sabha',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_lok-sabha:taxonomy/term/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_parliament-qa:parliament-qa',
  );
  // Exported menu link: main-menu_manuals:taxonomy/term/2254
  $menu_links['main-menu_manuals:taxonomy/term/2254'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2254',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Manuals',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_manuals:taxonomy/term/2254',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_documents:documents',
  );
  // Exported menu link: main-menu_meet-the-minister:about-us/meet-the-minister
  $menu_links['main-menu_meet-the-minister:about-us/meet-the-minister'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about-us/meet-the-minister',
    'router_path' => 'about-us/meet-the-minister',
    'link_title' => 'Meet The Minister',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_meet-the-minister:about-us/meet-the-minister',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/21',
  );
  // Exported menu link: main-menu_mission--objectives:node/106
  $menu_links['main-menu_mission--objectives:node/106'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/106',
    'router_path' => 'node/%',
    'link_title' => 'Mission & Objectives',
    'options' => array(
      'alter' => TRUE,
      'node_type' => 'page',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_mission--objectives:node/106',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/21',
  );
  // Exported menu link: main-menu_online:taxonomy/term/2274
  $menu_links['main-menu_online:taxonomy/term/2274'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2274',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Online',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_online:taxonomy/term/2274',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forms:forms',
  );
  // Exported menu link: main-menu_organization-structure:node/104
  $menu_links['main-menu_organization-structure:node/104'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/104',
    'router_path' => 'node/%',
    'link_title' => 'Organization Structure',
    'options' => array(
      'alter' => TRUE,
      'node_type' => 'page',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_organization-structure:node/104',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/21',
  );
  // Exported menu link: main-menu_parliament-qa:parliament-qa
  $menu_links['main-menu_parliament-qa:parliament-qa'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'parliament-qa',
    'router_path' => 'parliament-qa',
    'link_title' => 'Parliament Q&A',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_parliament-qa:parliament-qa',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_past-circulars:past/circulars
  $menu_links['main-menu_past-circulars:past/circulars'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'past/circulars',
    'router_path' => 'past/circulars',
    'link_title' => 'Past Circulars',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_past-circulars:past/circulars',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_circulars:circulars',
  );
  // Exported menu link: main-menu_policy-documents:taxonomy/term/2250
  $menu_links['main-menu_policy-documents:taxonomy/term/2250'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2250',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Policy Documents',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_policy-documents:taxonomy/term/2250',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_documents:documents',
  );
  // Exported menu link: main-menu_proactive-disclosure:node/22
  $menu_links['main-menu_proactive-disclosure:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Proactive Disclosure',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_proactive-disclosure:node/22',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_rti:node/15',
  );
  // Exported menu link: main-menu_rajya-sabha:taxonomy/term/1
  $menu_links['main-menu_rajya-sabha:taxonomy/term/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Rajya Sabha',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_rajya-sabha:taxonomy/term/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_parliament-qa:parliament-qa',
  );
  // Exported menu link: main-menu_reports:taxonomy/term/2248
  $menu_links['main-menu_reports:taxonomy/term/2248'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2248',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_reports:taxonomy/term/2248',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_documents:documents',
  );
  // Exported menu link: main-menu_rfd:taxonomy/term/2256
  $menu_links['main-menu_rfd:taxonomy/term/2256'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2256',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'RFD',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_rfd:taxonomy/term/2256',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_documents:documents',
  );
  // Exported menu link: main-menu_rti:node/15
  $menu_links['main-menu_rti:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'RTI',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'node_type' => 'rti',
      'identifier' => 'main-menu_rti:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_statistics:taxonomy/term/2253
  $menu_links['main-menu_statistics:taxonomy/term/2253'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2253',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Statistics',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_statistics:taxonomy/term/2253',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_documents:documents',
  );
  // Exported menu link: main-menu_submit-your-second-appeal:node/34
  $menu_links['main-menu_submit-your-second-appeal:node/34'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Submit Your Second Appeal',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_submit-your-second-appeal:node/34',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_rti:node/15',
  );
  // Exported menu link: main-menu_whos-who:whos-who
  $menu_links['main-menu_whos-who:whos-who'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'whos-who',
    'router_path' => 'whos-who',
    'link_title' => 'Who\'s Who',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_whos-who:whos-who',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: management_about-us:node/21
  $menu_links['management_about-us:node/21'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'management_about-us:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'management_edit:<front>',
  );
  // Exported menu link: management_accessibility-statement:node/20
  $menu_links['management_accessibility-statement:node/20'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Accessibility Statement',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'management_accessibility-statement:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'management_edit:<front>',
  );
  // Exported menu link: management_administration:admin
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: management_appearance:admin/appearance
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_appellate-authority:node/21/edit
  $menu_links['management_appellate-authority:node/21/edit'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/21/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'Appellate Authority',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'management_appellate-authority:node/21/edit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'management_edit:<front>',
  );
  // Exported menu link: management_committees:node/25/edit
  $menu_links['management_committees:node/25/edit'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/25/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'Committees',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'management_committees:node/25/edit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'management_edit:<front>',
  );
  // Exported menu link: management_configuration:admin/config
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_contact-us:node/27
  $menu_links['management_contact-us:node/27'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'management_contact-us:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'management_edit:<front>',
  );
  // Exported menu link: management_content-management:content-manage
  $menu_links['management_content-management:content-manage'] = array(
    'menu_name' => 'management',
    'link_path' => 'content-manage',
    'router_path' => 'content-manage',
    'link_title' => 'Content Management',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'query' => array(
        'title' => '',
        'type' => 'All',
      ),
      'identifier' => 'management_content-management:content-manage',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: management_content:admin/content
  $menu_links['management_content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
      'identifier' => 'management_content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_edit:<front>
  $menu_links['management_edit:<front>'] = array(
    'menu_name' => 'management',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Edit',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'management_edit:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: management_external-links:external-links
  $menu_links['management_external-links:external-links'] = array(
    'menu_name' => 'management',
    'link_path' => 'external-links',
    'router_path' => 'external-links',
    'link_title' => 'External Links',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'management_external-links:external-links',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: management_feedback-reports:node/13/webform-results/table
  $menu_links['management_feedback-reports:node/13/webform-results/table'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/13/webform-results/table',
    'router_path' => 'node/%/webform-results/table',
    'link_title' => 'Feedback Reports',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'management_feedback-reports:node/13/webform-results/table',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-content-manager-menu_about-us:node/21/edit
  $menu_links['menu-content-manager-menu_about-us:node/21/edit'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/21/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'About US',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-content-manager-menu_about-us:node/21/edit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_acts:node/add/acts
  $menu_links['menu-content-manager-menu_acts:node/add/acts'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/acts',
    'router_path' => 'node/add/acts',
    'link_title' => 'Acts',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-content-manager-menu_acts:node/add/acts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_announcement:node/add/announcement
  $menu_links['menu-content-manager-menu_announcement:node/add/announcement'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/announcement',
    'router_path' => 'node/add/announcement',
    'link_title' => 'Announcement',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-content-manager-menu_announcement:node/add/announcement',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_banner:node/add/banner
  $menu_links['menu-content-manager-menu_banner:node/add/banner'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/banner',
    'router_path' => 'node/add/banner',
    'link_title' => 'Banner',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-content-manager-menu_banner:node/add/banner',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_document:node/add/document
  $menu_links['menu-content-manager-menu_document:node/add/document'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/document',
    'router_path' => 'node/add/document',
    'link_title' => 'Document',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-content-manager-menu_document:node/add/document',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_faqs:node/add/faqs
  $menu_links['menu-content-manager-menu_faqs:node/add/faqs'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/faqs',
    'router_path' => 'node/add/faqs',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-content-manager-menu_faqs:node/add/faqs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-footer-menu_--:node/310
  $menu_links['menu-footer-menu_--:node/310'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/310',
    'router_path' => 'node/%',
    'link_title' => 'वेब सूचना प्रबंधक',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_--:node/310',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'hi',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_:node/308
  $menu_links['menu-footer-menu_:node/308'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/308',
    'router_path' => 'node/%',
    'link_title' => 'सहायता',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_:node/308',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'hi',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_:node/309
  $menu_links['menu-footer-menu_:node/309'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/309',
    'router_path' => 'node/%',
    'link_title' => 'समितियों',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_:node/309',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'hi',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact-us:node/27
  $menu_links['menu-footer-menu_contact-us:node/27'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contact-us:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_help:node/24
  $menu_links['menu-footer-menu_help:node/24'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Help',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_help:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_terms-of-use:node/311
  $menu_links['menu-footer-menu_terms-of-use:node/311'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/311',
    'router_path' => 'node/%',
    'link_title' => 'Terms of use',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_terms-of-use:node/311',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_web-information-manager:node/26
  $menu_links['menu-footer-menu_web-information-manager:node/26'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Web Information Manager',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_web-information-manager:node/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_website-policy:node/19
  $menu_links['menu-footer-menu_website-policy:node/19'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Website Policy',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_website-policy:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-home-right-menu-_program:project
  $menu_links['menu-home-right-menu-_program:project'] = array(
    'menu_name' => 'menu-home-right-menu-',
    'link_path' => 'project',
    'router_path' => 'project',
    'link_title' => 'Program',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-home-right-menu-_program:project',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-home-right-menu-_recruitment:node/14
  $menu_links['menu-home-right-menu-_recruitment:node/14'] = array(
    'menu_name' => 'menu-home-right-menu-',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Recruitment',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-home-right-menu-_recruitment:node/14',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-home-right-menu-_schemes:schemes
  $menu_links['menu-home-right-menu-_schemes:schemes'] = array(
    'menu_name' => 'menu-home-right-menu-',
    'link_path' => 'schemes',
    'router_path' => 'schemes',
    'link_title' => 'Schemes',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-home-right-menu-_schemes:schemes',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-home-right-menu-_services:services
  $menu_links['menu-home-right-menu-_services:services'] = array(
    'menu_name' => 'menu-home-right-menu-',
    'link_path' => 'services',
    'router_path' => 'services',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-home-right-menu-_services:services',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-home-right-menu-_tenders:tenders
  $menu_links['menu-home-right-menu-_tenders:tenders'] = array(
    'menu_name' => 'menu-home-right-menu-',
    'link_path' => 'tenders',
    'router_path' => 'tenders',
    'link_title' => 'Tenders',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-home-right-menu-_tenders:tenders',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_announcement:announcement
  $menu_links['menu-left-menu_announcement:announcement'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'announcement',
    'router_path' => 'announcement',
    'link_title' => 'Announcement',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-left-menu_announcement:announcement',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_documents:documents
  $menu_links['menu-left-menu_documents:documents'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'documents',
    'router_path' => 'documents',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-left-menu_documents:documents',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_event:gallery/event
  $menu_links['menu-left-menu_event:gallery/event'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'gallery/event',
    'router_path' => 'gallery',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-left-menu_event:gallery/event',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-left-menu_gallery:gallery',
  );
  // Exported menu link: menu-left-menu_latest-announcement:announcement
  $menu_links['menu-left-menu_latest-announcement:announcement'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'announcement',
    'router_path' => 'announcement',
    'link_title' => 'Latest Announcement',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-left-menu_latest-announcement:announcement',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-left-menu_announcement:announcement',
  );
  // Exported menu link: menu-left-menu_past-announcement:past/announcement
  $menu_links['menu-left-menu_past-announcement:past/announcement'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'past/announcement',
    'router_path' => 'past/announcement',
    'link_title' => 'Past Announcement',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-left-menu_past-announcement:past/announcement',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-left-menu_announcement:announcement',
  );
  // Exported menu link: menu-left-menu_press-release:press-release
  $menu_links['menu-left-menu_press-release:press-release'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'press-release',
    'router_path' => 'press-release',
    'link_title' => 'Press Release',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-left-menu_press-release:press-release',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_program:project
  $menu_links['menu-left-menu_program:project'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'project',
    'router_path' => 'project',
    'link_title' => 'Program',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-left-menu_program:project',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_related-links:node/37
  $menu_links['menu-left-menu_related-links:node/37'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'Related links',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-left-menu_related-links:node/37',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_schemes:schemes
  $menu_links['menu-left-menu_schemes:schemes'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'schemes',
    'router_path' => 'schemes',
    'link_title' => 'Schemes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-left-menu_schemes:schemes',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_services:services
  $menu_links['menu-left-menu_services:services'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'services',
    'router_path' => 'services',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-left-menu_services:services',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_tenders:tenders
  $menu_links['menu-left-menu_tenders:tenders'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'tenders',
    'router_path' => 'tenders',
    'link_title' => 'Tenders',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-left-menu_tenders:tenders',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_webcast:webcast
  $menu_links['menu-left-menu_webcast:webcast'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'webcast',
    'router_path' => 'webcast',
    'link_title' => 'Webcast',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-left-menu_webcast:webcast',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_whos-who:whos-who
  $menu_links['menu-left-menu_whos-who:whos-who'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'whos-who',
    'router_path' => 'whos-who',
    'link_title' => 'Who\'s Who',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-left-menu_whos-who:whos-who',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About US');
  t('About Us');
  t('Accessibility Statement');
  t('Acts');
  t('Administration');
  t('Advisories');
  t('Announcement');
  t('Appearance');
  t('Appellate Authority');
  t('Banner');
  t('Budget');
  t('Circulars');
  t('Citizen Charter');
  t('Committees');
  t('Configuration');
  t('Contact Us');
  t('Contact us');
  t('Contacts');
  t('Content');
  t('Content Management');
  t('Document');
  t('Documents');
  t('Downloadable');
  t('Edit');
  t('Event');
  t('External Links');
  t('FAQs');
  t('Feedback Reports');
  t('Former Minister');
  t('Forms');
  t('Guidelines');
  t('Help');
  t('History');
  t('Home');
  t('Latest Announcement');
  t('Lodge Your Complaint');
  t('Lok Sabha');
  t('Manuals');
  t('Meet The Minister');
  t('Mission & Objectives');
  t('Online');
  t('Organization Structure');
  t('Parliament Q&A');
  t('Past Announcement');
  t('Past Circulars');
  t('Policy Documents');
  t('Press Release');
  t('Proactive Disclosure');
  t('Program');
  t('RFD');
  t('RTI');
  t('Rajya Sabha');
  t('Recruitment');
  t('Related links');
  t('Reports');
  t('Schemes');
  t('Services');
  t('Statistics');
  t('Submit Your Second Appeal');
  t('Tenders');
  t('Terms of use');
  t('Web Information Manager');
  t('Webcast');
  t('Website Policy');
  t('Who\'s Who');
  t('वेब सूचना प्रबंधक');
  t('समितियों');
  t('सहायता');


  return $menu_links;
}
