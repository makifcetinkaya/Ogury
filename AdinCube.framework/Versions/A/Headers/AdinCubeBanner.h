/*!
 @header AdinCubeBanner
 @copyright AdinCube 2016
 */
#import <UIKit/UIKit.h>

#import "AdinCubeBannerView.h"

/*!
 @abstract Utility class to manage banner ads.
 */
@interface AdinCubeBanner : NSObject

/*!
 @abstract Create a new banner view to display banner ads of the given size.
 @param bannerSize Size of the banner ads that should be displayed inside the view.
 @param rootViewController View controller on which this banner will be displayed.
 @return an AdinCubeBannerView
 */
- (nullable AdinCubeBannerView*)createView:(AdinCubeBannerSize)bannerSize rootViewController:(nonnull UIViewController*)rootViewController;

/*!
 @abstract Load a banner ad inside the given banner view.
 @param bannerView View to load.
 
 @discussion
 If the banner view is attached to the view hierarchy, the banner ad will be automatically be displayed once loaded.
 Otherwise, it will be displayed once the banner view is attached.
 */
- (void)load:(nonnull AdinCubeBannerView*)bannerView;

/*!
 @abstract Check if a banner ad is loaded.
 @param bannerView View to check.
 @param
 */
- (BOOL)isLoaded:(nonnull AdinCubeBannerView*)bannerView;

/*!
 @abstract Set a delegate to the banner view to be notified of banner events provided by the SDK (ad loaded, etc.).
 @param delegate Delegate.
 @param bannerView View to listen.
 */
- (void)setDelegate:(nonnull id<AdinCubeBannerDelegate>)delegate forBannerView:(nonnull AdinCubeBannerView*)bannerView;

/*!
 @abstract Network currently displayed in the banner view.
 */
- (nullable NSString*)network:(nonnull AdinCubeBannerView*)bannerView;

/*!
 @abstract Network expected to be displayed when the banner view become visible.
 */
- (nullable NSString*)expectedNetwork:(nonnull AdinCubeBannerView*)bannerView;

/*!
 @abstract Expected height of the banner.
 */
- (nullable NSNumber*)expectedHeight:(nonnull AdinCubeBannerView*)bannerView;

/*!
 @abstract Expected width of the banner.
 */
- (nullable NSNumber*)expectedWidth:(nonnull AdinCubeBannerView*)bannerView;

@end
