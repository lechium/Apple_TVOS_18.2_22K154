//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMFPreferences, HMISystemResourceUsageMonitor, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingLoadBalancer : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMFPreferences *_preferences;	// 16 = 0x10
    HMDHomeManager *_homeManager;	// 24 = 0x18
    HMISystemResourceUsageMonitor *_systemResourceUsageMonitor;	// 32 = 0x20
    NSMutableDictionary *_recordingSessionSummariesByCameraUUIDString;	// 40 = 0x28
    NSMutableDictionary *_readyToRecordByCameraUUIDString;	// 48 = 0x30
    NSMutableDictionary *_decisionsByCameraUUIDByDeviceUUID;	// 56 = 0x38
    NSMutableDictionary *_lastDecisionByCameraUUID;	// 64 = 0x40
    unsigned long long _numberOfActiveRecordingSessions;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0010000000e6dc4d
- (void).cxx_destruct;	// IMP=0x0000000000e6c140
@property unsigned long long numberOfActiveRecordingSessions; // @synthesize numberOfActiveRecordingSessions=_numberOfActiveRecordingSessions;
@property(readonly) NSMutableDictionary *lastDecisionByCameraUUID; // @synthesize lastDecisionByCameraUUID=_lastDecisionByCameraUUID;
@property(readonly) NSMutableDictionary *decisionsByCameraUUIDByDeviceUUID; // @synthesize decisionsByCameraUUIDByDeviceUUID=_decisionsByCameraUUIDByDeviceUUID;
@property(readonly) NSMutableDictionary *readyToRecordByCameraUUIDString; // @synthesize readyToRecordByCameraUUIDString=_readyToRecordByCameraUUIDString;
@property(readonly) NSMutableDictionary *recordingSessionSummariesByCameraUUIDString; // @synthesize recordingSessionSummariesByCameraUUIDString=_recordingSessionSummariesByCameraUUIDString;
@property(readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor; // @synthesize systemResourceUsageMonitor=_systemResourceUsageMonitor;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMFPreferences *preferences; // @synthesize preferences=_preferences;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;	// IMP=0x0000000000e6bde3
- (void)handleResidentMeshInitialized:(id)arg1;	// IMP=0x0000000000e6bc7a
- (void)_updateReadyToRecordMetric;	// IMP=0x0000000000e6bb8c
- (id)_loadBalancingDescriptionFromSortedNodes:(id)arg1;	// IMP=0x0000000000e6baae
- (unsigned long long)_jobSlotLimitForDevice:(id)arg1;	// IMP=0x0000000000e6ba59
- (_Bool)_isDeviceB620InOdeonConfiguration:(id)arg1;	// IMP=0x0000000000e6b623
- (id)_loadBalancingDecisionForCamera:(id)arg1 deviceFilter:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e6a186
- (void)handleRecordingSessionForwardingFailureForDecision:(id)arg1;	// IMP=0x0000000000e69f9c
- (void)handleRecordingSessionForwardingSuccessForDecision:(id)arg1;	// IMP=0x0000000000e69c14
- (id)loadBalancingDecisionForCamera:(id)arg1 deviceFilter:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e69b77
- (void)removeDataForCameraWithUUID:(id)arg1;	// IMP=0x0000000000e699c0
- (void)setReadyToRecord:(_Bool)arg1 forCameraWithUUID:(id)arg2;	// IMP=0x0000000000e697b4
- (_Bool)isReadyToRecordForCameraWithUUID:(id)arg1;	// IMP=0x0000000000e696c8
- (void)recordingDidEndForCameraWithUUID:(id)arg1;	// IMP=0x0000000000e6925f
- (void)recordingDidStartForCameraWithUUID:(id)arg1;	// IMP=0x0000000000e69040
- (void)start;	// IMP=0x0000000000e68f4f
- (id)initWithHomeManager:(id)arg1 resourceUsageMonitor:(id)arg2;	// IMP=0x0000000000e68db9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

