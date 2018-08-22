#import <UIKit/UIKit.h>

#import "AICNativeAdWrapper.h"

#import "../AdinCubeAdChoicesView.h"
#import "../AdinCubeNativeAdMediaView.h"

@protocol AICNativeAdViewBinding <NSObject>

- (nonnull UILabel*)nativeAdTitleLabel;

- (nonnull UIView*)nativeAdCallToActionLabelOrButton;

@optional

- (nonnull UILabel*)nativeAdTextLabel;

- (nonnull UILabel*)nativeAdRatingLabel;

- (nonnull UIImageView*)nativeAdIconImageView;

- (nonnull UIImageView*)nativeAdCoverImageView;

- (nonnull AdinCubeNativeAdMediaView*)nativeAdMediaView;

- (nonnull AdinCubeAdChoicesView*) nativeAdAdChoicesView;

- (void)didFillViewsWithNativeAd:(nonnull AICNativeAdWrapper*)nativeAdWrapper;

+ (nonnull UINib*)nativeAdNib;

@end
