//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBScene, NSMutableDictionary, NSString, UIWindow;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UIRemoteFocusParentFBSSceneComponent
{
    UIWindow *_eventDeferringWindow;	// 8 = 0x8
    id <BSInvalidatable> _eventDeferringAssertion;	// 16 = 0x10
    FBScene *_remoteChildSceneDeferringTarget;	// 24 = 0x18
    NSMutableDictionary *_remoteFocusClientConnections;	// 32 = 0x20
    struct {
        _Bool invalidated;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000010ff474
- (void)invalidate;	// IMP=0x00000000010ff200
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x00000000010ff1ee
- (id)_identifierForChildScene:(id)arg1;	// IMP=0x00000000010ff19b
- (void)_keyWindowDidChangeNotification:(id)arg1;	// IMP=0x00000000010fefe7
- (void)_windowDidAttachContext:(id)arg1;	// IMP=0x00000000010fee69
- (void)_logError:(id)arg1;	// IMP=0x00000000010fed3a
- (void)_forceFocusOffChildSceneWithIdentifier:(id)arg1;	// IMP=0x00000000010fea2f
- (void)_endFocusEventDeferring;	// IMP=0x00000000010fe916
- (void)_beginDeferringEventsToChildSceneWithIdentifier:(id)arg1;	// IMP=0x00000000010fe800
- (void)_transferFocusToSceneWithIdentifier:(id)arg1 focusHeading:(unsigned long long)arg2 previouslyFocusedFrame:(struct CGRect)arg3;	// IMP=0x00000000010fe554
- (_Bool)_createEventDeferringAssertionForRemoteChildScene:(id)arg1;	// IMP=0x00000000010fe2af
- (void)_invalidateEventDeferringAssertionIfNecessary;	// IMP=0x00000000010fe25c
- (_Bool)_isSceneRemoteFocusParentModeEnabled;	// IMP=0x00000000010fe1f3
- (void)handleSceneIsActiveUpdate:(_Bool)arg1 shouldEnableFocusSystem:(_Bool *)arg2 overrideFocusDeferralBehavior:(id *)arg3;	// IMP=0x00000000010fe119
- (void)handleFocusUpdate:(id)arg1;	// IMP=0x00000000010fdf79
- (void)requestFocusTransferToHostFromRemoteChildScene:(id)arg1 withAction:(id)arg2;	// IMP=0x00000000010fdabc
- (void)endFocusEventDeferralToRemoteChildScene:(id)arg1;	// IMP=0x00000000010fda93
- (void)initiateFocusTransferToRemoteChildScene:(id)arg1 context:(id)arg2;	// IMP=0x00000000010fd8d4
- (_Bool)canTransferFocusToRemoteChildScene:(id)arg1;	// IMP=0x00000000010fd7ae
- (void)disconnectRemoteFocusChildScene:(id)arg1;	// IMP=0x00000000010fd6e6
- (void)connectRemoteFocusChildScene:(id)arg1 containerView:(id)arg2;	// IMP=0x00000000010fd510
- (void)dealloc;	// IMP=0x00000000010fd444
- (id)initWithScene:(id)arg1;	// IMP=0x00000000010fd32e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

