#import <Foundation/Foundation.h>

#import "AdinCubeNativeAd.h"

@interface AdinCubeNativeLoadingPool : NSObject

- (void)initialize;

- (void)get:(void(^)(AdinCubeNativeAd*))callback;

- (void)get:(void(^)(AdinCubeNativeAd*))callback error:(void(^)(NSString*))callback;

@end
