//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFHomeAccessoryInfo, AFPeerInfo, AFWatchdogTimer, NSArray, NSDate, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADDeviceCircleManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_muxSyncQueue;	// 16 = 0x10
    NSHashTable *_listeners;	// 24 = 0x18
    NSArray *_currentCollectorIDs;	// 32 = 0x20
    _Bool _isCollector;	// 40 = 0x28
    float _currentStationaryScore;	// 44 = 0x2c
    AFWatchdogTimer *_stationaryScoreTimer;	// 48 = 0x30
    float _rollingRSSI;	// 56 = 0x38
    unsigned long long _rollingRSSICount;	// 64 = 0x40
    unsigned long long _rapportInstabilityPenalty;	// 72 = 0x48
    NSMutableArray *_deviceCountTrend;	// 80 = 0x50
    NSDate *_lastReelectionDate;	// 88 = 0x58
    struct os_unfair_lock_s _assistantIdMapLock;	// 96 = 0x60
    NSMutableDictionary *_assistantIdsByDeviceIDSID;	// 104 = 0x68
    struct os_unfair_lock_s _peerInfoLock;	// 112 = 0x70
    NSString *_assistantIdentifier;	// 120 = 0x78
    NSString *_sharedUserIdentifier;	// 128 = 0x80
    AFPeerInfo *_localPeerInfo;	// 136 = 0x88
    AFHomeAccessoryInfo *_currentAccessoryInfo;	// 144 = 0x90
    NSMutableDictionary *_remotePeerInfoByRapportEffectiveIdentifier;	// 152 = 0x98
    NSMutableDictionary *_rapportEffectiveIdentifiersByIDSDeviceUniqueIdentifier;	// 160 = 0xa0
    NSMutableDictionary *_rapportEffectiveIdentifiersByAssistantIdentifier;	// 168 = 0xa8
    NSMutableDictionary *_rapportEffectiveIdentifiersByHomeKitAccessoryIdentifier;	// 176 = 0xb0
    NSArray *_svdCapabilities;	// 184 = 0xb8
    NSMapTable *_requestHandlers;	// 192 = 0xc0
}

+ (id)sharedInstance;	// IMP=0x002000000019c1de
- (void).cxx_destruct;	// IMP=0x002000000019ab18
- (unsigned long long)_rapportLinkInstabilityPenalty;	// IMP=0x001000000019ab0e
- (void)dumpAssistantStateChunk:(CDUnknownBlockType)arg1;	// IMP=0x001000000019aa29
- (id)_remotePeerInfoForRapportEffectiveIdentifier:(id)arg1;	// IMP=0x001000000019a9c2
- (id)_remotePeerInfoForHomeKitAccessoryIdentifier:(id)arg1;	// IMP=0x001000000019a92b
- (id)_remotePeerInfoForIDSDeviceUniqueIdentifier:(id)arg1;	// IMP=0x001000000019a894
- (id)_remotePeerInfoForAssistantIdentifier:(id)arg1;	// IMP=0x001000000019a7fd
- (void)_removeRemotePeerInfoWithRapportEffectiveIdentifier:(id)arg1;	// IMP=0x001000000019a669
- (void)fetchSyncTokenForCompanionAssistantId:(id)arg1 aceHost:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000019a651
- (void)_updateRemotePeerInfo:(id)arg1;	// IMP=0x001000000019a32b
- (void)_updateLocalPeerInfo:(id)arg1;	// IMP=0x001000000019a16b
- (id)_localPeerInfo;	// IMP=0x001000000019a0df
- (id)_localPeerData;	// IMP=0x001000000019a082
- (id)_managedPeerInfoMatchingPeerInfo:(id)arg1;	// IMP=0x0010000000199e49
- (id)_managedPeerInfoForRapportEffectiveIdentifier:(id)arg1;	// IMP=0x0010000000199cf3
- (id)_managedPeerInfoForHomeKitAccessoryIdentifier:(id)arg1;	// IMP=0x0010000000199b9d
- (id)_managedPeerInfoForIDSDeviceUniqueIdentifier:(id)arg1;	// IMP=0x0010000000199a47
- (id)_managedPeerInfoForAssistantIdentifier:(id)arg1;	// IMP=0x00100000001998d2
- (void)isMeDeviceDidChange:(id)arg1;	// IMP=0x001000000019984d
- (void)sharedDataDidChange:(id)arg1;	// IMP=0x00100000001997c3
- (void)myriadTrialBoostsUpdated:(id)arg1;	// IMP=0x00100000001996bd
- (void)_updateCurrentAccessoryInfo:(id)arg1;	// IMP=0x0010000000199546
- (void)_updateAssistantIdentifierAndSharedUserIdentifier;	// IMP=0x001000000019940b
- (void)preferencesSharedUserIdentifierDidChange:(id)arg1;	// IMP=0x00100000001993c0
- (void)activeAccountIdentifierDidChange:(id)arg1;	// IMP=0x0010000000199375
- (void)preferencesEnabledBitsDidChange:(id)arg1;	// IMP=0x001000000019932a
- (void)homeInfoManager:(id)arg1 didUpdateCurrentAccessoryInfo:(id)arg2;	// IMP=0x001000000019929d
- (id)_syncCompanionLinkDeviceLocalPeerData;	// IMP=0x0010000000199217
- (id)localPeerInfo;	// IMP=0x00100000001991d2
- (id)managedPeerInfoMatchingPeerInfo:(id)arg1;	// IMP=0x0010000000199163
- (void)sendRequestType:(id)arg1 data:(id)arg2 toDeviceWithAssistantIdentifier:(id)arg3 onQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000019915d
- (void)_forwardExecuteCommandToDevice:(id)arg1 message:(id)arg2 from:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000198f3d
- (void)_registerRequestHandlerForRequestId:(id)arg1 messageType:(id)arg2 handler:(id)arg3;	// IMP=0x0010000000198d50
- (id)locationSharingDevice;	// IMP=0x0010000000198d48
- (void)wakeUpNearbyDevices;	// IMP=0x0010000000198d3e
- (void)getManagedLocalAndRemotePeerInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000198ca7
- (void)getCapabilitiesAndPeersFromContextCollectorThroughOnDemandRapportConnection:(CDUnknownBlockType)arg1;	// IMP=0x0010000000198be9
- (void)getCapabilitiesForReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000198bd3
- (void)getCapabilitiesForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000198b80
- (void)reelectContextCollectorWithBestScore;	// IMP=0x0010000000198b76
- (void)removeListener:(id)arg1;	// IMP=0x0010000000198ae9
- (void)addListener:(id)arg1;	// IMP=0x0010000000198a5c
- (void)getContextCollectorDeviceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001989b0
- (id)idsDeviceUniqueIdentifierForDeviceWithAssistantId:(id)arg1;	// IMP=0x001000000019882c
- (void)_setAssistantId:(id)arg1 forDeviceWithIdsDeviceUniqueIdentifier:(id)arg2;	// IMP=0x00100000001986a2
- (id)assistantIdForDeviceWithIdsDeviceUniqueIdentifier:(id)arg1;	// IMP=0x0010000000198621
- (void)updatePersonalRequestsEnabledAccessories:(id)arg1;	// IMP=0x00100000001985d6
- (void)_updatePersonalRequestsEnabledAccessories;	// IMP=0x00100000001985d0
- (id)_initWithQueue:(id)arg1;	// IMP=0x00100000001981d7
- (void)_setupMUXSupport;	// IMP=0x00100000001981d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

