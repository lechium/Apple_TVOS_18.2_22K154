//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDHome, HMDHomePrimaryResidentInitialReachabilityManager, HMDMessageDispatcher, HMDPrimaryElectionCoordinationAddOn, HMDPrimaryElectionLegacyAddOn, HMDResidentDevice, HMFFuture, HMFPromise, NSArray, NSHashTable, NSMutableSet, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDResidentDeviceManagerDelegate, HMDResidentDeviceManagerLegacyDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDResidentDeviceManagerLegacy : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_residentDevices;	// 24 = 0x18
    _Bool _verifyCurrentResidentDevice;	// 32 = 0x20
    _Bool _fixupRemoteResidentDevice;	// 33 = 0x21
    HMDHome *_home;	// 40 = 0x28
    _Bool _residentAvailable;	// 48 = 0x30
    _Bool _residentSupported;	// 49 = 0x31
    _Bool _firstLegacyFetch;	// 50 = 0x32
    _Bool _firstHomeManagerZoneFetch;	// 51 = 0x33
    _Bool _firstHomeZoneFetch;	// 52 = 0x34
    NSUUID *_primaryResidentUUID;	// 56 = 0x38
    HMDMessageDispatcher *_messageDispatcher;	// 64 = 0x40
    HMFFuture *_cloudReady;	// 72 = 0x48
    NSString *_logIdentifier;	// 80 = 0x50
    id <HMDResidentDeviceManagerDelegate> delegate;	// 88 = 0x58
    id <HMDResidentDeviceManagerLegacyDataSource> _dataSource;	// 96 = 0x60
    NSHashTable *_devicePreferenceDataSources;	// 104 = 0x68
    NSNotificationCenter *_notificationCenter;	// 112 = 0x70
    HMDHomePrimaryResidentInitialReachabilityManager *_primaryResidentInitialReachabilityManager;	// 120 = 0x78
    HMFPromise *_cloudReadyPromise;	// 128 = 0x80
    HMDPrimaryElectionLegacyAddOn *_legacyElection;	// 136 = 0x88
    HMDPrimaryElectionCoordinationAddOn *_localNetworkElection;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000056ea1a
