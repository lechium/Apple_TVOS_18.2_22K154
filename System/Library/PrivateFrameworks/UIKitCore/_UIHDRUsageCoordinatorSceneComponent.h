//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIScene, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIHDRUsageCoordinatorSceneComponent : NSObject
{
    struct {
        unsigned int isAttachedToWindowScene:1;
        unsigned int canUpdateTraitOverrides:1;
        unsigned int sceneHasScreen:1;
        unsigned int isActive:1;
        unsigned int isOccludedByOtherApp:1;
        unsigned int isOccludedBySystemApp:1;
    } _flags;	// 8 = 0x8
    UIScene *_scene;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000028a9ea
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;	// IMP=0x000000000028a986
- (void)_setSystemOcclusionRects:(id)arg1;	// IMP=0x000000000028a914
- (void)_setApplicationOcclusionRects:(id)arg1;	// IMP=0x000000000028a1b6
- (void)_powerStateDidChange:(id)arg1;	// IMP=0x000000000028a0f9
- (void)_invalidateTraitOverrides;	// IMP=0x000000000028a0b8
@property(readonly, nonatomic) UITraitCollection *_traitOverrides;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITraitCollection",?,R,N

- (id)_settingsDiffActionsForScene:(id)arg1;	// IMP=0x0000000000289faf
- (void)dealloc;	// IMP=0x0000000000289f2d
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000289d97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

