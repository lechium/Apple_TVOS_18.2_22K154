//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDThreadNetworkStatusReporter : NSObject
{
    unsigned long long _threadNetworkPeriodicCheckFrequencyInMins;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x001000000024a998
- (void).cxx_destruct;	// IMP=0x000000000024a7c2
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) unsigned long long threadNetworkPeriodicCheckFrequencyInMins; // @synthesize threadNetworkPeriodicCheckFrequencyInMins=_threadNetworkPeriodicCheckFrequencyInMins;
- (void)_checkIfThreadNetworkIsRunningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000024a5e7
- (void)_runThreadNetworkStatusPeriodicUpdate;	// IMP=0x000000000024a242
- (void)_scheduleThreadNetworkStatusPeriodicUpdate;	// IMP=0x000000000024a04e
- (void)run;	// IMP=0x0000000000249fc8
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000249ee9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

