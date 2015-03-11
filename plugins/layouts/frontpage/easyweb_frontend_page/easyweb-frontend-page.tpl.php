<div class="panel-display omega-grid omega-12-mainpage-standard" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-12">
    <div class="panel-panel grid-12 wide-panel alpha omega">
      <div class="inside"><?php print $content['top']; ?></div>
    </div>
  </div>
  <div class="panel-panel grid-12">
    <div class="panel-panel grid-4 alpha">
      <div class="inside"><?php print $content['top_left']; ?></div>
    </div>
    <div class="panel-panel grid-8 omega">
      <div class="inside"><?php print $content['top_right']; ?></div>
    </div>
  </div>
  <div class="panel-panel grid-12">
    <div class="panel-panel grid-12 wide-panel alpha omega">
      <div class="inside"><?php print $content['middle']; ?></div>
    </div>
  </div>
  <div class="panel-panel grid-12">
    <div class="panel-panel grid-6 alpha">
      <div class="inside"><?php print $content['bottom_medium_right']; ?></div>
    </div>
    <div class="panel-panel grid-3">
      <div class="inside"><?php print $content['bottom_left_small']; ?></div>
    </div>
    <div class="panel-panel grid-3 omega">
      <div class="inside"><?php print $content['bottom_right_small']; ?></div>
    </div>
  </div>
</div>
