/*!
 @header AdinCubeInterstitial
 @copyright AdinCube
 */
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "AdinCubeInterstitialDelegate.h"

/*!
 @abstract Utility class to manage interstitial ads.
 */
@interface AdinCubeInterstitial : NSObject

/*!
 @abstract Interstitial event delegate (show, click...).
 */
@property (weak, nonatomic, nullable) id<AdinCubeInterstitialDelegate> delegate;

/*!
 @abstract Network having displayed the last interstitial ad.
 */
@property (strong, readonly, nullable) NSString* lastDisplayedNetwork;

/*!
 @abstract Network expected to display the next interstitial ad.
 */
@property (strong, readonly, nullable) NSString* nextExpectedNetwork;

/*!
 @abstract Start caching interstitial ads.
*/
- (void)initialize;

/*!
 @abstract Check if the SDK can show an interstitial ad.
 @return true if the SDK can show an interstitial ad.
 */
- (BOOL)isReady;

/*!
 @abstract Show an interstitial ad.
 @param rootViewController View controller currently on screen.
 */
- (void)show:(nonnull UIViewController*)rootViewController;

@end
