//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISlidingBarStateRequest, _UIPanelCoordinatingAnimator;

__attribute__((visibility("hidden")))
@interface _UIPanelAnimationState : NSObject
{
    _Bool _isFinishingAnimation;	// 8 = 0x8
    _Bool _shouldAssignOffscreenWidthsToStateRequest;	// 9 = 0x9
    _Bool _animatorShouldCoordinate;	// 10 = 0xa
    UISlidingBarStateRequest *_fromRequest;	// 16 = 0x10
    UISlidingBarStateRequest *_toRequest;	// 24 = 0x18
    double _progress;	// 32 = 0x20
    long long _affectedSides;	// 40 = 0x28
    _UIPanelCoordinatingAnimator *_animator;	// 48 = 0x30
}

+ (double)defaultDuration;	// IMP=0x006000000075137c
+ (id)timingCurveProviderWithVelocity:(double)arg1;	// IMP=0x006000000075133e
+ (id)timingCurveProvider;	// IMP=0x0060000000751325
- (void).cxx_destruct;	// IMP=0x0000000000751479
@property(nonatomic) _Bool animatorShouldCoordinate; // @synthesize animatorShouldCoordinate=_animatorShouldCoordinate;
@property(retain, nonatomic) _UIPanelCoordinatingAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) _Bool shouldAssignOffscreenWidthsToStateRequest; // @synthesize shouldAssignOffscreenWidthsToStateRequest=_shouldAssignOffscreenWidthsToStateRequest;
@property(nonatomic) long long affectedSides; // @synthesize affectedSides=_affectedSides;
@property(nonatomic, setter=setFinishingAnimation:) _Bool isFinishingAnimation; // @synthesize isFinishingAnimation=_isFinishingAnimation;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) UISlidingBarStateRequest *toRequest; // @synthesize toRequest=_toRequest;
@property(copy, nonatomic) UISlidingBarStateRequest *fromRequest; // @synthesize fromRequest=_fromRequest;
- (id)description;	// IMP=0x000000000075128b
@property(readonly, nonatomic) UISlidingBarStateRequest *stateRequest;

@end

