//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDEventCountersManager, HMMDateProvider, NSNotificationCenter, NSObject, NSString;
@protocol HMDCurrentResidentDeviceDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMetricsHomeDataChangedManager : HMFObject
{
    _Bool _started;	// 8 = 0x8
    HMDEventCountersManager *_countersManager;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    id <HMDCurrentResidentDeviceDataSource> _currentHomeDataSource;	// 32 = 0x20
    HMMDateProvider *_dateProvider;	// 40 = 0x28
    unsigned long long _maxNumberEventsToReport;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000034967a
- (void).cxx_destruct;	// IMP=0x00000000003487e2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) _Bool started; // @synthesize started=_started;
@property(readonly) unsigned long long maxNumberEventsToReport; // @synthesize maxNumberEventsToReport=_maxNumberEventsToReport;
@property(readonly, nonatomic) __weak HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) __weak id <HMDCurrentResidentDeviceDataSource> currentHomeDataSource; // @synthesize currentHomeDataSource=_currentHomeDataSource;
@property(readonly, nonatomic) __weak NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak HMDEventCountersManager *countersManager; // @synthesize countersManager=_countersManager;
- (_Bool)_shouldExcludeUpdateForModelName:(id)arg1 propertyName:(id)arg2;	// IMP=0x00000000003486ec
- (void)_handleHomeDataChangedReasonBecamePrimaryLogEvent:(id)arg1 becamePrimaryHouseholdLogEventsByName:(id)arg2 homeUUID:(id)arg3;	// IMP=0x00000000003485ea
- (void)_handleHomeDataChangedReasonUpdatedLogEvent:(id)arg1 updatedHouseholdLogEventsByName:(id)arg2 homeUUID:(id)arg3;	// IMP=0x0000000000348461
- (void)_handleHomeDataChangedReasonInsertedLogEvent:(id)arg1 insertedHouseholdLogEventsByName:(id)arg2 homeUUID:(id)arg3;	// IMP=0x000000000034834d
- (void)_handleHDCDueToBecamePrimaryForHome:(id)arg1;	// IMP=0x0000000000348244
- (void)_handleChangeSetSummary:(id)arg1 homeUUID:(id)arg2;	// IMP=0x0000000000347fad
- (void)_handleGeneratedHomeDataChangedNotification:(id)arg1;	// IMP=0x0000000000347ef5
- (id)serializeLogEvents:(id)arg1;	// IMP=0x0000000000347d8c
- (id)logEventsFromDictionary:(id)arg1;	// IMP=0x0000000000347c42
- (id)coalescedLogEventsFromLogEvents:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00000000003478bc
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x0000000000347756
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x00000000003475f0
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x00000000003470c4
- (void)stop;	// IMP=0x0000000000346f80
- (void)start;	// IMP=0x0000000000346e35
- (id)householdMetricsLogEventFactory;	// IMP=0x0000000000346e2c
- (id)initWithCountersManager:(id)arg1 currentHomeDataSource:(id)arg2 dateProvider:(id)arg3 notificationCenter:(id)arg4 maxNumberEventsToReport:(unsigned long long)arg5 workQueue:(id)arg6;	// IMP=0x0000000000346d0d
- (id)initWithCountersManager:(id)arg1 currentHomeDataSource:(id)arg2 dateProvider:(id)arg3;	// IMP=0x0000000000346c2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

