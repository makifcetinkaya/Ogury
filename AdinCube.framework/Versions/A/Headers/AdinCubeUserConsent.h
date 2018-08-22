#import <UIKit/UIKit.h>

#import "AdinCubeUserConsentDelegate.h"

/*!
 @abstract Utility class to manage user consent.
 */
@interface AdinCubeUserConsent : NSObject

/*!
 @abstract User consent event delegate (accept, decline, ...).
 */
@property (weak, nullable) id<AdinCubeUserConsentDelegate> delegate;

/*!
 @abstract Ask its consent to the user and pass it to all networks.
 It will only display the consent screen, if it is applicable and has not been given yet.
 
 @param rootViewController View controller currently on screen.
 */
- (void)ask:(nonnull UIViewController*)rootViewController;

/*!
 @abstract Pass a positive consent to all networks.
 */
- (void)setAccepted;

/*!
 @abstract Pass a negative consent to all networks.
 */
- (void)setDeclined;

@end
