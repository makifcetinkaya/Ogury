#import <UIKit/UIKit.h>

#import "AdinCubeNativeAd.h"

@interface AdinCubeNativeAdMediaView : UIView

@property (retain, nonatomic, nullable) AdinCubeNativeAd* nativeAd;

@property (nonatomic) UIViewContentMode contentMode;

@property (nonatomic) BOOL autoPlay;

@property (nonatomic) BOOL startsMuted;

- (nonnull id)init;

- (nonnull id)initWithFrame:(CGRect)frame;

- (nullable id)initWithCoder:(nonnull NSCoder*)coder;

@end
