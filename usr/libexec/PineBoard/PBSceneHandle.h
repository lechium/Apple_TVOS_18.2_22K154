//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSceneIdentity, FBScene, NSHashTable, NSString, UIApplicationSceneClientSettings, UIApplicationSceneSettings;

@interface PBSceneHandle : NSObject
{
    FBScene *_scene;	// 8 = 0x8
    FBSSceneIdentity *_sceneIdentity;	// 16 = 0x10
    NSString *_clientProcessBundleIdentifier;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001b51e9
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier; // @synthesize clientProcessBundleIdentifier=_clientProcessBundleIdentifier;
@property(readonly, copy, nonatomic) FBSSceneIdentity *sceneIdentity; // @synthesize sceneIdentity=_sceneIdentity;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x00100000001b4fdc
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x00100000001b4ded
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x00100000001b4bf3
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x00100000001b4aa3
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x00100000001b48ef
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;	// IMP=0x00100000001b475c
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;	// IMP=0x00100000001b45e9
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;	// IMP=0x00100000001b4476
- (void)scene:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x00100000001b4303
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x00100000001b41b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001b411a
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001b3e23
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001b3e07
- (void)addObserver:(id)arg1;	// IMP=0x00100000001b3deb
@property(readonly, nonatomic, getter=isContentReady) _Bool contentReady;
@property(readonly, nonatomic) long long contentState;
@property(readonly, nonatomic) FBScene *sceneIfExists;
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(readonly, copy, nonatomic) NSString *sceneIdentifier;
- (void)_setScene:(id)arg1;	// IMP=0x00100000001b3cdf
- (void)dealloc;	// IMP=0x00100000001b3c56
- (id)initWithScene:(id)arg1;	// IMP=0x00100000001b3b16
- (id)initWithSceneIdentity:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00100000001b3a38
- (id)_initWithScene:(id)arg1 sceneIdentity:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x00100000001b38fe
@property(readonly, nonatomic, getter=isKioskAppScene) _Bool kioskAppScene;
@property(readonly, nonatomic, getter=isDefaultKioskAppScene) _Bool defaultKioskAppScene;
@property(readonly, nonatomic) UIApplicationSceneClientSettings *uiClientSettings;
@property(readonly, nonatomic) UIApplicationSceneSettings *uiSettings;

// Remaining properties
@property(readonly) Class superclass;

@end

