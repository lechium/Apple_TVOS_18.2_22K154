//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIMotionEffectAttitudeEvent
{
    struct {
        double x;
        double y;
        double z;
        double w;
    } _attitude;	// 8 = 0x8
}

@property(readonly, nonatomic) CDStruct_d2b197d1 attitude; // @synthesize attitude=_attitude;
- (double)velocityRelativeToPreviousEvent:(id)arg1;	// IMP=0x0000000000f910b1
- (id)copyWithTimestamp:(double)arg1;	// IMP=0x0000000000f91044
- (id)initWithTimestamp:(double)arg1 attitude:(CDStruct_d2b197d1)arg2;	// IMP=0x0000000000f90ff5

@end

