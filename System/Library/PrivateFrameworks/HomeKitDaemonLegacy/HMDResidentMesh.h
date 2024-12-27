//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDMessageDispatcher, HMDResidentMeshMeshStorage, HMFTimer, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDResidentMesh : HMFObject
{
    NSUUID *_uuid;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    HMDMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    NSMutableArray *_residents;	// 32 = 0x20
    HMDResidentMeshMeshStorage *_resident;	// 40 = 0x28
    NSMutableArray *_reachableAccessories;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMFTimer *_devicesChangedTimer;	// 64 = 0x40
    NSSet *_primaryResidentForHomes;	// 72 = 0x48
    NSMutableDictionary *_loadMetrics;	// 80 = 0x50
    HMFTimer *_startupTimer;	// 88 = 0x58
    long long _startupTickCount;	// 96 = 0x60
    HMFTimer *_linkQualityMonitorTimer;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x0010000000705049
- (void).cxx_destruct;	// IMP=0x0000000000701b07
@property(readonly, nonatomic) HMFTimer *linkQualityMonitorTimer; // @synthesize linkQualityMonitorTimer=_linkQualityMonitorTimer;
@property(nonatomic) long long startupTickCount; // @synthesize startupTickCount=_startupTickCount;
@property(readonly, nonatomic) HMFTimer *startupTimer; // @synthesize startupTimer=_startupTimer;
@property(readonly, nonatomic) NSMutableDictionary *loadMetrics; // @synthesize loadMetrics=_loadMetrics;
@property(retain, nonatomic) NSSet *primaryResidentForHomes; // @synthesize primaryResidentForHomes=_primaryResidentForHomes;
@property(readonly, nonatomic) HMFTimer *devicesChangedTimer; // @synthesize devicesChangedTimer=_devicesChangedTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *reachableAccessories; // @synthesize reachableAccessories=_reachableAccessories;
@property(nonatomic) __weak HMDResidentMeshMeshStorage *resident; // @synthesize resident=_resident;
@property(retain, nonatomic) NSMutableArray *residents; // @synthesize residents=_residents;
@property(nonatomic) __weak HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)messageDestination;	// IMP=0x00000000007018e3
@property(readonly, copy) NSString *stateDump;
- (id)_stateDump;	// IMP=0x000000000070045a
- (void)_transmitCurrentDeviceMetricsToPrimaryResidentWithIsUrgent:(_Bool)arg1;	// IMP=0x00000000006ffec3
- (void)setMetricForCurrentDevice:(id)arg1 withValue:(id)arg2 isUrgent:(_Bool)arg3;	// IMP=0x00000000006ffddb
- (id)deviceForAccessory:(id)arg1 residentOrder:(unsigned long long)arg2 reachableResidents:(unsigned long long *)arg3;	// IMP=0x00000000006ffb99
- (id)_residentMapForAccessories:(id)arg1;	// IMP=0x00000000006ff84f
- (id)balancedResidentMapForAccessories:(id)arg1;	// IMP=0x00000000006ff18e
- (id)cameraRecordingAnalysisNodesForCameraAccessory:(id)arg1;	// IMP=0x00000000006ff091
- (id)bestResidentDeviceForAccessory:(id)arg1;	// IMP=0x00000000006fec17
- (void)_handleMeshUpdateMessage:(id)arg1;	// IMP=0x00000000006fe655
- (void)_handleMeshUpdateRequestMessage:(id)arg1;	// IMP=0x00000000006fde61
- (void)_sendMessage:(id)arg1 payload:(id)arg2 target:(id)arg3 force:(_Bool)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006fd5a4
- (void)_removeConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(_Bool)arg2;	// IMP=0x00000000006fcdf5
- (void)_addConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(_Bool)arg2;	// IMP=0x00000000006fc7eb
- (_Bool)_checkReachabilityWithTimerActivation:(_Bool)arg1;	// IMP=0x00000000006fc3c5
- (id)_addResidentStorageResidentDevice:(id)arg1;	// IMP=0x00000000006fc1c1
- (id)_residentStorageForResidentDevice:(id)arg1;	// IMP=0x00000000006fbfee
- (id)_addMeshStorageResidentDevice:(id)arg1;	// IMP=0x00000000006fbdea
- (id)_meshStorageForDeviceIdentifier:(id)arg1;	// IMP=0x00000000006fbba3
- (id)_meshStorageForResidentDevice:(id)arg1;	// IMP=0x00000000006fb9d0
- (void)_buildResidentsWithElection:(id)arg1 device:(id)arg2;	// IMP=0x00000000006fa8b1
- (void)_deviceIsNotReachable:(id)arg1;	// IMP=0x00000000006fa15d
- (void)_handleAddUpdateOrReachabilityChangeForDevice:(id)arg1;	// IMP=0x00000000006fa120
- (void)_updateAccessoryLinkQuality;	// IMP=0x00000000006f9c0d
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006f983a
- (void)_handlePrimaryResidentChangedNotification:(id)arg1;	// IMP=0x00000000006f97c9
- (void)__deviceResidentChanged:(id)arg1;	// IMP=0x00000000006f9711
- (void)__rebuildResidents:(id)arg1;	// IMP=0x00000000006f9659
- (void)__residentDeviceAddedOrUpdatedNotification:(id)arg1;	// IMP=0x00000000006f95a1
- (void)__residentDeviceRemovedNotification:(id)arg1;	// IMP=0x00000000006f94e9
- (void)__deviceIsNotReachable:(id)arg1;	// IMP=0x00000000006f9431
- (void)__deviceIsReachable:(id)arg1;	// IMP=0x00000000006f9379
- (void)__accessoryDidUpdateSuspendedState:(id)arg1;	// IMP=0x00000000006f92c1
- (void)__accessoryIsNotReachable:(id)arg1;	// IMP=0x00000000006f9209
- (void)__accessoryIsReachable:(id)arg1;	// IMP=0x00000000006f9151
- (void)dealloc;	// IMP=0x00000000006f90a9
- (id)initWithHomeManager:(id)arg1 residentEnabled:(_Bool)arg2;	// IMP=0x00000000006f87d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

