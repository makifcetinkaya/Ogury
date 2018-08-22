/*!
 @header AdinCubeErrors
 @abstract Declare all error codes that can be returned by didFail callbacks.
 @copyright AdinCube
 */
#import <Foundation/Foundation.h>

/*!
 @defined AIC_UNSUPPORTED_OS_VERSION
 @abstract The SDK didn't detect any network connection to use.
 */
#define AIC_UNSUPPORTED_OS_VERSION @"UNSUPPORTED_OS_VERSION"

/*!
 @defined AIC_VIEW_CONTROLLER_PARAMETER_IS_NIL
 @abstract The view controller parameter given is nil. Provide a valid view controller.
 */
#define AIC_VIEW_CONTROLLER_PARAMETER_IS_NIL @"VIEW_CONTROLLER_PARAMETER_IS_NIL"

/*!
 @defined AIC_NO_INTERNET
 @abstract The SDK didn't detect any network connection to use.
 */
#define AIC_NO_INTERNET @"NO_INTERNET"

/*!
 @defined AIC_INVALID_INTERNET
 @abstract The SDK detected a network connection but it seems that it isn't valid.
 @discussion
 You might be behind an invalid proxy, check the internet connection of your device.
*/
#define AIC_INVALID_INTERNET @"INVALID_INTERNET"

/*!
 @defined AIC_MISSING_APP_KEY
 @abstract Call [AdinCube setAppKey:] before calling any other AdinCube methods.
 */
#define AIC_MISSING_APP_KEY @"MISSING_APP_KEY"

/*!
 @defined AIC_INVALID_APP_KEY
 @abstract The app key in [AdinCube setAppKey:] call is invalid. Check it and compare it with the one in the edit page of your app.
 */
#define AIC_INVALID_APP_KEY @"INVALID_APP_KEY"

/*!
 @defined AIC_PLATFORM_MISMATCH_APP_KEY
 @abstract The app key in [AdinCube setAppKey:] call is for an Android app. Check it and compare it with the one in the edit page of your app.
 */
#define AIC_PLATFORM_MISMATCH_APP_KEY @"PLATFORM_MISMATCH_APP_KEY"

/*!
 @defined AIC_BUNDLE_ID_MISMATCH_APP_KEY
 @abstract The bundle identifier registered in AdinCube doesn't match the one of the running app. Check your Xcode project.
 */
#define AIC_BUNDLE_ID_MISMATCH_APP_KEY @"AIC_BUNDLE_ID_MISMATCH_APP_KEY"

/*!
 @defined AIC_NO_FILL 
 @abstract No ad partner has any inventory to display for the user. Check the activated networks on the edit page of your app.
*/
#define AIC_NO_FILL @"NO_FILL"

/*!
 @defined AIC_CURRENTLY_CACHING
 @abstract The SDK is currently caching ads. You might have a slow internet connection.
 @discussion
 Call initialize sooner in your app lifecycle to give more time to the SDK to cache.
 */
#define AIC_CURRENTLY_CACHING @"CURRENTLY_CACHING"

/*!
 @defined AIC_CAPPING
 @abstract Impression has been canceled because capping has been reached.
 */
#define AIC_CAPPING @"CAPPING"

/*!
 @defined AIC_AD_NETWORK_ERROR
 @abstract The network that won the impression crashed when it tried to show the ad.
 */
#define AIC_AD_NETWORK_ERROR @"AD_NETWORK_ERROR"

/*!
 @defined AIC_UNKNOWN_EXCEPTION
 @abstract Please contact us and send us the stacktrace.
 */
#define AIC_UNKNOWN_EXCEPTION @"UNKNOWN_EXCEPTION"

/*!
 @defined AIC_INTERSTITIAL_INIT_NOT_CALLED
 @abstract Call initialize before calling show:.
 */
#define AIC_INTERSTITIAL_INIT_NOT_CALLED @"INIT_NOT_CALLED"

/*!
 @defined AIC_INTERSTITIAL_SHOW_CALLED_TOO_EARLY
 @abstract Don't call show: so close to the previous call.
 */
#define AIC_INTERSTITIAL_SHOW_CALLED_TOO_EARLY @"SHOW_CALLED_TOO_EARLY"

/*!
 @defined AIC_BANNER_VIEW_TOO_SMALL
 @abstract The AdinCubeBannerView width is too small to display a banner.
 */
#define AIC_BANNER_VIEW_TOO_SMALL @"VIEW_TOO_SMALL"

#define AIC_REWARDED_INIT_NOT_CALLED @"FETCH_NOT_CALLED"

#define AIC_REWARDED_SHOW_CALLED_TOO_EARLY @"SHOW_CALLED_TOO_EARLY"

#define AIC_NATIVE_MAX_NB_AD_EXCEEDED @"MAX_NB_AD_EXCEEDED"

#define AIC_USER_CONSENT_ASK_TIMEOUT @"ASK_TIMEOUT"
