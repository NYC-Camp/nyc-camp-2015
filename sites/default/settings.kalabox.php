<?php

if (isset($_SERVER['KALABOX']) &&  $_SERVER['KALABOX'] === 'on') { 
 
  // DB Array and some common conf 
  $databases['default']['default'] = array( 
    'driver' => 'mysql',
    'database' => 'nyc_camp_2015_kala', 
    'username' => 'root',
    'password' => 'password',
    'host' => 'localhost',
    'port' => '3306',
    'prefix' => '',
  );

  // Set some common desirable local vars  
  $conf['file_temporary_path'] = '/tmp';
  $conf['file_public_path'] = 'sites/default/files';  
  $conf['file_private_path'] = 'sites/default/files/private';  
  $conf['reroute_email_enable'] = 1;  
  $conf['cache'] = 0;  
  $conf['css_gzip_compression'] = FALSE;  
  $conf['js_gzip_compression'] = FALSE;  

}