(function($){
  'use strict';

  Drupal.behaviors.easyddb_frontend_layout = {
    attach: function (context, settings) {
      var colors = settings.colors;
      $('input[name="colors_revert"]').on('click', function(e) {
        e.preventDefault();
        if (colors !== undefined) {
          $.map(colors, function(v, k){
            $('input[name="palette[' + k +']"]').val(v);
          });
        }
      });
    }
  };
})(jQuery);
