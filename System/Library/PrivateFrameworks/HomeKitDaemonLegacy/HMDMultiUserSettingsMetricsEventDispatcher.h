//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDLogEventDailyScheduler, NSString, NSUUID;
@protocol HMDMultiUserSettingsMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMultiUserSettingsMetricsEventDispatcher : HMFObject
{
    id <HMDMultiUserSettingsMetricsEventDispatcherDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    HMDLogEventDailyScheduler *_dailyScheduler;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000002b1ef9
- (void).cxx_destruct;	// IMP=0x00000000002b1ea8
@property(readonly) HMDLogEventDailyScheduler *dailyScheduler; // @synthesize dailyScheduler=_dailyScheduler;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMultiUserSettingsMetricsEventDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000002b1de9
- (void)runDailyTask;	// IMP=0x00000000002b1dd7
- (void)submitMultiUserSettingsDailyEvent;	// IMP=0x00000000002b1a5b
- (void)registerForDailyMultiUserSettingsEvents;	// IMP=0x00000000002b1a0f
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;	// IMP=0x00000000002b1945

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

