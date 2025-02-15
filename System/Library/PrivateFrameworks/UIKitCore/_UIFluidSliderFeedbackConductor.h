//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFluidSliderFeedbackConductor : NSObject
{
    double _epsilon;	// 8 = 0x8
}

@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
- (void)moveToValue:(double)arg1 snappingTarget:(double)arg2 withUpdateType:(long long)arg3 atLocation:(struct CGPoint)arg4 forced:(_Bool)arg5;	// IMP=0x0000000001306114
- (id)initWithDetentCount:(unsigned long long)arg1 view:(id)arg2 indirectFeedbackPlayer:(id)arg3;	// IMP=0x0000000001306102
- (id)initWithDetentCount:(unsigned long long)arg1 coordinateSpace:(id)arg2 indirectFeedbackPlayer:(id)arg3;	// IMP=0x00000000013060d3

@end

