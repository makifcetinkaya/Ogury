/*!
 @header AdinCubeNativeAd
 @copyright AdinCube
 */
#import <Foundation/Foundation.h>

@class AdinCubeNativeAdImage;

/*!
 @abstract Representation of a native ad
 */
@interface AdinCubeNativeAd : NSObject

/*!
 @abstract Title
 @discussion
 Must always be displayed.
 */
@property (retain, readonly, nonnull) NSString* title;

/*!
 @abstract Call to action.
 @discussion
 Must always be displayed.
 */
@property (retain, readonly, nonnull) NSString* callToAction;

/*!
 @abstract Description.
 */
@property (retain, readonly, nullable) NSString* text;

/*!
 @abstract Small square image.
 */
@property (retain, readonly, nullable) AdinCubeNativeAdImage* icon;

/*!
 @abstract Bigger image.
 */
@property (retain, readonly, nullable) AdinCubeNativeAdImage* cover;

/*!
 @abstract Rating of the application on the AppStore
 */
@property (retain, readonly, nullable) NSNumber* rating;

/*!
 @abstract Network.
 */
@property (retain, readonly, nonnull) NSString* network;

@end

typedef enum {
    AdinCubeNativeAdImageTypeIcon,
    AdinCubeNativeAdImageTypeCover
} AdinCubeNativeAdImageType;

/*!
 @abstract Representation of an image.
 */
@interface AdinCubeNativeAdImage : NSObject

/*!
 @abstract Url of the image.
 */
@property (retain, readonly, nonnull) NSURL* url;

/*!
 @abstract Width of the image in pixels.
 */
@property (readonly, nullable) NSNumber* width;

/*!
 @abstract Height of the image in pixels.
 */
@property (readonly, nullable) NSNumber* height;

/*!
 @abstract Type of the image.
 */
@property (readonly) AdinCubeNativeAdImageType type;

@end
