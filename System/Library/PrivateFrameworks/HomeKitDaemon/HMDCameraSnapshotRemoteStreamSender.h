//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraSnapshotIDSStreamInitiator, HMDCameraSnapshotLocal, NSString;
@protocol HMDCameraSnapshotRemoteStreamSenderDelegate;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotRemoteStreamSender
{
    HMDCameraSnapshotLocal *_snapshotLocal;	// 8 = 0x8
    id <HMDCameraSnapshotRemoteStreamSenderDelegate> _delegate;	// 16 = 0x10
    HMDCameraSnapshotIDSStreamInitiator *_streamInitiator;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000002f87ab
- (void).cxx_destruct;	// IMP=0x00000000002f82fd
@property(readonly, nonatomic) HMDCameraSnapshotIDSStreamInitiator *streamInitiator; // @synthesize streamInitiator=_streamInitiator;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteStreamSenderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // @synthesize snapshotLocal=_snapshotLocal;
- (void)streamInitiator:(id)arg1 didFailToSendFileWithError:(id)arg2;	// IMP=0x00000000002f826d
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x00000000002f8042
- (void)_callDidCompleteSendImageDelegate:(id)arg1;	// IMP=0x00000000002f7e0f
- (void)_callDidStartCaptureImageDelegate:(id)arg1;	// IMP=0x00000000002f7bdc
- (void)snapShotTransferComplete;	// IMP=0x00000000002f7b6b
- (void)sendSnapshotAtPath:(id)arg1;	// IMP=0x00000000002f7ab3
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x00000000002f7a37
- (id)logIdentifier;	// IMP=0x00000000002f79e7
- (void)dealloc;	// IMP=0x00000000002f78e8
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8;	// IMP=0x00000000002f7738

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

