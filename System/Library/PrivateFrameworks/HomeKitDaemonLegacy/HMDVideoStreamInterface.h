//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDVideoStreamReconfigure, HMFOSTransaction, NSNumber, NSString;
@protocol HMDAVCVideoStream, HMDVideoStreamInterfaceDataSource, HMDVideoStreamInterfaceDelegate, HMDVideoStreamLastDecodedFrameDelegate;

__attribute__((visibility("hidden")))
@interface HMDVideoStreamInterface
{
    id <HMDVideoStreamInterfaceDelegate> _delegate;	// 8 = 0x8
    id <HMDVideoStreamLastDecodedFrameDelegate> _snapshotDelegate;	// 16 = 0x10
    id <HMDAVCVideoStream> _videoStream;	// 24 = 0x18
    HMDVideoStreamReconfigure *_videoStreamReconfigure;	// 32 = 0x20
    id <HMDVideoStreamInterfaceDataSource> _dataSource;	// 40 = 0x28
    HMFOSTransaction *_snapshotDataTransaction;	// 48 = 0x30
}

+ (id)_createLocalStreamAndRTPSocket:(int *)arg1 localNetworkConfig:(id)arg2;	// IMP=0x001000000022f5fb
+ (int)_createLocalRTPSocketWithRemoteSender:(id)arg1 localNetworkConfig:(id)arg2;	// IMP=0x001000000022f44d
+ (id)_createStreamWithRemoteSocketReceiver:(id)arg1;	// IMP=0x001000000022f1d9
+ (id)_createStreamWithRemoteDestinationReceiver:(id)arg1;	// IMP=0x001000000022ef52
+ (id)_createVideoStreamWithSessionHandler:(id)arg1 localNetworkConfig:(id)arg2 localRTPSocket:(int *)arg3;	// IMP=0x001000000022ec99
+ (id)logCategory;	// IMP=0x001000000022ec69
- (void).cxx_destruct;	// IMP=0x000000000022e4d7
@property(retain) HMFOSTransaction *snapshotDataTransaction; // @synthesize snapshotDataTransaction=_snapshotDataTransaction;
@property(readonly) id <HMDVideoStreamInterfaceDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDVideoStreamReconfigure *videoStreamReconfigure; // @synthesize videoStreamReconfigure=_videoStreamReconfigure;
@property(readonly) id <HMDAVCVideoStream> videoStream; // @synthesize videoStream=_videoStream;
@property __weak id <HMDVideoStreamLastDecodedFrameDelegate> snapshotDelegate; // @synthesize snapshotDelegate=_snapshotDelegate;
@property __weak id <HMDVideoStreamInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)videoStreamReconfigureDidNetworkImprove:(id)arg1;	// IMP=0x000000000022e3c1
- (void)videoStreamReconfigureDidNetworkDeteriorate:(id)arg1;	// IMP=0x000000000022e36e
- (void)streamDidRTCPTimeOut:(id)arg1;	// IMP=0x000000000022e2fd
- (void)streamDidRTPTimeOut:(id)arg1;	// IMP=0x000000000022e28c
- (void)streamDidServerDie:(id)arg1;	// IMP=0x000000000022e21b
- (void)streamDidStop:(id)arg1;	// IMP=0x000000000022e1aa
- (void)stream:(id)arg1 didGetLastDecodedFrame:(id)arg2;	// IMP=0x000000000022e0f2
- (void)stream:(id)arg1 downlinkQualityDidChange:(id)arg2;	// IMP=0x000000000022e03a
- (void)stream:(id)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000022df83
- (void)stream:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000022decc
- (void)_callDidGetLastDecodedFrame:(id)arg1;	// IMP=0x000000000022dc39
- (void)_callDidUpdateConfiguration;	// IMP=0x000000000022dae6
- (void)_callNetworkDeteriorated;	// IMP=0x000000000022d993
- (void)_callNetworkImproved;	// IMP=0x000000000022d840
- (void)_callStopped:(id)arg1;	// IMP=0x000000000022d6bd
- (void)_callStarted:(id)arg1;	// IMP=0x000000000022d53b
- (void)captureSnapshot;	// IMP=0x000000000022d3c1
- (void)stopStream;	// IMP=0x000000000022d285
- (void)updateStreamConfiguration:(id)arg1;	// IMP=0x000000000022d0c7
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x000000000022d046
- (void)startStreamWithConfig:(id)arg1;	// IMP=0x000000000022cc71
@property(readonly, nonatomic) NSNumber *streamToken;
@property(readonly, nonatomic) NSNumber *syncSource;
- (void)dealloc;	// IMP=0x000000000022ca29
- (id)logIdentifier;	// IMP=0x000000000022c9d9
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 sessionHandler:(id)arg4 videoStream:(id)arg5 localRTPSocket:(int)arg6 videoStreamReconfigure:(id)arg7 dataSource:(id)arg8;	// IMP=0x000000000022c8be
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 sessionHandler:(id)arg4 localNetworkConfig:(id)arg5;	// IMP=0x000000000022c659

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

