//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewFloatAnimatableProperty.h>

__attribute__((visibility("hidden")))
@interface SFFloatSpringProperty : UIViewFloatAnimatableProperty
{
    double _dampingRatio;	// 8 = 0x8
    double _response;	// 16 = 0x10
    double _trackingDampingRatio;	// 24 = 0x18
    double _trackingResponse;	// 32 = 0x20
    _Bool _primed;	// 40 = 0x28
    _Bool _tracking;	// 41 = 0x29
}

+ (void)_withoutAnimation:(CDUnknownBlockType)arg1;	// IMP=0x001000000000de1f
@property(nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) _Bool primed; // @synthesize primed=_primed;
- (double)projectForTime:(double)arg1;	// IMP=0x000000000000ddd6
- (double)projectForDeceleration:(double)arg1;	// IMP=0x000000000000dd71
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;	// IMP=0x000000000000dd1a
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2;	// IMP=0x000000000000dcfc
- (void)setDampingRatio:(double)arg1 response:(double)arg2;	// IMP=0x000000000000dcde
@property(nonatomic) double output;
@property(nonatomic) double input;
- (id)init;	// IMP=0x000000000000d9ac

@end

