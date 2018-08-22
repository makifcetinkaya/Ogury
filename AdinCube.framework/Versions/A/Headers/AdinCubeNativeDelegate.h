/*!
 @header AdinCubeNativeDelegate
 @copyright AdinCube
 */
#import <Foundation/Foundation.h>

#import "AdinCubeNativeAd.h"

/*!
 @abstract Provide callbacks to react to events related to native ads.
 */
@protocol AdinCubeNativeDelegate <NSObject>

/*!
 @abstract Native ads have been loaded.
 @param ads Array containing the loaded native ads.
 */
- (void)didLoadNative:(NSArray<AdinCubeNativeAd*>*)ads;

@optional

/*!
 @abstract No ad could be loaded after a load call.
 @param errorCode One of the error code defined in AdinCubeErrors.h.
 */
- (void)didFailToLoadNative:(NSString*)errorCode;

/*!
 @abstract A rewarded ad has been clicked.
 @param nativeAd Native ad that has been clicked.
 */
- (void)didClickOnNative:(AdinCubeNativeAd*)nativeAd;

@end
