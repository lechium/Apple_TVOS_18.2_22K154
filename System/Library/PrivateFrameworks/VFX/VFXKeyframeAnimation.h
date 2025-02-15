//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAKeyframeAnimation.h>

@interface VFXKeyframeAnimation : CAKeyframeAnimation
{
    struct __CFXKeyframedAnimation *_cfxAnimation;	// 24 = 0x18
    _Bool _caReady;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000163518
- (_Bool)cumulative;	// IMP=0x0000000000163506
- (_Bool)isCumulative;	// IMP=0x00000000001634ba
- (void)setCumulative:(_Bool)arg1;	// IMP=0x0000000000163446
- (_Bool)additive;	// IMP=0x0000000000163434
- (_Bool)isAdditive;	// IMP=0x00000000001633e8
- (void)setAdditive:(_Bool)arg1;	// IMP=0x0000000000163374
- (id)timingFunction;	// IMP=0x0000000000163317
- (void)setTimingFunction:(id)arg1;	// IMP=0x0000000000163284
- (id)animationEvents;	// IMP=0x000000000016315c
- (void)setAnimationEvents:(id)arg1;	// IMP=0x0000000000162eec
- (id)fillMode;	// IMP=0x0000000000162e25
- (void)setFillMode:(id)arg1;	// IMP=0x0000000000162d15
- (_Bool)commitsOnCompletion;	// IMP=0x0000000000162cc9
- (void)setCommitsOnCompletion:(_Bool)arg1;	// IMP=0x0000000000162c55
- (_Bool)isRemovedOnCompletion;	// IMP=0x0000000000162c09
- (void)setRemovedOnCompletion:(_Bool)arg1;	// IMP=0x0000000000162b95
- (float)fadeOutDuration;	// IMP=0x0000000000162b49
- (void)setFadeOutDuration:(float)arg1;	// IMP=0x0000000000162ad5
- (float)fadeInDuration;	// IMP=0x0000000000162a89
- (void)setFadeInDuration:(float)arg1;	// IMP=0x0000000000162a15
- (float)speed;	// IMP=0x00000000001629c9
- (void)setSpeed:(float)arg1;	// IMP=0x0000000000162955
- (double)timeOffset;	// IMP=0x0000000000162909
- (void)setTimeOffset:(double)arg1;	// IMP=0x0000000000162895
- (_Bool)autoreverses;	// IMP=0x0000000000162849
- (void)setAutoreverses:(_Bool)arg1;	// IMP=0x00000000001627d5
- (double)repeatDuration;	// IMP=0x0000000000162787
- (void)setRepeatDuration:(double)arg1;	// IMP=0x000000000016272e
- (float)repeatCount;	// IMP=0x00000000001626e2
- (void)setRepeatCount:(float)arg1;	// IMP=0x0000000000162680
- (id)keyPath;	// IMP=0x000000000016261f
- (void)setKeyPath:(id)arg1;	// IMP=0x000000000016259c
- (double)duration;	// IMP=0x000000000016254f
- (void)setDuration:(double)arg1;	// IMP=0x00000000001624d4
- (void)setCfxAnimation:(struct __CFXKeyframedAnimation *)arg1;	// IMP=0x0000000000162482
- (struct __CFXKeyframedAnimation *)cfxAnimation;	// IMP=0x0000000000162471
- (id)description;	// IMP=0x00000000001623d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001622f5
- (void)setBiasValues:(id)arg1;	// IMP=0x000000000016229c
- (id)biasValues;	// IMP=0x000000000016224e
- (void)setContinuityValues:(id)arg1;	// IMP=0x00000000001621f5
- (id)continuityValues;	// IMP=0x00000000001621a7
- (void)setTensionValues:(id)arg1;	// IMP=0x000000000016214e
- (id)tensionValues;	// IMP=0x0000000000162100
- (void)setTimingFunctions:(id)arg1;	// IMP=0x00000000001620a7
- (id)timingFunctions;	// IMP=0x0000000000162059
- (void)setKeyTimes:(id)arg1;	// IMP=0x0000000000162000
- (id)keyTimes;	// IMP=0x0000000000161fb2
- (void)setValues:(id)arg1;	// IMP=0x0000000000161f59
- (id)values;	// IMP=0x0000000000161f0b
- (void)_clearCFXCache;	// IMP=0x0000000000161ec2
- (void)_convertToCA;	// IMP=0x0000000000161a52
- (void)dealloc;	// IMP=0x0000000000161a00

@end

