#import <Foundation/Foundation.h>

/*!
 @abstract Provide callbacks to react to events related to user consent.
 */
@protocol AdinCubeUserConsentDelegate <NSObject>
@optional

/*!
 @abstract User has accepted the consent.
 */
- (void)didAccept;

/*!
 @abstract User has declined the consent.
 */
- (void)didDecline;

/*!
 @abstract The consent could not be gathered from the user.
 */
- (void)didFail:(nonnull NSString*)errorCode;

@end
