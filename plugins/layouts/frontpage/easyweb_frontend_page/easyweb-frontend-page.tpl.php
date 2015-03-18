<div <?php if (!empty($css_id)) { print ' id="$css_id"'; } ?> class="frontpage-layout">

  <?php if (!empty($content['top'])): ?>
    <div class="primary-content">
      <?php print $content['top']; ?>
    </div>
  <?php endif ?>

  <div class="layout-wrapper">
    <?php if (!empty($content['top_left'])): ?>
      <div class="tertiary-content-left">
        <?php print $content['top_left']; ?>
      </div>
    <?php endif ?>

    <?php if (!empty($content['top_right'])): ?>
      <div class="secondary-content-right">
        <?php print $content['top_right']; ?>
      </div>
    <?php endif ?>
  </div>

  <?php if (!empty($content['middle'])): ?>
    <div class="primary-content">
      <?php print $content['middle']; ?>
    </div>
  <?php endif ?>

  <div class="layout-wrapper">
    <?php if (!empty($content['bottom_medium_right'])): ?>
      <div class="half-page-content">
        <?php print $content['bottom_medium_right']; ?>
      </div>
    <?php endif ?>
      <div class="inner-front-wrapper">
      <?php if (!empty($content['bottom_left_small'])): ?>
        <div class="quarter-content-left">
          <?php print $content['bottom_left_small']; ?>
        </div>
      <?php endif ?>

      <?php if (!empty($content['bottom_right_small'])): ?>
        <div class="quarter-content">
          <?php print $content['bottom_right_small']; ?>
        </div>
      <?php endif ?>
	</div>
  </div>
 
</div>
