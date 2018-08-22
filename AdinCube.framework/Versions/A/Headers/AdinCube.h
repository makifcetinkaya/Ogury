/*!
 @framework AdinCube
 @abstract Smarter ad mediation for mobile apps
 @frameworkcopyright AdinCube
 */

#import <Foundation/Foundation.h>

#import "AdinCubeInterstitial.h"
#import "AdinCubeBanner.h"
#import "AdinCubeRewarded.h"
#import "AdinCubeNative.h"
#import "AdinCubeUserConsent.h"
#import "AdinCubeUserInfo.h"

/*!
 @abstract Main class giving access to AdinCube SDK features.
 */
@interface AdinCube : NSObject

/*!
 @abstract Set the app key.
 @param appKey App key generated for this application.
 @discussion
 To get your app key, register your application on your dashboard.
 App key must be set before calling any other method in AdinCube SDK.
 */
+ (void)setAppKey:(NSString*)appKey;

/*!
 @abstract Utility object to manage interstitial ads.
 */
+ (AdinCubeInterstitial*)Interstitial;

/*!
 @abstract Utility object to manage banner ads.
 */
+ (AdinCubeBanner*)Banner;

/*!
 @abstract Utility object to manage rewarded ads.
 */
+ (AdinCubeRewarded*)Rewarded;

/*!
 @abstract Utility object to manage native ads.
 */
+ (AdinCubeNative*)Native;

/*!
 @abstract Utility object to collect/manage user consent.
 */
+ (AdinCubeUserConsent*)UserConsent;

/*!
 @abstract Utility object to give information about the user.
 */
+ (AdinCubeUserInfo*)UserInfo;

/*!
 @abstract Version of AdinCube SDK.
*/
+ (NSString*)sdkVersion;

/*!
 @abstract Type of AdinCube SDK.
 */
+ (NSString*)sdkType;

@end
