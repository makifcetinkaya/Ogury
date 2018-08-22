/*!
 @header AdinCubeBannerDelegate
 @copyright AdinCube
 */
#import <Foundation/Foundation.h>

@class AdinCubeBannerView;

/*!
 @abstract Provide callbacks to react to events related to banner ads.
 */
@protocol AdinCubeBannerDelegate <NSObject>

@optional

/*!
 @abstract A banner ad has been loaded and is now ready to be shown.
 @param bannerView Banner view that loaded the ad.
 */
- (void)didLoadBanner:(nonnull AdinCubeBannerView*)bannerView;

/*!
 @abstract No ad could be loaded after a load call.
 @param bannerView Banner view that failed to load the ad.
 @param errorCode One of the error code defined in AdinCubeErrors.h
 */
- (void)didFailToLoadBanner:(nonnull AdinCubeBannerView*)bannerView withError:(nonnull NSString*)errorCode;

/*!
 @abstract A banner ad is shown
 @param bannerView Banner view that is showing the ad.
 */
- (void)didShowBanner:(nonnull AdinCubeBannerView*)bannerView;

/*!
 @abstract No ad could be shown.
 @param bannerView Banner view that failed to show the ad.
 @param errorCode One of the error code defined in AdinCubeErrors.h
 */
- (void)didFailToShowBanner:(nonnull AdinCubeBannerView*)bannerView withError:(nonnull NSString*)errorCode;

/*!
 @abstract A banner ad has been clicked.
 @param bannerView Banner view on which the uses clicked.
 */
- (void)didClickOnBanner:(nonnull AdinCubeBannerView*)bannerView;

@end
