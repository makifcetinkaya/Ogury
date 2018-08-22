#import <UIKit/UIKit.h>

#import "../AdinCubeNativeAd.h"

@protocol AICNativeAdWrapperDelegate;

@interface AICNativeAdWrapper: NSObject

@property (retain, readonly, nonatomic, nullable) NSString* title;

@property (retain, readonly, nonatomic, nullable) NSString* callToAction;

@property (retain, readonly, nonatomic, nullable) NSString* text;

@property (retain, readonly, nonatomic, nullable) AdinCubeNativeAdImage* icon;

@property (retain, readonly, nonatomic, nullable) AdinCubeNativeAdImage* cover;

@property (retain, readonly, nonatomic, nullable) NSNumber* rating;

@property (retain, readonly, nonatomic, nullable) NSString* network;

@property BOOL safe;

@property (readonly, nonatomic) BOOL hasContent;

@property (readonly) BOOL destroyed;

- (void)linkToView:(nonnull UIView*)view andViewController:(nonnull UIViewController*)viewController;

- (void)unlink;

- (void)destroy;

- (void)registerDelegate: (nonnull id<AICNativeAdWrapperDelegate>)delegate;

- (void)unregisterDelegate: (nonnull id<AICNativeAdWrapperDelegate>)delegate;

@end

@protocol AICNativeAdWrapperDelegate <NSObject>

@optional

- (void)didLoadNative:(nonnull AICNativeAdWrapper*)wrapper;

- (void)didFailToLoadNative:(nonnull AICNativeAdWrapper*)wrapper errorCode:(nonnull NSString*)errorCode;

- (void)didClickOnNative:(nonnull AICNativeAdWrapper*)wrapper;

@end
