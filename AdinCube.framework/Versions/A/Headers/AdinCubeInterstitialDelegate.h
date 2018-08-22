/*!
 @header AdinCubeInterstitialDelegate
 @copyright AdinCube
 */
#import <Foundation/Foundation.h>

/*!
 @abstract Provide callbacks to react to events related to interstitial ads.
 */
@protocol AdinCubeInterstitialDelegate <NSObject>

@optional

/*!
 @abstract An interstitial ad has been cached and is now ready to be shown
 */
- (void)didCacheInterstitial;

/*!
 @abstract An interstitial ad is shown.
 */
- (void)didShowInterstitial;

/*!
 @abstract No ad could be shown after a show call.
 @param errorCode One of the error code defined in AdinCubeErrors.h
 */
- (void)didFailToShowInterstitial:(nonnull NSString*)errorCode;

/*!
 @abstract An interstitial ad has been clicked.
 */
- (void)didClickOnInterstitial;

/*!
 @abstract An interstitial ad has been closed.
 */
- (void)didHideInterstitial;

@end
