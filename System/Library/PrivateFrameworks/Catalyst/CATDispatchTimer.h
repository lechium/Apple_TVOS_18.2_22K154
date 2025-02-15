//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CATDispatchTimer : NSObject
{
    NSString *mIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mDelegateQueue;	// 24 = 0x18
    double mTimeInterval;	// 32 = 0x20
    unsigned long long mTotalFires;	// 40 = 0x28
    _Bool mFiresForever;	// 48 = 0x30
    CDUnknownBlockType mFireHandler;	// 56 = 0x38
    NSObject<OS_dispatch_source> *mTimerSource;	// 64 = 0x40
    unsigned long long mFireCount;	// 72 = 0x48
}

+ (id)scheduledTimerWithIdentifier:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 timeInterval:(double)arg4 totalFires:(unsigned long long)arg5 firesForever:(_Bool)arg6 fireHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000382a1
- (void).cxx_destruct;	// IMP=0x00000000000387cf
- (void)reset;	// IMP=0x000000000003870d
- (void)invalidate;	// IMP=0x000000000003863b
- (void)timerDidFire;	// IMP=0x00000000000384d2
- (void)resume;	// IMP=0x000000000003837e
- (id)initWithIdentifier:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 timeInterval:(double)arg4 totalFires:(unsigned long long)arg5 firesForever:(_Bool)arg6 fireHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000038187
- (void)dealloc;	// IMP=0x000000000003814d

@end

