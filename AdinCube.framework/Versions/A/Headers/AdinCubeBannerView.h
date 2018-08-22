/*!
 @header AdinCubeBannerView
 @copyright AdinCube
 */
#import <UIKit/UIKit.h>

#import "AdinCubeBannerDelegate.h"

/*!
 @enum Banner size
 @constant AdinCubeBannerSizeAuto Screen wide banner
 @constant AdinCubeBannerSize320x50 320x50 banner
 @constant AdinCubeBannerSize300x250 300x250 banner
 @constant AdinCubeBannerSize728x90 728x90 banner
 */
typedef enum AdinCubeBannerSize {
    AdinCubeBannerSizeAuto,
    AdinCubeBannerSize320x50,
    AdinCubeBannerSize300x250,
    AdinCubeBannerSize728x90
} AdinCubeBannerSize;

@interface AdinCubeBannerView : UIView

@property (strong, readonly, nonnull) UIViewController* rootViewController;

@property (readonly) AdinCubeBannerSize size;

@property (weak, nullable) id<AdinCubeBannerDelegate> delegate;

@property (strong, readonly, nullable) NSString* network;

@property (strong, readonly, nullable) NSString* expectedNetwork;

@property (strong, readonly, nullable) NSNumber* expectedWidth;

@property (strong, readonly, nullable) NSNumber* expectedHeight;

@property BOOL autoDestroyOnDetach;

- (nonnull id)initWithSize:(AdinCubeBannerSize)size rootViewController:(nonnull UIViewController*)rootViewController;

- (void)load;

- (BOOL)isLoaded;

- (void)destroy;

@end
