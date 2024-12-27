//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFTimer, NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDXPCMessageCountTracker : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
    NSMutableDictionary *_acceptedRequests;	// 24 = 0x18
    NSMutableDictionary *_erroredRequests;	// 32 = 0x20
    NSMutableDictionary *_sentNotifications;	// 40 = 0x28
    HMFTimer *_submissionTimer;	// 48 = 0x30
    NSDate *_lastResetDate;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000005493e9
+ (id)sharedTracker;	// IMP=0x00100000005493b9
- (void).cxx_destruct;	// IMP=0x00000000005492f1
@property(copy) NSDate *lastResetDate; // @synthesize lastResetDate=_lastResetDate;
@property(readonly) HMFTimer *submissionTimer; // @synthesize submissionTimer=_submissionTimer;
@property(readonly) NSMutableDictionary *sentNotifications; // @synthesize sentNotifications=_sentNotifications;
@property(readonly) NSMutableDictionary *erroredRequests; // @synthesize erroredRequests=_erroredRequests;
@property(readonly) NSMutableDictionary *acceptedRequests; // @synthesize acceptedRequests=_acceptedRequests;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005491f9
@property(readonly, copy) NSDictionary *stateDump;
- (void)submitCounters;	// IMP=0x0000000000548a3a
- (id)sampleCountersAndReset:(_Bool)arg1;	// IMP=0x000000000054887d
- (void)incrementCounterOfType:(long long)arg1 clientIdentifier:(id)arg2 messageName:(id)arg3;	// IMP=0x0000000000548704
- (id)countersOfType:(long long)arg1;	// IMP=0x000000000054867f
- (id)mutableCountersOfType:(long long)arg1;	// IMP=0x0000000000548627
- (void)_resetCounters;	// IMP=0x0000000000548541
- (void)configure;	// IMP=0x00000000005484bd
- (id)initWithLogEventSubmitter:(id)arg1 submissionTimer:(id)arg2;	// IMP=0x000000000054838d
- (id)init;	// IMP=0x000000000054827e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

