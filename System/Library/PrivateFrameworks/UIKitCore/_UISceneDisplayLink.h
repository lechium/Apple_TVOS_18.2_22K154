//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneDisplayLink : NSObject
{
    NSMutableArray *_targetsAndActions;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    UIScene *_scene;	// 24 = 0x18
}

+ (id)sceneDisplayLinkForWindowScene:(id)arg1;	// IMP=0x00100000008eb77b
- (void).cxx_destruct;	// IMP=0x00000000008ec20f
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)_displayLinkTick:(id)arg1;	// IMP=0x00000000008ebe38
- (void)_updateStatus;	// IMP=0x00000000008ebc2a
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;	// IMP=0x00000000008ebc18
- (void)unregisterTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000008eb93d
- (void)registerTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000008eb87d
- (id)initWithScene:(id)arg1;	// IMP=0x00000000008eb819

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

