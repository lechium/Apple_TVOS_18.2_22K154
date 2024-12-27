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

+ (id)_createLocalStreamAndRTPSocket:(int *)arg1 localNetworkConfig:(id)arg2;	// IMP=0x0010000000360d66
+ (int)_createLocalRTPSocketWithRemoteSender:(id)arg1 localNetworkConfig:(id)arg2;	// IMP=0x0010000000360bb8
+ (id)_createStreamWithRemoteSocketReceiver:(id)arg1;	// IMP=0x0010000000360944
+ (id)_createStreamWithRemoteDestinationReceiver:(id)arg1;	// IMP=0x00100000003606bd
+ (id)_createVideoStreamWithSessionHandler:(id)arg1 localNetworkConfig:(id)arg2 localRTPSocket:(int *)arg3;	// IMP=0x0010000000360404
+ (id)logCategory;	// IMP=0x00100000003603d4
- (void).cxx_destruct;	// IMP=0x000000000035fc42
@property(retain) HMFOSTransaction *snapshotDataTransaction; // @synthesize snapshotDataTransaction=_snapshotDataTransaction;
@property(readonly) id <HMDVideoStreamInterfaceDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDVideoStreamReconfigure *videoStreamReconfigure; // @synthesize videoStreamReconfigure=_videoStreamReconfigure;
@property(readonly) id <HMDAVCVideoStream> videoStream; // @synthesize videoStream=_videoStream;
@property __weak id <HMDVideoStreamLastDecodedFrameDelegate> snapshotDelegate; // @synthesize snapshotDelegate=_snapshotDelegate;
@property __weak id <HMDVideoStreamInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)videoStreamReconfigureDidNetworkImprove:(id)arg1;	// IMP=0x000000000035fb2c
- (void)videoStreamReconfigureDidNetworkDeteriorate:(id)arg1;	// IMP=0x000000000035fad9
- (void)streamDidRTCPTimeOut:(id)arg1;	// IMP=0x000000000035fa68
- (void)streamDidRTPTimeOut:(id)arg1;	// IMP=0x000000000035f9f7
- (void)streamDidServerDie:(id)arg1;	// IMP=0x000000000035f986
- (void)streamDidStop:(id)arg1;	// IMP=0x000000000035f915
- (void)stream:(id)arg1 didGetLastDecodedFrame:(id)arg2;	// IMP=0x000000000035f85d
- (void)stream:(id)arg1 downlinkQualityDidChange:(id)arg2;	// IMP=0x000000000035f7a5
- (void)stream:(id)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000035f6ee
- (void)stream:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000035f637
- (void)_callDidGetLastDecodedFrame:(id)arg1;	// IMP=0x000000000035f3a4
- (void)_callDidUpdateConfiguration;	// IMP=0x000000000035f251
- (void)_callNetworkDeteriorated;	// IMP=0x000000000035f0fe
- (void)_callNetworkImproved;	// IMP=0x000000000035efab
- (void)_callStopped:(id)arg1;	// IMP=0x000000000035ee28
- (void)_callStarted:(id)arg1;	// IMP=0x000000000035eca6
- (void)captureSnapshot;	// IMP=0x000000000035eb2c
- (void)stopStream;	// IMP=0x000000000035e9f0
- (void)updateStreamConfiguration:(id)arg1;	// IMP=0x000000000035e832
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x000000000035e7b1
- (void)startStreamWithConfig:(id)arg1;	// IMP=0x000000000035e3dc
@property(readonly, nonatomic) NSNumber *streamToken;
@property(readonly, nonatomic) NSNumber *syncSource;
- (void)dealloc;	// IMP=0x000000000035e194
- (id)logIdentifier;	// IMP=0x000000000035e144
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 sessionHandler:(id)arg4 videoStream:(id)arg5 localRTPSocket:(int)arg6 videoStreamReconfigure:(id)arg7 dataSource:(id)arg8;	// IMP=0x000000000035e029
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 sessionHandler:(id)arg4 localNetworkConfig:(id)arg5;	// IMP=0x000000000035ddc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

