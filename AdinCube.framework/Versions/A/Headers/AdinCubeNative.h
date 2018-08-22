/*!
 @header AdinCubeNative
 @copyright AdinCube
 */
#import <UIKit/UIKit.h>

#import "AdinCubeNativeDelegate.h"
#import "AdinCubeNativeLoadingPool.h"

#import "NativeAd/AICNativeAdWrapper.h"
#import "NativeAd/AICNativeAdLoadingPrioritySetter.h"
#import "NativeAd/AICNativeAdWrapperLoadingPool.h"
#import "NativeAd/AICNativeAdStreamPositions.h"
#import "NativeAd/AICNativeAdViewBinding.h"
#import "NativeAd/AICNativeAdTableViewAdapter.h"
#import "NativeAd/AICNativeAdCollectionViewAdapter.h"

/*!
 @abstract Utility class to manage native ads.
 */
@interface AdinCubeNative : NSObject

/*!
 @abstract Utility object to precache native ad.
 */
- (nonnull AdinCubeNativeLoadingPool*)LoadingPool;

/*!
 @abstract Load a native ad.
 @param delegate Delegate to notify once the ad is loaded.
 */
- (void)load:(nonnull id<AdinCubeNativeDelegate>)delegate;

/*!
 @abstract Load multiple native ad.
 @param nbAd Number of ads to load. Maximum is 5.
 @param delegate Delegate to notify once the ad is loaded.
 */
- (void)load:(NSUInteger)nbAd delegate:(nonnull id<AdinCubeNativeDelegate>)delegate;

/*!
 @abstract Enable image caching for the provided type.
 @param imageType Type of image to cache: icon or cover.
 @discussion
 If image caching is enabled, the SDK will wait for images of the provided type to be downloaded
 before calling [AdinCubeNativeDelegate didLoadNative:].
 */
- (void)enableImageCaching:(AdinCubeNativeAdImageType)imageType;

/*!
 @abstract Enable video caching.
 @discussion
 If video caching is enabled, the SDK will wait for the video to be downloaded before calling 
 [AdinCubeNativeDelegate didLoadNative:].
 */
- (void)enableVideoCaching;

/*!
 @abstract Disable image caching for the provided type.
 @param imageType Type of image to cache: icon or cover.
 */
- (void)disableImageCaching:(AdinCubeNativeAdImageType)imageType;

/*!
 @abstract Disable video caching.
 */
- (void)disableVideoCaching;

/*!
 @abstract Utility method to set an image into an UIImageView.
 @param image Image
 @param imageView Image view
 */
- (void)setImage:(nonnull AdinCubeNativeAdImage*)image inView:(nonnull UIImageView*)imageView;

/*!
 @abstract Link the native ad to a view. Once linked, the SDK handles click automatically.
 @param nativeAd Native ad to link.
 @param view View that will be clickable.
 @param rootViewController View controller that contains the view.
 @discussion
 Linking a native ad to a view is MANDATORY. Otherwise the native ad will not generate any revenue.
 */
- (void)link:(nonnull AdinCubeNativeAd*)nativeAd toView:(nonnull UIView*)view andViewController:(nonnull UIViewController*)rootViewController;

/*!
 @abstract Unlink the native ad from the previously linked view. The SDK will stop handling clicks.
 @param nativeAd Native ad to unlink.
 @discussion
 Unlink the native ad if you intend to use the linked view to display another ad.
 */
- (void)unlink:(nonnull AdinCubeNativeAd*)nativeAd;

/*!
 @abstract Release all resources consumed by the native ad.
 @param ad Native ad to destroy.
 @discussion
 Once destroyed, a native ad cannot be reused anymore.
 */
- (void)destroy:(nonnull AdinCubeNativeAd*)ad;

/*!
 @abstract Release all resources consumed by the native ads.
 @param ads An array of native ads to destroy
 @discussion
 Once destroyed, a native ad cannot be reused anymore.
 */
- (void)destroyAll:(nonnull NSArray<AdinCubeNativeAd*>*)ads;

@end
