//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDLogEventDailyScheduler, NSString, NSUUID;
@protocol HMDCloudShareTrustManagerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject
{
    _Bool _registered;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    HMDLogEventDailyScheduler *_dailyScheduler;	// 32 = 0x20
    id <HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> _dataSource;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000000ac2e3
- (void).cxx_destruct;	// IMP=0x00000000000ac292
@property _Bool registered; // @synthesize registered=_registered;
@property(readonly) __weak id <HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDLogEventDailyScheduler *dailyScheduler; // @synthesize dailyScheduler=_dailyScheduler;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x00000000000ac1c5
- (void)runDailyTask;	// IMP=0x00000000000ac1b3
- (void)submitCloudShareTrustStatusDailyEvent;	// IMP=0x00000000000abed7
- (void)submitFailureEventWithEventErrorCode:(long long)arg1 error:(id)arg2;	// IMP=0x00000000000abe1d
- (void)submitFailureEventWithEventErrorCode:(long long)arg1;	// IMP=0x00000000000abe09
- (void)submitTrustActivityEvent:(long long)arg1;	// IMP=0x00000000000abc03
- (void)submitTrustZoneRemovedEvent;	// IMP=0x00000000000abbec
- (void)submitTrustZoneCreatedEvent;	// IMP=0x00000000000abbd8
- (void)registerForDailyTrustManagerEvents;	// IMP=0x00000000000abb8c
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3 dataSource:(id)arg4;	// IMP=0x00000000000aba92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

