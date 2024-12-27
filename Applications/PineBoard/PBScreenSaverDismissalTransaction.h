//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class FBSceneSnapshot, PBScreenSaverContentPresentingViewController, PBWorkspace;
@protocol BSInvalidatable;

@interface PBScreenSaverDismissalTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    _Bool _shouldUpdateWallpaper;	// 9 = 0x9
    _Bool _shouldApplyStartValues;	// 10 = 0xa
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
    FBSceneSnapshot *_sceneSnapshot;	// 24 = 0x18
    PBWorkspace *_workspace;	// 32 = 0x20
    CDStruct_090c3085 _context;	// 40 = 0x28
    id <BSInvalidatable> _workspaceTransitionLock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000015af2d
@property(readonly, nonatomic) id <BSInvalidatable> workspaceTransitionLock; // @synthesize workspaceTransitionLock=_workspaceTransitionLock;
@property(readonly, nonatomic) CDStruct_090c3085 context; // @synthesize context=_context;
- (_Bool);	// IMP=0x001000000015aef5
@property(readonly, nonatomic) _Bool shouldUpdateWallpaper; // @synthesize shouldUpdateWallpaper=_shouldUpdateWallpaper;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) PBWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, nonatomic) FBSceneSnapshot *sceneSnapshot; // @synthesize sceneSnapshot=_sceneSnapshot;
@property(readonly, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
- (id)_createScreenshotTransaction;	// IMP=0x001000000015ae4c
- (void)_prepareKioskAnimationInTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000015a9f3
- (id)_defaultAppAnimationTransactionWithSplitViewActive:(_Bool)arg1;	// IMP=0x001000000015a953
- (id)_defaultAppAnimationTransaction;	// IMP=0x001000000015a92e
- (void)_didComplete;	// IMP=0x001000000015a8cf
- (void)_didFinishWork;	// IMP=0x001000000015a885
- (void)_begin;	// IMP=0x001000000015a47b
- (_Bool)_canBeInterrupted;	// IMP=0x001000000015a473
- (id)initWithScreenSaverViewController:(id)arg1 sceneSnapshot:(id)arg2 workspace:(id)arg3 animated:(_Bool)arg4 updateWallpaper:(_Bool)arg5 applyStartValues:(_Bool)arg6;	// IMP=0x001000000015a37e

// Remaining properties
@property(readonly, nonatomic) _Bool shouldApplyStartValues; // @synthesize shouldApplyStartValues=_shouldApplyStartValues;

@end

