//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIFoundation/NSObject-Protocol.h>

@class PXScrollViewController;
@protocol UICoordinateSpace;

@protocol PXScrollViewControllerObserver <NSObject>

@optional
- (void)scrollViewControllerDidEndFocusFastScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidBeginFocusFastScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidEndScrollingAnimation:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(PXScrollViewController *)arg1 towardsContentEdges:(unsigned long long)arg2;
- (_Bool)scrollViewControllerShouldScrollToTop:(PXScrollViewController *)arg1;
- (void)scrollViewControllerContentInsetDidChange:(PXScrollViewController *)arg1;
- (void)scrollViewControllerContentBoundsDidChange:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidEndScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillEndScrolling:(PXScrollViewController *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3 currentContentOffset:(struct CGPoint)arg4;
- (void)scrollViewControllerDidScroll:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillBeginScrolling:(PXScrollViewController *)arg1;
- (_Bool)scrollViewController:(PXScrollViewController *)arg1 shouldBeginScrollingWithPanAtLocation:(struct CGPoint)arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3 velocity:(struct CGPoint)arg4;
- (void)scrollViewControllerDidLayoutSubviews:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(PXScrollViewController *)arg1;
@end

