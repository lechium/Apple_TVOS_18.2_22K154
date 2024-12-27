//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDEventCountersManager, HMDLogEventDailyScheduler, HMFTimer, HMFWiFiManager, HMFWifiNetworkAssociation, HMMDateProvider, NSMutableDictionary, NSNotificationCenter, NSString;
@protocol HMDCurrentResidentDeviceDataSource, HMMLogEventDispatching;

__attribute__((visibility("hidden")))
@interface HMDNetworkObserver : NSObject
{
    _Bool _wifiAssociated;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    struct os_unfair_lock_s _networkAssociationLock;	// 12 = 0xc
    id <HMMLogEventDispatching> _logEventDispatcher;	// 16 = 0x10
    HMDEventCountersManager *_countersManager;	// 24 = 0x18
    HMFWiFiManager *_wifiManager;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    id <HMDCurrentResidentDeviceDataSource> _currentHomeDataSource;	// 48 = 0x30
    HMMDateProvider *_dateProvider;	// 56 = 0x38
    HMDLogEventDailyScheduler *_dailyScheduler;	// 64 = 0x40
    HMFWifiNetworkAssociation *_networkAssociation;	// 72 = 0x48
    unsigned long long _collectionStartSeconds;	// 80 = 0x50
    unsigned long long _numWifiAssociations;	// 88 = 0x58
    unsigned long long _numWifiDisassociations;	// 96 = 0x60
    unsigned long long _numAPChanges;	// 104 = 0x68
    unsigned long long _numGatewayChanges;	// 112 = 0x70
    unsigned long long _numReadWrites;	// 120 = 0x78
    unsigned long long _numReadErrors;	// 128 = 0x80
    unsigned long long _numWriteErrors;	// 136 = 0x88
    NSMutableDictionary *_topWriteErrors;	// 144 = 0x90
    NSMutableDictionary *_topSessionErrors;	// 152 = 0x98
    CDUnknownBlockType _tickBlock;	// 160 = 0xa0
    HMFTimer *_changeDebounceTimer;	// 168 = 0xa8
}

+ (id)supportedEventClasses;	// IMP=0x0010000000bc8d5f
- (void).cxx_destruct;	// IMP=0x0000000000bc8971
@property(readonly) HMFTimer *changeDebounceTimer; // @synthesize changeDebounceTimer=_changeDebounceTimer;
@property(readonly, nonatomic) CDUnknownBlockType tickBlock; // @synthesize tickBlock=_tickBlock;
@property(readonly, nonatomic) _Bool started; // @synthesize started=_started;
@property(readonly, nonatomic) NSMutableDictionary *topSessionErrors; // @synthesize topSessionErrors=_topSessionErrors;
@property(readonly, nonatomic) NSMutableDictionary *topWriteErrors; // @synthesize topWriteErrors=_topWriteErrors;
@property(readonly, nonatomic) unsigned long long numWriteErrors; // @synthesize numWriteErrors=_numWriteErrors;
@property(readonly, nonatomic) unsigned long long numReadErrors; // @synthesize numReadErrors=_numReadErrors;
@property(readonly, nonatomic) unsigned long long numReadWrites; // @synthesize numReadWrites=_numReadWrites;
@property(readonly, nonatomic) unsigned long long numGatewayChanges; // @synthesize numGatewayChanges=_numGatewayChanges;
@property(readonly, nonatomic) unsigned long long numAPChanges; // @synthesize numAPChanges=_numAPChanges;
@property(readonly, nonatomic) unsigned long long numWifiDisassociations; // @synthesize numWifiDisassociations=_numWifiDisassociations;
@property(readonly, nonatomic) unsigned long long numWifiAssociations; // @synthesize numWifiAssociations=_numWifiAssociations;
@property(readonly) unsigned long long collectionStartSeconds; // @synthesize collectionStartSeconds=_collectionStartSeconds;
@property(nonatomic) _Bool wifiAssociated; // @synthesize wifiAssociated=_wifiAssociated;
@property(readonly, nonatomic) HMFWifiNetworkAssociation *networkAssociation; // @synthesize networkAssociation=_networkAssociation;
@property(nonatomic) struct os_unfair_lock_s networkAssociationLock; // @synthesize networkAssociationLock=_networkAssociationLock;
@property(readonly, nonatomic) __weak HMDLogEventDailyScheduler *dailyScheduler; // @synthesize dailyScheduler=_dailyScheduler;
@property(readonly, nonatomic) __weak HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) __weak id <HMDCurrentResidentDeviceDataSource> currentHomeDataSource; // @synthesize currentHomeDataSource=_currentHomeDataSource;
@property(readonly, nonatomic) __weak NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak HMFWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(readonly, nonatomic) __weak HMDEventCountersManager *countersManager; // @synthesize countersManager=_countersManager;
@property(readonly, nonatomic) __weak id <HMMLogEventDispatching> logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000bc879e
- (void)checkNetworkChange;	// IMP=0x0000000000bc82b9
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x0000000000bc81fe
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x0000000000bc8143
- (id)logEventForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x0000000000bc7bf7
- (void)runDailyTask;	// IMP=0x0000000000bc76e7
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000bc761e
- (void)_handleAccessorySessionEvent:(id)arg1;	// IMP=0x0000000000bc741f
- (void)_handleReadWriteLogEvent:(id)arg1;	// IMP=0x0000000000bc71a3
- (void)_clearNonPersistentCounters;	// IMP=0x0000000000bc70e0
- (id)_keyOfLargestCountInHistogram:(id)arg1;	// IMP=0x0000000000bc6faa
- (void)_incrementError:(id)arg1 forHistogram:(id)arg2 byValue:(unsigned long long)arg3;	// IMP=0x0000000000bc6eca
- (void)_handleCurrentNetworkChangedNotification:(id)arg1;	// IMP=0x0000000000bc6d15
- (id)counterGroupForName:(id)arg1 homeUUID:(id)arg2 date:(id)arg3;	// IMP=0x0000000000bc6c2e
- (void)stop;	// IMP=0x0000000000bc6a9c
- (void)start;	// IMP=0x0000000000bc685e
- (id)initWithLogEventDispatcher:(id)arg1 countersManager:(id)arg2 dailyScheduler:(id)arg3 currentHomeDataSource:(id)arg4 dateProvider:(id)arg5 wifiManager:(id)arg6 notificationCenter:(id)arg7 changeDebounceTimer:(id)arg8 tickBlock:(CDUnknownBlockType)arg9;	// IMP=0x0000000000bc6666
- (id)initWithLogEventDispatcher:(id)arg1 countersManager:(id)arg2 dailyScheduler:(id)arg3 currentHomeDataSource:(id)arg4 dateProvider:(id)arg5;	// IMP=0x0000000000bc64fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

