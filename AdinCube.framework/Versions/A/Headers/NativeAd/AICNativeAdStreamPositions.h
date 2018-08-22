#import <Foundation/Foundation.h>

#import "AICNativeAdStreamPositionsBuilder.h"

@interface AICNativeAdStreamPositions : NSObject

@property (retain, readonly, nonnull) NSOrderedSet* predefinedPositions;
@property (readonly) NSUInteger repeatFrequency;

+ (nonnull AICNativeAdStreamPositions*)serverConfig;

+ (nonnull AICNativeAdStreamPositionsBuilder*)newBuilder;

- (nonnull id)initWithPredefinedPositions:(nonnull NSArray<NSNumber*>*)predefinedPosition andRepeatFrequency:(NSUInteger)repeatFrequency
    DEPRECATED_MSG_ATTRIBUTE("Use [AICNativeAdStreamPositions newBuilder] to specify your native ad positions instead.");

- (nonnull id)initWithPredefinedPositions:(nonnull NSArray<NSNumber*>*)predefinedPosition
    DEPRECATED_MSG_ATTRIBUTE("Use [AICNativeAdStreamPositions newBuilder] to specify your native ad positions instead.");

- (nonnull id)initWithRepeatFrequency:(NSUInteger)repeatFrequency
    DEPRECATED_MSG_ATTRIBUTE("Use [AICNativeAdStreamPositions newBuilder] to specify your native ad positions instead.");

@end
