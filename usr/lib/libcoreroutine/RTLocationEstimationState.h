//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RTLocationEstimationState : NSObject
{
    long long i;	// 8 = 0x8
    double time;	// 16 = 0x10
    double X[2];	// 24 = 0x18
    double errPro[2];	// 40 = 0x28
    double errEst[2];	// 56 = 0x38
}

- (id)description;	// IMP=0x00000000000816ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000081650
- (void)resetIndex;	// IMP=0x0000000000081642
- (void)increaseIndex;	// IMP=0x0000000000081638
- (long long)i;	// IMP=0x000000000008162e
- (void)setTimestamp:(double)arg1;	// IMP=0x0000000000081623
- (double)timestamp;	// IMP=0x0000000000081618
- (double)estimatedAccuracy;	// IMP=0x0000000000081601
- (double)errorProWithIndex:(unsigned long long)arg1;	// IMP=0x00000000000815f5
- (double)estimateWithIndex:(unsigned long long)arg1;	// IMP=0x00000000000815e9
- (void)updatePostObservationDeltaX:(double)arg1 observationDeltaY:(double)arg2 errProX:(double)arg3 errProY:(double)arg4 sigmaX:(double)arg5 sigmaY:(double)arg6;	// IMP=0x00000000000813b0
- (void)updateObservationX:(double)arg1 observationY:(double)arg2 sigmaX:(double)arg3 sigmaY:(double)arg4;	// IMP=0x0000000000081151
- (void)updateMotionX:(double)arg1 motionY:(double)arg2 dt:(double)arg3 error:(double)arg4;	// IMP=0x000000000008101e
- (id)init;	// IMP=0x0000000000080fd4

@end

