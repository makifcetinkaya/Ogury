#import <Foundation/Foundation.h>

#import "AICNativeAdWrapper.h"
#import "AICNativeAdLoadingPrioritySetter.h"

@interface AICNativeAdWrapperLoadingPool : NSObject

+ (nonnull AICNativeAdWrapperLoadingPool*)defaultLoadingPool;

- (nonnull id)initWithNbAdsToLoadForFirstBatch:(NSUInteger)nbAdsToLoadForFirstBatch andNbAdsToLoadPerBatch:(NSUInteger)nbAdsToLoadPerBatch andMinNbAdsToKeepLoaded:(NSUInteger)minNbAdsToKeepLoaded;

- (nonnull id)initWithNbAdsToLoadForFirstBatch:(NSUInteger)nbAdsToLoadForFirstBatch andNbAdsToLoadPerBatch:(NSUInteger)nbAdsToLoadPerBatch andMinNbAdsToKeepLoaded:(NSUInteger)minNbAdsToKeepLoaded andPrioritySetter:(nullable id<AICNativeAdLoadingPrioritySetter>)prioritySetter;

- (nonnull NSArray<AICNativeAdWrapper*>*)get:(NSUInteger)nbAds;

- (nullable AICNativeAdWrapper*)get;

@end