+ (id)logCategory;	// IMP=0x001000000056e9ea
+ (id)shortDescription;	// IMP=0x001000000056e9d8
- (void).cxx_destruct;	// IMP=0x000000000056b0fa
@property(retain) HMDPrimaryElectionCoordinationAddOn *localNetworkElection; // @synthesize localNetworkElection=_localNetworkElection;
@property(retain) HMDPrimaryElectionLegacyAddOn *legacyElection; // @synthesize legacyElection=_legacyElection;
@property(retain) HMFPromise *cloudReadyPromise; // @synthesize cloudReadyPromise=_cloudReadyPromise;
@property(retain) HMDHomePrimaryResidentInitialReachabilityManager *primaryResidentInitialReachabilityManager; // @synthesize primaryResidentInitialReachabilityManager=_primaryResidentInitialReachabilityManager;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy, nonatomic) NSHashTable *devicePreferenceDataSources; // @synthesize devicePreferenceDataSources=_devicePreferenceDataSources;
@property(readonly) id <HMDResidentDeviceManagerLegacyDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property __weak id <HMDResidentDeviceManagerDelegate> delegate; // @synthesize delegate;
@property(readonly) HMFFuture *cloudReady; // @synthesize cloudReady=_cloudReady;
@property(readonly) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
- (void)primaryElectionAddOn:(id)arg1 didUpdateActiveNodes:(id)arg2;	// IMP=0x000000000056aeb8
- (void)primaryElectionAddOn:(id)arg1 didFailToElectWithError:(id)arg2;	// IMP=0x000000000056ad96
- (void)primaryElectionAddOn:(id)arg1 didUpdateResidentDevice:(id)arg2;	// IMP=0x000000000056ad81
- (void)primaryElectionAddOn:(id)arg1 didElectPrimaryResident:(id)arg2 confirmed:(_Bool)arg3 electionLogEvent:(id)arg4;	// IMP=0x000000000056a4e1
@property(readonly) long long atHomeLevel;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
@property(readonly) HMDResidentDevice *currentResidentDevice;
@property(readonly) _Bool isOwnerUser;
@property(readonly) _Bool isResidentEnabled;
- (void)_removeResidentDeviceWithModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000569bc9
- (_Bool)_createResidentDeviceWithModel:(id)arg1;	// IMP=0x000000000056996d
- (void)updatePrimaryResidentWithUUID:(id)arg1 actions:(id)arg2;	// IMP=0x000000000056985c
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000569757
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000056956c
- (void)_verifyCurrentResidentDevice;	// IMP=0x0000000000568e23
- (_Bool)wasTheHomeFetchedFromCloud;	// IMP=0x0000000000568e11
- (void)_handleCloudZoneReadyNotification:(id)arg1;	// IMP=0x0000000000568be1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000568ac9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000568742
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (id)dumpState;	// IMP=0x000000000056811f
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000567ff5
- (id)shortDescription;	// IMP=0x0000000000567f33
- (void)_updateReachability:(_Bool)arg1 forResidentDevice:(id)arg2;	// IMP=0x0000000000567bab
- (void)handleResidentDeviceIsNotReachable:(id)arg1;	// IMP=0x0000000000567b17
- (void)handleResidentDeviceIsReachable:(id)arg1;	// IMP=0x0000000000567a83
- (void)_electResidentDevice:(unsigned long long)arg1;	// IMP=0x0000000000567a37
- (void)electResidentDevice:(unsigned long long)arg1;	// IMP=0x00000000005679e1
- (void)__currentDeviceUpdated:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005677bb
- (void)handleDeviceUpdated:(id)arg1;	// IMP=0x0000000000567727
- (void)handleCurrentDeviceChanged:(id)arg1;	// IMP=0x0000000000567693
- (void)handleHomeUpdatedAccessories:(id)arg1;	// IMP=0x0000000000567641
- (void)_handleResidentDeviceUpdateEnabled:(id)arg1;	// IMP=0x0000000000566d0e
- (void)_sendResidentDeviceNotificationWithName:(id)arg1 forResidentDevice:(id)arg2;	// IMP=0x0000000000566bfc
- (void)notifyUpdatedPrimaryResident:(id)arg1;	// IMP=0x0000000000566b68
- (void)notifyClientsOfUpdatedResidentDevice:(id)arg1;	// IMP=0x0000000000566ad4
- (void)notifyResidentAvailable:(_Bool)arg1;	// IMP=0x0000000000566a7f
@property(nonatomic, getter=isResidentSupported) _Bool residentSupported; // @synthesize residentSupported=_residentSupported;
- (void)setResidentAvailable:(_Bool)arg1;	// IMP=0x000000000056686e
@property(readonly, nonatomic, getter=isResidentAvailable) _Bool residentAvailable; // @synthesize residentAvailable=_residentAvailable;
- (void)_updateResidentAvailability;	// IMP=0x0000000000566738
- (void)updateResidentAvailability;	// IMP=0x00000000005666e6
- (void)_removeResidentDevice:(id)arg1 reason:(id)arg2;	// IMP=0x0000000000566434
- (void)removeResidentDevice:(id)arg1;	// IMP=0x000000000056641b
- (void)_removeResidentDevice:(id)arg1;	// IMP=0x0000000000566309
- (void)_addResidentDevice:(id)arg1;	// IMP=0x00000000005661d2
- (void)_startElectionAddOn;	// IMP=0x0000000000565ac3
- (void)_stopLegacyElectionWithReason:(id)arg1;	// IMP=0x000000000056593f
- (void)_stopCoordinationElectionWithReason:(id)arg1;	// IMP=0x00000000005657bb
- (_Bool)_shouldEnableCoordinationElection;	// IMP=0x000000000056561b
@property(readonly) HMFFuture *firstPrimaryResidentDiscoveryAttemptCompletionFuture;
- (void)_fixUpRemoteResidentDevice:(id)arg1 existingResidentDevice:(id)arg2;	// IMP=0x00000000005653e9
- (id)residentDeviceForDevice:(id)arg1;	// IMP=0x00000000005651c6
@property(readonly, nonatomic) HMDDevice *confirmedPrimaryResidentDevice;
@property(readonly, nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) _Bool currentDeviceConfirmedPrimaryResident;
@property(readonly, nonatomic, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
@property(readonly, nonatomic, getter=isCurrentDeviceAvailableResident) _Bool currentDeviceAvailableResident;
@property(readonly, copy) NSArray *availableResidentDevices;
@property(readonly, copy, nonatomic) NSArray *residentDevices;
- (id)ourSelf;	// IMP=0x0000000000564c93
- (id)residentWithUUID:(id)arg1;	// IMP=0x0000000000564ac0
@property(nonatomic, getter=hasFirstHomeZoneFetch) _Bool firstHomeZoneFetch; // @synthesize firstHomeZoneFetch=_firstHomeZoneFetch;
@property(nonatomic, getter=hasFirstHomeManagerZoneFetch) _Bool firstHomeManagerZoneFetch; // @synthesize firstHomeManagerZoneFetch=_firstHomeManagerZoneFetch;
@property(nonatomic, getter=hasFirstLegacyFetch) _Bool firstLegacyFetch; // @synthesize firstLegacyFetch=_firstLegacyFetch;
@property(readonly) NSUUID *primaryResidentUUID; // @synthesize primaryResidentUUID=_primaryResidentUUID;
@property(readonly) HMDResidentDevice *primaryResidentDevice;
- (void)addDataSource:(id)arg1;	// IMP=0x000000000056464c
- (void)_teardownSessionWithPrimaryResidentDevice;	// IMP=0x00000000005645da
- (void)_setupSessionWithPrimaryResidentDevice;	// IMP=0x000000000056451a
- (void)_run;	// IMP=0x0000000000563cfd
- (void)run;	// IMP=0x0000000000563cab
- (void)atHomeLevelChanged:(long long)arg1;	// IMP=0x0000000000563c55
- (void)confirmOnAvailability;	// IMP=0x0000000000563c03
- (void)confirmAsResident;	// IMP=0x0000000000563bb1
- (void)confirmWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000563b1d
@property(readonly, nonatomic) _Bool hasTrustZoneCapableResident;
@property(readonly, nonatomic) _Bool isResidentElectionV2Enabled;
- (void)_registerForMessages;	// IMP=0x0000000000563715
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000563657
- (void)invalidate;	// IMP=0x0000000000563605
- (void)setHome:(id)arg1;	// IMP=0x00000000005634e1
@property(readonly) HMDHome *home;
- (void)dealloc;	// IMP=0x000000000056345a
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000005631cf
- (id)init;	// IMP=0x000000000056318f

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isCurrentDeviceAvailableResident;
@property(readonly) _Bool isResidentSupported;
@property(readonly) Class superclass;

@end

