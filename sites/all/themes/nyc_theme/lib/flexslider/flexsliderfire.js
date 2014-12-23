(function($) {
  $(document).ready(function() { 

  		// check to see if we aren't on a gallery page
  		if( !$('#flexslider--main').length ) {
  			// Load global slider functionality
  			$('.flexslider').flexslider({
			  animation: "fade",
			  controlNav: true,
				// There is an issue with Chrome making the images 0x0, so you need this:
			  start: function(slider){
			    $('body').removeClass('loading');
			  }
			});
  		}
		
  		// Load brand slider functionality
		$('.flexslider--brand-products').flexslider({
			animation: "slide",
			controlNav: true,
			animationLoop: false,
			itemWidth: 196,
			itemMargin: 5,
			minItems: 1,
			maxItems: 5,
			touch: true,
			controlNav: true,
			prevText: '',
			nextText: '',
			slideshow: false,
			start: function(slider){
				$('body').removeClass('loading');
				var numSlides = $(slider).find('.slides').find('li').length,
					sliderWidth = this.itemWidth*numSlides,
					$sliderContainer = $('.flexslider--brand-products'),
					self = this,
					windowWidth;
				
				$(window).on({
					resize : function() {
						windowWidth = $(window).width()
						//set width if we are less than max items
						if(numSlides < self.maxItems) {
							// update slider width
							if(windowWidth < sliderWidth) {
								$sliderContainer.css({width : 'auto'});
							} else {
								$sliderContainer.css({width : sliderWidth});
							}
						}

						// Apply mobile functionality
						if (windowWidth < 480) {
							self.itemWidth = windowWidth;
							self.itemMargin = 0;
							self.minItems = 0;
							self.maxItems = 0;
						} else {
							self.itemWidth = 196;
							self.itemMargin = 5;
							self.minItems = 1;
							self.maxItems = 5;
						}
						
					}
				});

				// Strange hack to make the slider show correct state on load -- TODO
				$(window).trigger('resize').trigger('resize').trigger('resize');
			}
		});

		// Check to see if we are on gallery page
		if(!!$('#flexslider--main')) {
			$('#flexslider--main').flexslider({
				animation: "slide",
				controlNav: false,
				animationLoop: false,
				slideshow: false,
				sync: "#flexslider--thumbnails",
				// There is an issue with Chrome making the images 0x0, so you need this:
				start: function(slider){
					$('body').removeClass('loading');
				}
			});

			$('#flexslider--thumbnails').flexslider({
				animation: "slide",
				controlNav: false,
				animationLoop: false,
				slideshow: false,
				itemWidth: 182,
				itemMargin: 10,
				asNavFor: '#flexslider--main',
				// There is an issue with Chrome making the images 0x0, so you need this:
				start: function(slider){
					$('body').removeClass('loading');
				}
			});
		}
  });
})(jQuery);


