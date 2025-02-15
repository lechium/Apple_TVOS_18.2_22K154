//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface _UIDirectionalRotationLayer : CALayer
{
    struct CATransform3D _previousTransform;	// 8 = 0x8
    _Bool _counterTransformLayer;	// 136 = 0x88
    _Bool _inverseTransformLayer;	// 137 = 0x89
}

@property(nonatomic, getter=isInverseTransformLayer) _Bool inverseTransformLayer; // @synthesize inverseTransformLayer=_inverseTransformLayer;
@property(nonatomic, getter=isCounterTransformLayer) _Bool counterTransformLayer; // @synthesize counterTransformLayer=_counterTransformLayer;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000016fafd6
- (void)setTransform:(struct CATransform3D)arg1;	// IMP=0x00000000016fae82

@end

