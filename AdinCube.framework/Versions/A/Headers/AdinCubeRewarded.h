/*!
 @header AdinCubeInterstitial
 @copyright AdinCube
 */
#import <UIKit/UIKit.h>

#import "AdinCubeRewardedDelegate.h"

/*!
 @abstract Utility class to manage rewarded ads.
 */
@interface AdinCubeRewarded : NSObject

/*!
 @abstract Rewarded event delegate (complete, click...).
 */
@property (weak, nonatomic, nullable) id<AdinCubeRewardedDelegate> delegate;

/*!
 @abstract Network having displayed the last rewarded ad.
 */
@property (strong, readonly, nullable) NSString* lastDisplayedNetwork;

/*!
 @abstract Network expected to display the next interstitial ad.
 */
@property (strong, readonly, nullable) NSString* nextExpectedNetwork;

/*!
 @abstract Fetch a rewarded ad.
 @discussion
 Rewarded ads are not automatically fetched.
 */
- (void)fetch;

/*!
 @abstract Check if the SDK can show a rewarded ad.
 @return true if the SDK can show a rewarded ad.
 */
- (BOOL)isReady;

/*!
 @abstract Show a rewarded ad.
 @param rootViewController View controller currently on screen.
 */
- (void)show:(nonnull UIViewController*)rootViewController;

@end
