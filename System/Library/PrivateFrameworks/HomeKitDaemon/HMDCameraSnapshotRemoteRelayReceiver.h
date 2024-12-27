//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraSnapshotIDSRelayReceiver, NSString;
@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotRemoteRelayReceiver
{
    id <HMDCameraSnapshotRemoteRelayReceiverDelegate> _delegate;	// 8 = 0x8
    HMDCameraSnapshotIDSRelayReceiver *_relayReceiver;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x001000000091a5e1
- (void).cxx_destruct;	// IMP=0x000000000091a1a2
@property(retain, nonatomic) HMDCameraSnapshotIDSRelayReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property(nonatomic) __weak id <HMDCameraSnapshotRemoteRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)relayReceiverIDSSessionDidStart:(id)arg1;	// IMP=0x000000000091a10c
- (void)relayReceiverDidAcceptIDSInvitation:(id)arg1;	// IMP=0x000000000091a0c8
- (void)relayReceiver:(id)arg1 didReceiveData:(id)arg2 error:(id)arg3;	// IMP=0x0000000000919e8b
- (void)_callDidSaveImageDelegateWithError:(id)arg1;	// IMP=0x0000000000919c0f
- (void)_callGettingImageDelegate:(id)arg1;	// IMP=0x00000000009199c7
- (void)snapShotSendFailed:(id)arg1;	// IMP=0x000000000091990f
- (void)_getSnapshot:(unsigned long long)arg1;	// IMP=0x0000000000919597
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x000000000091951b
- (id)logIdentifier;	// IMP=0x00000000009194cb
- (void)dealloc;	// IMP=0x00000000009193cc
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8 remoteDevice:(id)arg9;	// IMP=0x00000000009191e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

