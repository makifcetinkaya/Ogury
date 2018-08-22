#import <Foundation/Foundation.h>

@class AICNativeAdStreamPositions;

@interface AICNativeAdStreamPositionsBuilder : NSObject

- (nonnull AICNativeAdStreamPositionsBuilder*)withPredefinedPositions:(nonnull NSArray<NSNumber*>*)predefinedPosition;

- (nonnull AICNativeAdStreamPositionsBuilder*)withRepeatFrequency:(NSUInteger)repeatFrequency;

- (nonnull AICNativeAdStreamPositionsBuilder*)withPredefinedPositions:(nonnull NSArray<NSNumber*>*)predefinedPosition forSection:(NSInteger)section;

- (nonnull AICNativeAdStreamPositionsBuilder*)withRepeatFrequency:(NSUInteger)repeatFrequency forSection:(NSInteger)section;

- (nonnull AICNativeAdStreamPositions*)build;

@end
