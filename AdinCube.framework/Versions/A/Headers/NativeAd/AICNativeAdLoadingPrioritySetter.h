#import <Foundation/Foundation.h>

#import "AICNativeAdWrapper.h"

@protocol AICNativeAdLoadingPrioritySetter <NSObject>

- (void)setPrioritiesForNewWrappers:(nonnull NSArray<AICNativeAdWrapper*>*)newWrappers withNbAdsLoaded:(NSUInteger)nbAdLoaded andWaitingWrappers:(nonnull NSOrderedSet<AICNativeAdWrapper*>*)waitingWrappers;

@end
