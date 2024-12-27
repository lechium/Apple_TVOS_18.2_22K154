//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;
@protocol HMDSiriEndpointProfileMetricsDispatcherDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfileMetricsDispatcher : HMFObject
{
    id <HMDSiriEndpointProfileMetricsDispatcherDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    NSUUID *_accessoryUUID;	// 24 = 0x18
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000065428c
- (void).cxx_destruct;	// IMP=0x0000000000653957
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property __weak id <HMDSiriEndpointProfileMetricsDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x0000000000653898
- (void)runDailyTask;	// IMP=0x0000000000653886
- (id)dataSourceProfileFields;	// IMP=0x000000000065371a
- (id)dataSourceCompositeSettingsControllerManager;	// IMP=0x00000000006534ff
- (id)dataSourceAccessoryCategoryType;	// IMP=0x00000000006533c3
- (_Bool)dataSourceShouldSubmitRoutineConfigurationEvent;	// IMP=0x0000000000653297
- (id)fetchAccessorySettingFields;	// IMP=0x00000000006530f7
- (void)submitRoutineConfigurationEventWithAccessorySettingFields:(id)arg1;	// IMP=0x0000000000653017
- (void)submitRoutineConfigurationEvent;	// IMP=0x0000000000652e71
- (id)initWithAccessoryUUID:(id)arg1 homeUUID:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x0000000000652d78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

