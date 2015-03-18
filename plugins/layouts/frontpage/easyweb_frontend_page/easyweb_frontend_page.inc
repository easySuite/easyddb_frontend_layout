<?php

$plugin['easyweb_frontend_page'] = array(
    'title' => t('easyDDB default layout'),
    'category'  => 'Ding2, theme',
    'icon' => 'easyweb_frontend_page.png',
    'theme' => 'easyweb_frontend_page',
    'css' => 'easyweb_frontend_page.css',
    'regions' => array(
      'top' => t('Top'),
      'top_left' => t('Top left side'),
      'top_right' => t('Top right side'),
      'middle' => t('Middle side'),
      'bottom_left_small' => t('Bottom left small side'),
      'bottom_right_small' => t('Bottom right small side'),
      'bottom_medium_right' => t('Bottom medium right side'),
    ),
    'regions_image_styles' => array(
      'top' => 'ding_nodelist_large',
      'top_left' => 'ding_nodelist_small',
      'top_right' => 'ding_nodelist_extra_medium',
      'middle' => 'ding_nodelist_large',
      'bottom_left_small' => 'ding_nodelist_mini',
      'bottom_right_small' => 'ding_nodelist_mini',
      'bottom_medium_right' => 'ding_nodelist_medium',
    ),
  );
