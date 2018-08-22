#import <UIKit/UIKit.h>

#import "AICNativeAdWrapperLoadingPool.h"
#import "AICNativeAdStreamPositions.h"

@interface AICNativeAdTableViewAdapter : NSObject <UITableViewDataSource, UITableViewDelegate>

@property (strong) UIViewController* viewController;

@property (strong) AICNativeAdWrapperLoadingPool* loadingPool;
@property (strong) AICNativeAdStreamPositions* positions;

@property (strong) Class nativeAdCellClass;

@property (weak) id<UITableViewDataSource> dataSource;
@property (weak) id<UITableViewDelegate> delegate;

@property CGFloat rowHeight;
@property CGFloat nativeAdRowHeight;

@property UITableViewRowAnimation insertNativeAdRowAnimation;
@property UITableViewRowAnimation removeNativeAdRowAnimation;

- (void)configureTableView:(UITableView*)tableView;

- (void)refreshAds;

- (void)refreshAllAds;

- (NSIndexPath*)adjustedIndexPathForOriginalIndexPath:(NSIndexPath*)indexPath;
- (NSIndexPath*)originalIndexPathForAdjustedIndexPath:(NSIndexPath*)indexPath;

- (void)destroy;

#pragma mark - "UITableView replacement methods and properties"

- (UITableViewCell*)dequeueReusableCellWithIdentifier:(NSString*)identifier forIndexPath:(NSIndexPath*)indexPath;

- (UITableViewCell*)cellForRowAtIndexPath:(NSIndexPath*)indexPath;

- (NSIndexPath*)indexPathForCell:(UITableViewCell*)cell;

- (NSIndexPath*)indexPathForRowAtPoint:(CGPoint)point;

- (NSArray*)indexPathsForRowsInRect:(CGRect)rect;

@property (nonatomic, readonly) NSArray<UITableViewCell*>* visibleCells;

@property (nonatomic, readonly) NSArray<NSIndexPath*>* indexPathsForVisibleRows;

- (void)scrollToRowAtIndexPath:(NSIndexPath*)contentIndexPath atScrollPosition:(UITableViewScrollPosition)scrollPosition animated:(BOOL)animated;

@property (nonatomic, readonly) NSIndexPath* indexPathForSelectedRow;

@property (nonatomic, readonly) NSArray<NSIndexPath*>* indexPathsForSelectedRows;

- (void)selectRowAtIndexPath:(NSIndexPath*)indexPath animated:(BOOL)animated scrollPosition:(UITableViewScrollPosition)scrollPosition;

- (void)deselectRowAtIndexPath:(NSIndexPath*)indexPath animated:(BOOL)animated;

- (void)beginUpdates;

- (void)endUpdates;

- (void)insertRowsAtIndexPaths:(NSArray*)indexPath withRowAnimation:(UITableViewRowAnimation)animation;

- (void)deleteRowsAtIndexPaths:(NSArray*)indexPath withRowAnimation:(UITableViewRowAnimation)animation;

- (void)moveRowAtIndexPath:(NSIndexPath*)indexPath toIndexPath:(NSIndexPath*)newContentIndexPath;

- (void)reloadRowsAtIndexPaths:(NSArray<NSIndexPath*>*)contentIndexPaths withRowAnimation:(UITableViewRowAnimation)animation;

- (CGRect)rectForRowAtIndexPath:(NSIndexPath*)indexPath;

@end
