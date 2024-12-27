//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class AVCRemoteVideoClient, HMDAudioStreamInterface, HMDCameraStreamSessionID, HMDCameraStreamSnapshotHandler, HMDVideoStreamInterface, NSNumber, NSObject, NSString;
@protocol HMDCameraStreamManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraStreamManager : HMFObject
{
    NSNumber *_slotIdentifier;	// 8 = 0x8
    NSNumber *_aspectRatio;	// 16 = 0x10
    HMDVideoStreamInterface *_videoStreamInterface;	// 24 = 0x18
    HMDAudioStreamInterface *_audioStreamInterface;	// 32 = 0x20
    HMDCameraStreamSessionID *_sessionID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    id <HMDCameraStreamManagerDelegate> _delegate;	// 56 = 0x38
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 64 = 0x40
    AVCRemoteVideoClient *_avcRemoteVideo;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0010000000369e62
- (void).cxx_destruct;	// IMP=0x0000000000369913
@property(retain) AVCRemoteVideoClient *avcRemoteVideo; // @synthesize avcRemoteVideo=_avcRemoteVideo;
@property(readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property __weak id <HMDCameraStreamManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) HMDAudioStreamInterface *audioStreamInterface; // @synthesize audioStreamInterface=_audioStreamInterface;
@property(readonly) HMDVideoStreamInterface *videoStreamInterface; // @synthesize videoStreamInterface=_videoStreamInterface;
@property(copy) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(copy) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
- (void)remoteVideoServerDidDie:(id)arg1;	// IMP=0x0000000000369792
- (void)remoteVideoClientDidReceiveLastFrame:(id)arg1;	// IMP=0x0000000000369721
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;	// IMP=0x0000000000369669
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000003695b1
- (void)videoStreamDidUpdateConfiguration:(id)arg1;	// IMP=0x000000000036947d
- (void)videoStreamDidNetworkDeteriorate:(id)arg1;	// IMP=0x0000000000369349
- (void)videoStreamDidNetworkImprove:(id)arg1;	// IMP=0x0000000000369215
- (void)videoStream:(id)arg1 didStop:(id)arg2;	// IMP=0x00000000003690c6
- (void)videoStream:(id)arg1 didStart:(id)arg2;	// IMP=0x0000000000368b9e
- (void)audioStream:(id)arg1 didStop:(id)arg2;	// IMP=0x0000000000368b98
- (void)audioStream:(id)arg1 didResume:(id)arg2;	// IMP=0x0000000000368b92
- (void)audioStream:(id)arg1 didPause:(id)arg2;	// IMP=0x0000000000368b8c
- (void)audioStream:(id)arg1 didStart:(id)arg2;	// IMP=0x0000000000368b86
- (void)_callConfigurationUpdated;	// IMP=0x0000000000368a33
- (void)_callNetworkDeteriorated;	// IMP=0x00000000003688e0
- (void)_callNetworkImproved;	// IMP=0x000000000036878d
- (void)_callStreamStoppedWithError:(id)arg1;	// IMP=0x0000000000368620
- (void)_callRelayStarted;	// IMP=0x00000000003684cd
- (void)_callReceivedFirstFrame;	// IMP=0x000000000036837a
- (void)_callStreamStarted;	// IMP=0x0000000000368227
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000368170
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000003680ed
- (void)stopStream;	// IMP=0x0000000000367f28
- (void)updateStreamConfiguration:(id)arg1;	// IMP=0x0000000000367c67
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x0000000000367be6
- (void)startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;	// IMP=0x0000000000367257
@property(readonly) unsigned long long audioStreamSetting;
- (id)logIdentifier;	// IMP=0x000000000036718e
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 videoStreamInterface:(id)arg5 audioStreamInterface:(id)arg6;	// IMP=0x0000000000366fc8
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 localVideoNetworkConfig:(id)arg5 localAudioNetworkConfig:(id)arg6 sessionHandler:(id)arg7;	// IMP=0x0000000000366c7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

