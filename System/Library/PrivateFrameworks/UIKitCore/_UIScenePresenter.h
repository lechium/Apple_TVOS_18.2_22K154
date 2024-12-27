//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBScene, NSHashTable, NSString, UIScenePresentationContext, UIView, _UIScenePresentationView, _UIScenePresenterOwner;
@protocol NSCopying, NSCopying><_UIComparable, UIScenePresentation;

__attribute__((visibility("hidden")))
@interface _UIScenePresenter : NSObject
{
    _UIScenePresenterOwner *_owner;	// 8 = 0x8
    UIScenePresentationContext *_presentationContext;	// 16 = 0x10
    double _initializeTime;	// 24 = 0x18
    id <NSCopying><_UIComparable> _sortContext;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    _Bool _invalidated;	// 48 = 0x30
    _Bool _visibilityPropagationEnabled;	// 49 = 0x31
    _UIScenePresentationView *_view;	// 56 = 0x38
    NSHashTable *_observers;	// 64 = 0x40
    _Bool _hosting;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000a132c1
@property(nonatomic, getter=isVisibilityPropagationEnabled) _Bool visibilityPropagationEnabled; // @synthesize visibilityPropagationEnabled=_visibilityPropagationEnabled;
@property(readonly, nonatomic, getter=isHosting) _Bool hosting; // @synthesize hosting=_hosting;
@property(readonly, copy, nonatomic) UIScenePresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(readonly, copy, nonatomic) id <NSCopying> sortContext; // @synthesize sortContext=_sortContext;
@property(nonatomic) double _initializeTime; // @synthesize _initializeTime;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000a1326a
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000a1321a
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000a1316c
- (id)succinctDescription;	// IMP=0x0000000000a1311c
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
- (id)newSnapshotPresentationView;	// IMP=0x0000000000a1300f
- (id)newSnapshotContext;	// IMP=0x0000000000a12efe
- (id)newSnapshot;	// IMP=0x0000000000a12e6c
- (void)modifyPresentationContext:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a12aec
- (_Bool)_isHosting;	// IMP=0x0000000000a12aa7
- (void)updateHostingStateIfNecessary;	// IMP=0x0000000000a1282f
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) __weak FBScene *scene;
- (void)invalidate;	// IMP=0x0000000000a1270b
- (void)deactivate;	// IMP=0x0000000000a12689
- (void)activate;	// IMP=0x0000000000a12653
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000a125e0
- (void)addObserver:(id)arg1;	// IMP=0x0000000000a124ef
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (long long)compare:(id)arg1;	// IMP=0x0000000000a1243f
- (void)dealloc;	// IMP=0x0000000000a12398
- (id)initWithOwner:(id)arg1 identifier:(id)arg2 sortContext:(id)arg3;	// IMP=0x0000000000a12263
- (id)init;	// IMP=0x0000000000a121ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=isActive) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

