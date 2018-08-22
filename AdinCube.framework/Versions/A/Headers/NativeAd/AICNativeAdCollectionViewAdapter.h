#import <UIKit/UIKit.h>

#import "AICNativeAdWrapperLoadingPool.h"
#import "AICNativeAdStreamPositions.h"

#define AIC_COLLECTION_VIEW_AD_INDEX_PATH [NSIndexPath indexPathForItem:-9 inSection:-9]

@interface AICNativeAdCollectionViewAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (strong) UIViewController* viewController;

@property (strong) AICNativeAdWrapperLoadingPool* loadingPool;
@property (strong) AICNativeAdStreamPositions* positions;

@property (strong) Class nativeAdCellClass;

@property (weak) id<UICollectionViewDataSource> dataSource;
@property (weak) id<UICollectionViewDelegate> delegate;
@property (weak) id<UICollectionViewDelegateFlowLayout> flowLayoutDelegate;

@property CGSize nativeAdItemSize;

- (void)configureCollectionView:(UICollectionView*)collectionView;

- (void)refreshAds;

- (void)refreshAllAds;

- (NSIndexPath*)adjustedIndexPathForOriginalIndexPath:(NSIndexPath*)indexPath;
- (NSIndexPath*)originalIndexPathForAdjustedIndexPath:(NSIndexPath*)indexPath;

- (void)destroy;

#pragma mark - "UICollectionView replacement methods and properties"

- (__kindof UICollectionViewCell*)dequeueReusableCellWithReuseIdentifier:(NSString*)identifier forIndexPath:(NSIndexPath*)indexPath;
- (__kindof UICollectionReusableView*)dequeueReusableSupplementaryViewOfKind:(NSString*)elementKind withReuseIdentifier:(NSString*)identifier forIndexPath:(NSIndexPath*)indexPath;

@property (nonatomic, readonly) NSArray* indexPathsForSelectedItems;

- (void)selectItemAtIndexPath:(NSIndexPath*)indexPath animated:(BOOL)animated scrollPosition:(UICollectionViewScrollPosition)scrollPosition;
- (void)deselectItemAtIndexPath:(NSIndexPath*)indexPath animated:(BOOL)animated;

- (UICollectionViewTransitionLayout*)startInteractiveTransitionToCollectionViewLayout:(UICollectionViewLayout*)layout completion:(UICollectionViewLayoutInteractiveTransitionCompletion)completion;

@property (nonatomic, readonly) NSInteger numberOfSections;
- (NSInteger)numberOfItemsInSection:(NSInteger)section;

- (UICollectionViewLayoutAttributes*)layoutAttributesForItemAtIndexPath:(NSIndexPath*)indexPath;
- (UICollectionViewLayoutAttributes*)layoutAttributesForSupplementaryElementOfKind:(NSString*)kind atIndexPath:(NSIndexPath*)indexPath;

- (NSIndexPath*)indexPathForItemAtPoint:(CGPoint)point;
- (NSIndexPath*)indexPathForCell:(UICollectionViewCell*)cell;

- (UICollectionViewCell*)cellForItemAtIndexPath:(NSIndexPath*)indexPath;
@property (nonatomic, readonly) NSArray* visibleCells;
@property (nonatomic, readonly) NSArray* indexPathsForVisibleItems;

- (UICollectionReusableView*)supplementaryViewForElementKind:(NSString*)elementKind atIndexPath:(NSIndexPath*)indexPath;
- (NSArray*)visibleSupplementaryViewsOfKind:(NSString*)elementKind;
- (NSArray*)indexPathsForVisibleSupplementaryElementsOfKind:(NSString*)elementKind;

- (void)scrollToItemAtIndexPath:(NSIndexPath*)indexPath atScrollPosition:(UICollectionViewScrollPosition)scrollPosition animated:(BOOL)animated;

- (void)insertSections:(NSIndexSet*)sections;
- (void)deleteSections:(NSIndexSet*)sections;
- (void)reloadSections:(NSIndexSet*)sections;
- (void)moveSection:(NSInteger)section toSection:(NSInteger)newSection;

- (void)insertItemsAtIndexPaths:(NSArray*)indexPaths;
- (void)deleteItemsAtIndexPaths:(NSArray*)indexPaths;
- (void)reloadItemsAtIndexPaths:(NSArray*)indexPaths;
- (void)moveItemAtIndexPath:(NSIndexPath*)indexPath toIndexPath:(NSIndexPath*)newIndexPath;

- (BOOL)beginInteractiveMovementForItemAtIndexPath:(NSIndexPath*)indexPath;

@end
