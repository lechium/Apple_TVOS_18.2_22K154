//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UICanvasUserActivityManager;

__attribute__((visibility("hidden")))
@interface _UISceneUserActivityBSActionsHandler : NSObject
{
    _UICanvasUserActivityManager *_canvasUserActivityManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000fa0538
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;	// IMP=0x0000000000fa008d
- (id)_launchOptionsFromActions:(id)arg1 forFBSScene:(id)arg2 uiSceneSession:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000000f9faf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

