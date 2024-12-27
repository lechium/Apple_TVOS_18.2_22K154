//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IdleScreenUI/NSObject-Protocol.h>

@class PXStoryView;
@protocol PXStoryViewControllerDismissalDelegate, PXStoryViewControllerNavigationItemHelper, PXStoryViewControllerShareActionDelegate, PXStoryViewEnvironmentActionDelegate;

@protocol PXStoryViewController <NSObject>
@property(retain, nonatomic) id <PXStoryViewControllerNavigationItemHelper> navigationItemHelper;
@property(nonatomic) __weak id <PXStoryViewEnvironmentActionDelegate> viewEnvironmentActionDelegate;
@property(nonatomic) __weak id <PXStoryViewControllerDismissalDelegate> dismissalDelegate;
@property(nonatomic) __weak id <PXStoryViewControllerShareActionDelegate> shareActionDelegate;
@property(retain, nonatomic) Class gridDecorationViewClass;
@property(nonatomic) _Bool remainsActiveWhileApplicationIsHidden;
@property(readonly, nonatomic) PXStoryView *storyView;
- (_Bool)prepareForPopTransition;
- (void)loadStoryViewIfNeeded;
@end

