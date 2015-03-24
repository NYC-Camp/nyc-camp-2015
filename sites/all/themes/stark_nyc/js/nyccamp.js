// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth

(function ($, Drupal) {

  // /* Responsive videos */
  // Drupal.behaviors.fitVids = {
  //   attach: function(context) {
  //     $(document).ready(function(){
  //       // Target your .container, .wrapper, .post, etc.
  //       $(".page-wrapper").fitVids();
  //     });
  //   }
  // };


  // Your JavaScript code goes here:


	$(document).ready(function() {

		// Check if Firefox browser and add class to html.
	  if ($.browser.mozilla) { $('html').addClass('mozilla'); }

    // Target your .container, .wrapper, .post, etc.
    // $(".promo-caption-wrapper").fitText();
    // $("#main").fitVids();

	});


})(jQuery, Drupal);