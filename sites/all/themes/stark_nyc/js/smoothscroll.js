(function ($) {
  Drupal.behaviors.smoothscroll = {
    attach: function(context, settings) {

    // smooth scrolling to hashes in comments etc
    $(document).ready(function(){
      $(function() {
        $('a[href*=#]:not([href=#])').click(function() {
          if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
            var target = $(this.hash);
            target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
            if (target.length) {
              $('html,body').animate({
                scrollTop: target.offset().top - 81
              }, 500);
              return false;
            }
          }
        });
      });
    });

  }}
})(jQuery);