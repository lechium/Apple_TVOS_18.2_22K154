//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewAnimationState.h"

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimationState : UIViewAnimationState
{
    double _mass;	// 264 = 0x108
    double _stiffness;	// 272 = 0x110
    double _damping;	// 280 = 0x118
    double _velocity;	// 288 = 0x120
    _Bool _allowsOverdamping;	// 296 = 0x128
}

+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5 allowsOverdamping:(_Bool)arg6;	// IMP=0x00600000016e7579
+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5;	// IMP=0x00600000016e7562
+ (void)computeDerivedSpringParameters:(double)arg1 zeta:(double)arg2 mass:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 stiffness:(double *)arg6 damping:(double *)arg7 debugging:(id *)arg8;	// IMP=0x00600000016e72bb
+ (void)computeDerivedSpringParameters:(double)arg1 zeta:(double)arg2 mass:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 stiffness:(double *)arg6 damping:(double *)arg7;	// IMP=0x00600000016e72a3
- (id)_defaultAnimationForKey:(id)arg1;	// IMP=0x00000000016e76bd
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000016e7678
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;	// IMP=0x00000000016e73c7
- (void)generateSpringPropertiesForPerceptualDuration:(double)arg1 bounce:(double)arg2 velocity:(double)arg3;	// IMP=0x00000000016e731f
- (void)generateSpringPropertiesForDuration:(double)arg1 damping:(double)arg2 velocity:(double)arg3;	// IMP=0x00000000016e72ce

@end

