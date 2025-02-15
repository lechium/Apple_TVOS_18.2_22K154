//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraMediaConfigGenerator, HMDCameraRemoteStreamSession, HMDCameraResidentMessageHandler, HMDCameraStreamMetrics, NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraRemoteStreamControlManager
{
    NSUUID *_profileUniqueIdentifier;	// 8 = 0x8
    HMDCameraResidentMessageHandler *_residentMessageHandler;	// 16 = 0x10
    HMDCameraMediaConfigGenerator *_configGenerator;	// 24 = 0x18
    HMDCameraRemoteStreamSession *_streamSession;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000003233f8
- (void).cxx_destruct;	// IMP=0x0000000000322ad7
@property(retain) HMDCameraRemoteStreamSession *streamSession; // @synthesize streamSession=_streamSession;
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
- (void)_sendUpdatedConfiguration;	// IMP=0x0000000000322715
- (void)updateMaximumVideoResolutionQuality:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000322420
- (void)_dispatchReconfigureToResident:(id)arg1;	// IMP=0x00000000003221bf
- (void)_reconfigureStreams;	// IMP=0x0000000000322002
- (void)streamManagerDidStartRelay:(id)arg1;	// IMP=0x0000000000321ffc
- (void)streamManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x0000000000321e86
- (void)streamManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x0000000000321c34
- (void)streamManagerDidNetworkImprove:(id)arg1;	// IMP=0x00000000003219e2
- (void)streamManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x000000000032184f
- (void)streamManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000003217fc
- (void)streamManagerDidStartStream:(id)arg1;	// IMP=0x00000000003215c3
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x000000000032147f
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x000000000032130f
- (void)deviceConnectionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000003211cb
- (void)deviceConnectionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x0000000000321151
- (void)sessionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x000000000032100d
- (void)sessionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x0000000000320f93
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x0000000000320d4f
- (void)_sendStopMessageToResident;	// IMP=0x0000000000320b0a
- (void)stopStreamWithError:(id)arg1;	// IMP=0x000000000032094e
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x000000000032072c
- (void)reconfigureStream:(id)arg1;	// IMP=0x00000000003204da
- (void)_streamStarted;	// IMP=0x00000000003203b9
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;	// IMP=0x000000000031fe12
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x000000000031f626
- (void)_relaySessionStarted:(id)arg1;	// IMP=0x000000000031f37b
- (void)_idsSessionCreatedAndConfigNegotiated;	// IMP=0x000000000031f08f
- (void)_setParametersSelected:(id)arg1;	// IMP=0x000000000031e708
- (void)negotiateStream;	// IMP=0x000000000031e28c
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000031e1b4
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x000000000031e113
@property(readonly, copy) NSDictionary *stateDump;
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 accessory:(id)arg5 streamManagementService:(id)arg6 profileUniqueIdentifier:(id)arg7 residentMessageHandler:(id)arg8 streamSession:(id)arg9;	// IMP=0x000000000031dc1e
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 accessory:(id)arg7 streamManagementService:(id)arg8 remoteCapabilities:(id)arg9 profileUniqueIdentifier:(id)arg10 residentMessageHandler:(id)arg11 remoteAccessDevice:(id)arg12 streamPreference:(id)arg13;	// IMP=0x000000000031d859

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end

