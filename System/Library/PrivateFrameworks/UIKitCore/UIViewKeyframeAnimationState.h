//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewAnimationState.h"

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIViewKeyframeAnimationState : UIViewAnimationState
{
    double _frameDuration;	// 280 = 0x118
    double _frameStartTime;	// 288 = 0x120
    long long _calculationMode;	// 296 = 0x128
    NSMutableSet *_keyframeLayers;	// 304 = 0x130
    NSMutableDictionary *_keyframeLayersForCurrentKeyFrameDict;	// 312 = 0x138
    _Bool _inFrame;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x00000000016a0b55
- (void)cleanupTrackedLayers;	// IMP=0x00000000016a0a30
- (void)pop;	// IMP=0x00000000016a04d1
- (id)_updateAnimationFrameWithAnimationProperties:(id)arg1;	// IMP=0x00000000016a0459
- (id)_createDeferredAnimationForKey:(id)arg1 ignoringKeyFrames:(_Bool)arg2;	// IMP=0x00000000016a03f9
- (void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(CDUnknownBlockType)arg3;	// IMP=0x000000000169ffdc
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;	// IMP=0x000000000169fd23
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000169fcd2
- (_Bool)_isKeyframeAnimation;	// IMP=0x000000000169fcca
- (id)init;	// IMP=0x000000000169fc6d

@end

