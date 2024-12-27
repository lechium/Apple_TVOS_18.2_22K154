//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBScene, NSMutableOrderedSet, NSMutableSet, NSString, UIScenePresentationContext, UIScenePresentationManager, _UISceneLayerHostContainerView, _UIScenePresenter;
@protocol _UIScenePresenterOwnerDelegate;

__attribute__((visibility("hidden")))
@interface _UIScenePresenterOwner : NSObject
{
    id _context;	// 8 = 0x8
    UIScenePresentationManager *_scenePresentationManager;	// 16 = 0x10
    _UISceneLayerHostContainerView *_realSceneHostViewsContainer;	// 24 = 0x18
    NSMutableOrderedSet *_activePresentersByPriority;	// 32 = 0x20
    NSMutableSet *_inactivePresentersByPriority;	// 40 = 0x28
    _UIScenePresenter *_prioritizedPresenter;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    id <_UIScenePresenterOwnerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000a149df
@property(nonatomic) __weak id <_UIScenePresenterOwnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
- (void)_updateHostingStateForScenePresentersIfNecessary;	// IMP=0x0000000000a1489d
- (void)_setActivePrioritizedPresenter:(id)arg1;	// IMP=0x0000000000a14504
- (void)_updateActivePrioritizedPresenterIfNecessary;	// IMP=0x0000000000a144b8
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000a14291
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000a14241
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000a14225
- (id)succinctDescription;	// IMP=0x0000000000a141d5
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0000000000a140d1
- (void)_invalidatePresenter:(id)arg1;	// IMP=0x0000000000a13f8c
- (void)_deactivatePresenter:(id)arg1;	// IMP=0x0000000000a13e9a
- (void)_activatePresenter:(id)arg1;	// IMP=0x0000000000a13cf1
- (_Bool)_isPresenterHosting:(id)arg1;	// IMP=0x0000000000a13c42
- (_Bool)_isPresenterActive:(id)arg1;	// IMP=0x0000000000a13b82
- (id)presenterWithIdentifier:(id)arg1;	// IMP=0x0000000000a137f0
- (id)activePrioritizedPresenter;	// IMP=0x0000000000a137e2
- (void)enumeratePresentersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1364d
- (void)addPresenter:(id)arg1;	// IMP=0x0000000000a13594
@property(readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext;
@property(readonly, nonatomic) __weak FBScene *scene;
- (void)dealloc;	// IMP=0x0000000000a13467
- (id)initWithScenePresentationManager:(id)arg1 context:(id)arg2;	// IMP=0x0000000000a13313

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

