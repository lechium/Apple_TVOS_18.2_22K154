//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSceneClientSettingsDiffInspector, FBSSceneIdentityToken, FBScene, NSHashTable, NSString, _UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _UISceneKeyboardProxyLayerForwardingPresentationScene : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    FBSSceneClientSettingsDiffInspector *_layersChangedClientSettingsDiffInspector;	// 16 = 0x10
    _UIScenePresenter *_prioritizedPresenter;	// 24 = 0x18
    FBSSceneIdentityToken *_keyboardOwnerIdentityToken;	// 32 = 0x20
    FBScene *_scene;	// 40 = 0x28
}

+ (_Bool)forwardsLayersToRootSystemShell;	// IMP=0x00100000017934cb
- (void).cxx_destruct;	// IMP=0x0000000001793e07
@property(readonly, nonatomic) FBSSceneIdentityToken *keyboardOwnerIdentityToken; // @synthesize keyboardOwnerIdentityToken=_keyboardOwnerIdentityToken;
- (void)dealloc;	// IMP=0x0000000001793d5e
@property(readonly, copy) NSString *description;
- (void)_updateKeyboardLayersForScene:(id)arg1;	// IMP=0x0000000001793b99
- (void)_sendDelegateDidMoveToWindow:(id)arg1;	// IMP=0x0000000001793a1f
- (void)presentationView:(id)arg1 didMoveToWindow:(id)arg2;	// IMP=0x000000000179392b
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x00000000017937c0
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000001793637
- (void)removeObserver:(id)arg1;	// IMP=0x00000000017935c4
- (void)addObserver:(id)arg1;	// IMP=0x00000000017934d3
- (id)keyboardLayers;	// IMP=0x0000000001793299
- (void)_presentationManager:(id)arg1 willPrioritizePresenter:(id)arg2;	// IMP=0x0000000001793114

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

