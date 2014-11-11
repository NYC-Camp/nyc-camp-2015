# NYC Camp 2015

## System Summary
* Drops 7
  * https://github.com/pantheon-systems/drops-7
* C.O.D
  * https://www.drupal.org/project/cod
* Aurora (base theme)
    * http://snugug.github.io/Aurora/
* nyc_theme (sub-theme of Aurora)
    * generated with https://github.com/Snugug/generator-aurora/

To get first get started with the theming, you will need to do the following:

cd to the nyc_theme directory:

`npm install`

`bower install`

`bundle install`

**Warning** some of the dependencies that get installed in the node_modules and .vendor directories contain .info files,
Drupal does not like this **especially** when clearing your cache. To mitigate this run (from the nyc_theme directory):
`find ./node_modules ./.vendor -name "*.info" -delete`

Each time you want to start local development, run
`gulp server`

Every time you run gulp server, you will get new ip addresses for your js files:

```
<script src='//192.168.1.2:3000/socket.io/socket.io.js'></script>
<script>var ___socket___ = io.connect('http://192.168.1.2:3000');</script>
<script src='//192.168.1.2:3001/client/browser-sync-client.0.7.4.js'></script>
```

Copy these 3 lines and add them to the html.tpl.php, right before the closing `</body>` tag.
<h2>DO NOT COMMIT THIS CHANGE to html.tpl.php</h2>

To enable live reload:
Go to /admin/appearance/settings/nyc_theme, under Enable Livereload and select Aurora Default Port and click *Save Configuration*
