#import <Foundation/Foundation.h>

@protocol AdinCubeRewardedDelegate <NSObject>

/*!
 @abstract A rewarded ad has been fully watched.
 */
- (void)didCompleteRewarded;

@optional

/*!
 @abstract A rewarded ad has been fetched and is now ready to be shown
 */
- (void)didFetchRewarded;

/*!
 @abstract No ad could be fetched after a fetch call.
 @param errorCode One of the error code defined in AdinCubeErrors.h
 */
- (void)didFailToFetchRewarded:(nonnull NSString*)errorCode;

/*!
 @abstract A rewarded ad is shown.
 */
- (void)didShowRewarded;

/*!
 @abstract No ad could be shown after a show call.
 @param errorCode One of the error code defined in AdinCubeErrors.h
 */
- (void)didFailToShowRewarded:(nonnull NSString*)errorCode;

/*!
 @abstract A rewarded ad has been clicked.
 */
- (void)didClickOnRewarded;

/*!
 @abstract A rewarded ad has been closed.
 */
- (void)didHideRewarded;

@end
