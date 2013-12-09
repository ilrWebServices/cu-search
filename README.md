# Cornell University Drupal Search Module

This repository provides the basic functionality for a custom Drupal module that you can add to your Drupal project to place the CU Search block in the header of your site, which then integrates with Google CSE and has the basic styles as requested in the [Cornell Brand Book](https://cornellbrand.cornell.edu/logobanners.php).

As of September 2013, the only option that has been implemented in this custom module is "Search form for both your unit and all of cornell.edu".

## Installation and Configuration
  1. [Download](https://github.com/ilrWebServices/cu-search/archive/master.zip) this module and add it to your custom modules folder.
  2. Enable the module (from the modules interface, or with `drush en cu_search`)
  3. Log into your Drupal admin, click "configuration", and choose "CU Search Settings".
  4. Add your Google CSE key and site short name
  5. Go to the [block configuration page](/admin/structure/block) and add the "Cornell Search" block to the header region.
  6. Modify the base stylesheet ('cu_search.css'), adjusting your site styles to conform to the brand book guidelines.

Created by [ILR Web Services](http://www.ilr.cornell.edu)
