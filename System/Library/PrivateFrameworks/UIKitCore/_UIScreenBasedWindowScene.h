//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindowScene.h"

@class NSMutableSet, UIMutableApplicationSceneSettings, UIScreen;
@protocol BSInvalidatable, NSCopying;

__attribute__((visibility("hidden")))
@interface _UIScreenBasedWindowScene : UIWindowScene
{
    id <NSCopying> _lookupKey;	// 24 = 0x18
    UIScreen *_screen;	// 32 = 0x20
    UIMutableApplicationSceneSettings *_synthesizedSettings;	// 40 = 0x28
    _Bool _invalidationEvaluatorRegistered;	// 48 = 0x30
    _Bool _needsInvalidation;	// 49 = 0x31
    id <BSInvalidatable> _screenDisconnectionPreventionAssertion;	// 56 = 0x38
    NSMutableSet *_autoInvalidationPreventionAssertions;	// 64 = 0x40
}

+ (id)_unassociatedWindowSceneForScreen:(id)arg1 create:(_Bool)arg2;	// IMP=0x00600000004a0d31
+ (id)unassociationCacheAccessQueue;	// IMP=0x00600000004a0cda
+ (id)unassociationCache;	// IMP=0x00600000004a0bc0
+ (_Bool)autoInvalidates;	// IMP=0x00600000004a0bb8
+ (_Bool)shouldAllowComponents;	// IMP=0x00600000004a0bb0
+ (_Bool)alwaysKeepContexts;	// IMP=0x00600000004a0ba8
- (void).cxx_destruct;	// IMP=0x00000000004a3266
- (void)_screenInterfaceOrientationChanged:(id)arg1;	// IMP=0x00000000004a31ac
- (void)_screenDisconnected:(id)arg1;	// IMP=0x00000000004a2f94
- (_Bool)_shouldAllowFencing;	// IMP=0x00000000004a2f8c
- (void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004a2efa
- (void)setDelegate:(id)arg1;	// IMP=0x00000000004a2ef4
- (id)_displayInfoProvider;	// IMP=0x00000000004a2ea4
- (void)_detachWindow:(id)arg1;	// IMP=0x00000000004a2d59
- (void)_attachWindow:(id)arg1;	// IMP=0x00000000004a2cda
- (id)_synthesizedSettings;	// IMP=0x00000000004a2b22
- (_Bool)_usesMinimumSafeAreaInsets;	// IMP=0x00000000004a2b1a
- (void)_setKeepContextAssociationInBackground:(_Bool)arg1;	// IMP=0x00000000004a2a7f
- (void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2;	// IMP=0x00000000004a2a62
- (struct CGRect)_referenceBoundsForOrientation:(long long)arg1;	// IMP=0x00000000004a2a24
- (struct CGRect)_referenceBounds;	// IMP=0x00000000004a29e6
- (id)screen;	// IMP=0x00000000004a29a5
- (void)_addSubclassDebugDescriptionWithBuilder:(id)arg1;	// IMP=0x00000000004a2738
- (void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)arg1;	// IMP=0x00000000004a2681
- (id)_primaryViewServiceOperator;	// IMP=0x00000000004a240d
- (void)_removeAutoInvalidationPreventionAssertion:(id)arg1;	// IMP=0x00000000004a1e15
- (void)_invalidate;	// IMP=0x00000000004a1783
- (id)initWithScreen:(id)arg1 session:(id)arg2 lookupKey:(id)arg3;	// IMP=0x00000000004a12f2
- (id)systemShellHostingEnvironment;	// IMP=0x00000000016071ed
- (id)renderingEnvironment;	// IMP=0x000000000162f8d0

@end

