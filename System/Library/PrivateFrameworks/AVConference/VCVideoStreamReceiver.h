//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, VCMediaStreamStats, VCVideoStreamRateAdaptation, VideoAttributes;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCVideoStreamReceiver
{
    struct tagHANDLE *_hRTP;	// 104 = 0x68
    struct OpaqueCMMemoryPool *_blockBufferMemoryPool;	// 112 = 0x70
    struct __CFAllocator *_blockBufferMemoryPoolAllocator;	// 120 = 0x78
    struct OpaqueVTDecompressionSession *_decompressionSession;	// 128 = 0x80
    struct _opaque_pthread_mutex_t _decompressionSessionMutex;	// 136 = 0x88
    _Bool _receivedFirstPacket;	// 200 = 0xc8
    _Bool _receivedFirstRemoteFrame;	// 201 = 0xc9
    unsigned short _lastSequenceNumber;	// 202 = 0xca
    int _sequenceNumberOutOfOrder;	// 204 = 0xcc
    unsigned char _firSequenceNumber;	// 208 = 0xd0
    double _lastFIRArrivalTime;	// 216 = 0xd8
    VCVideoStreamRateAdaptation *_rateAdaptation;	// 224 = 0xe0
    struct opaqueCMBufferQueue *_videoQueue;	// 232 = 0xe8
    unsigned int _mostRecentTimestamp;	// 240 = 0xf0
    unsigned int _lastVideoTimestamp;	// 244 = 0xf4
    unsigned int _videoTimestampWrapCount;	// 248 = 0xf8
    struct opaqueCMFormatDescription *_formatDescription;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_videoStreamReceiverQueue;	// 264 = 0x108
    struct OpaqueFigThread *_networkReceiveThread;	// 272 = 0x110
    _Bool _runNetworkReceiveThread;	// 280 = 0x118
    int _sRecvReset;	// 284 = 0x11c
    struct VideoPacketBuffer_t *_videoPacketBuffer;	// 288 = 0x120
    VideoAttributes *_remoteVideoAttributes;	// 296 = 0x128
    int _remoteVideoCamera;	// 304 = 0x130
    _Bool _remoteVideoMirrored;	// 308 = 0x134
    _Bool _enableCVO;	// 309 = 0x135
    unsigned long long _cvoExtensionID;	// 312 = 0x138
    unsigned long long _lastKeyFrameSampleBufferSize;	// 320 = 0x140
    CDStruct_1b6d18a9 _lastFrameTime;	// 328 = 0x148
    CDStruct_1b6d18a9 _lastDisplayTime;	// 352 = 0x160
    VCMediaStreamStats *_stats;	// 376 = 0x178
    double _reportingIntervalStartTime;	// 384 = 0x180
    double _reportingLastUpdateTime;	// 392 = 0x188
    unsigned int _receivedBytes;	// 400 = 0x190
    unsigned int _videoStallDurationMillis;	// 404 = 0x194
    double _videoStallStartTime;	// 408 = 0x198
    struct opaqueRTCReporting *_reportingAgent;	// 416 = 0x1a0
    int _reportingModuleID;	// 424 = 0x1a8
    _Bool _enableReceiveBitstreamDump;	// 428 = 0x1ac
    struct OpaqueVCTransportStreamRunLoop *_runLoop;	// 432 = 0x1b0
    void *_rtcpContext;	// 440 = 0x1b8
    CDUnknownFunctionPointerType _rtcpPacketsCallback;	// 448 = 0x1c0
}

- (void)setLooseAVSyncEnabled:(_Bool)arg1;	// IMP=0x000000000017ac9f
- (void)setDeferredAssemblyEnabled:(_Bool)arg1;	// IMP=0x000000000017abe4
- (void)setJitterBufferMode:(int)arg1;	// IMP=0x000000000017ab29
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000017aa6e
- (void)reportingVideoStreamEvent:(unsigned short)arg1;	// IMP=0x000000000017a89d
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x000000000017a0a0
- (int)showDecodedFrame:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000179ff2
- (_Bool)handleRemoteVideoAttributesChange:(struct __CVBuffer *)arg1;	// IMP=0x0000000000179ec5
- (void)handleAlarmForTimeStamp:(unsigned int)arg1;	// IMP=0x0000000000179e4f
- (void)dequeueAndDecodeForTimestamp:(unsigned int)arg1;	// IMP=0x0000000000179c50
- (_Bool)canDequeue:(struct opaqueCMBufferQueue *)arg1 forTimestamp:(unsigned int)arg2;	// IMP=0x0000000000179a1b
- (int)decodeFrame:(struct opaqueCMSampleBuffer *)arg1 showFrame:(_Bool)arg2;	// IMP=0x0000000000179860
- (void)teardownDecodeSession:(_Bool)arg1;	// IMP=0x00000000001797f4
- (int)createDecodeSession:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x0000000000179343
- (void)updateVideoStallStatus:(_Bool)arg1;	// IMP=0x0000000000179292
- (void)reportVideoStallStatus:(_Bool)arg1;	// IMP=0x0000000000179181
- (int)scheduleDecodeForFrameWithBuffer:(struct VCVideoReceiverSampleBuffer_t *)arg1 timestamp:(unsigned int)arg2 hostTime:(double)arg3 showFrame:(_Bool)arg4;	// IMP=0x0000000000178c30
- (int)processVideoRTCP;	// IMP=0x0000000000177b3f
- (void)processReceptionReportBlock:(struct tagRTCP_RRB *)arg1 blockCount:(unsigned int)arg2 arrivalNTPTime:(union tagNTP)arg3;	// IMP=0x0000000000177915
- (void)rtcpSendIntervalElapsed;	// IMP=0x00000000001776dc
- (int)processVideoRTP;	// IMP=0x0000000000176e4f
- (struct tagVCVideoPacketBufferConfig)newVideoPacketBufferConfig:(struct _RTPMediaPacket *)arg1;	// IMP=0x0000000000176da9
- (void)scheduleVideoDecode:(unsigned int)arg1;	// IMP=0x0000000000176d4d
- (void)scheduleDecodeForTimestamp:(unsigned int)arg1;	// IMP=0x0000000000176941
- (void)updateSequenceNumber:(unsigned short)arg1;	// IMP=0x00000000001767f8
- (void *)networkReceivePackets;	// IMP=0x00000000001766e3
- (int)stopNetworkReceiveThread;	// IMP=0x0000000000176577
- (int)startNetworkReceiveThread;	// IMP=0x000000000017627f
- (void)updateSourcePlayoutTime:(const struct tagVCMediaTime *)arg1;	// IMP=0x0000000000176279
- (void)setSyncSource:(id)arg1;	// IMP=0x0000000000176262
- (id)syncSource;	// IMP=0x000000000017624e
- (void)stopSynchronization;	// IMP=0x00000000001761e5
- (_Bool)startSynchronization:(id)arg1;	// IMP=0x00000000001760c9
- (void)pauseVideo;	// IMP=0x00000000001760c3
- (void)stopVideo;	// IMP=0x0000000000176045
- (void)startVideo;	// IMP=0x0000000000175fe5
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;	// IMP=0x0000000000175fc8
- (void)setEnableCVO:(_Bool)arg1 cvoExtensionID:(unsigned long long)arg2;	// IMP=0x0000000000175fad
- (void)dealloc;	// IMP=0x0000000000175e05
- (id)initWithConfig:(struct tagVCVideoStreamReceiverConfig *)arg1;	// IMP=0x0000000000175acc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

