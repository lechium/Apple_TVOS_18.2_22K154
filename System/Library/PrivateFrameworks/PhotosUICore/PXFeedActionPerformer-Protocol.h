//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, NSUndoManager, PXSectionedDataSource, PXSectionedObjectReference, PXSelectionSnapshot, UIViewController;

@protocol PXFeedActionPerformer <NSObject>

@optional
- (void)deleteItemsInSelection:(PXSelectionSnapshot *)arg1 undoManager:(NSUndoManager *)arg2;
- (_Bool)navigateToObjectReference:(PXSectionedObjectReference *)arg1 originalSource:(NSString *)arg2 fromViewController:(UIViewController *)arg3 animated:(_Bool)arg4 willPresentHandler:(void (^)(UIViewController *))arg5 completionHandler:(void (^)(UIViewController *))arg6;
- (_Bool)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(PXSectionedDataSource *)arg2 fromViewController:(UIViewController *)arg3;
@end

