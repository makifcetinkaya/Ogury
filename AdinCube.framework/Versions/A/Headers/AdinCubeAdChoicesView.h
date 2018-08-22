#import <UIKit/UIKit.h>

#import "AdinCubeNativeAd.h"

@interface AdinCubeAdChoicesView : UIView

@property (retain, nonatomic, nullable) AdinCubeNativeAd* nativeAd;

- (nonnull)init;

- (nonnull id)initWithFrame:(CGRect)frame;

- (nullable id)initWithCoder:(nonnull NSCoder*)code;

@end
