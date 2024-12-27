//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCounterThresholdTTRTrigger, HMDEventCounterGroup, HMDEventCountersManager, NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDCoreDataLogEventsAnalyzer
{
    HMDEventCounterGroup *_aggregationEventGroup;	// 8 = 0x8
    HMDEventCounterGroup *_cloudStoreReasonsEventGroup;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    HMDEventCountersManager *_countersManager;	// 32 = 0x20
    HMDCounterThresholdTTRTrigger *_workingStoreCommitTTRTrigger;	// 40 = 0x28
    HMDCounterThresholdTTRTrigger *_cloudKitImportCountTTRTrigger;	// 48 = 0x30
    HMDCounterThresholdTTRTrigger *_cloudKitExportCountTTRTrigger;	// 56 = 0x38
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0010000000cd2da1
- (void).cxx_destruct;	// IMP=0x0000000000cd2c51
@property(readonly, nonatomic) HMDCounterThresholdTTRTrigger *cloudKitExportCountTTRTrigger; // @synthesize cloudKitExportCountTTRTrigger=_cloudKitExportCountTTRTrigger;
@property(readonly, nonatomic) HMDCounterThresholdTTRTrigger *cloudKitImportCountTTRTrigger; // @synthesize cloudKitImportCountTTRTrigger=_cloudKitImportCountTTRTrigger;
@property(readonly, nonatomic) HMDCounterThresholdTTRTrigger *workingStoreCommitTTRTrigger; // @synthesize workingStoreCommitTTRTrigger=_workingStoreCommitTTRTrigger;
@property(readonly, nonatomic) HMDEventCountersManager *countersManager; // @synthesize countersManager=_countersManager;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCounterGroup *cloudStoreReasonsEventGroup; // @synthesize cloudStoreReasonsEventGroup=_cloudStoreReasonsEventGroup;
@property(readonly, nonatomic) HMDEventCounterGroup *aggregationEventGroup; // @synthesize aggregationEventGroup=_aggregationEventGroup;
- (void)runDailyTask;	// IMP=0x0000000000cd2b06
- (void)resetAggregationAnalysisContext;	// IMP=0x0000000000cd2ac9
- (void)populateAggregationAnalysisLogEvent:(id)arg1 forDate:(id)arg2;	// IMP=0x0000000000cd294f
- (void)handleCloudKitOperationEvent:(id)arg1;	// IMP=0x0000000000cd27a8
- (void)handleWorkingStoreTransactionEvent:(id)arg1;	// IMP=0x0000000000cd263d
- (void)handleCloudStoreTransactionEvent:(id)arg1;	// IMP=0x0000000000cd230b
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000cd21ba
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000cd1f0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

