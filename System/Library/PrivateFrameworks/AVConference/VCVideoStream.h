//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, NSNumber, NSObject, NSString, VCRedundancyControllerVideo, VCVideoCaptureConverter, VCVideoReceiverBase, VCVideoRule, VCVideoTransmitterBase, VideoAttributes;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, VCVideoReceiverFeedbackDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoStream
{
    long long _type;	// 672 = 0x2a0
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;	// 680 = 0x2a8
    unsigned int _uplinkOperatingBitrate;	// 688 = 0x2b0
    struct __CVBuffer *_cachedRemoteVideoFrame;	// 696 = 0x2b8
    VCVideoTransmitterBase *_videoTransmitter;	// 704 = 0x2c0
    VCVideoReceiverBase *_videoReceiver;	// 712 = 0x2c8
    VCVideoRule *_videoRule;	// 720 = 0x2d0
    int _reportingModuleID;	// 728 = 0x2d8
    unsigned int _reportingDefaultRealtimePeriod;	// 732 = 0x2dc
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;	// 736 = 0x2e0
    struct opaqueCMBufferQueue *_bufferQueue;	// 744 = 0x2e8
    VCVideoCaptureConverter *_captureConverter;	// 752 = 0x2f0
    _Bool _isServerBasedBandwidthProbingEnabled;	// 760 = 0x2f8
    _Bool _isEndToEndBasedBandwidthProbingEnabled;	// 761 = 0x2f9
    unsigned char _lastMediaPriority;	// 762 = 0x2fa
    NSNumber *_targetStreamID;	// 768 = 0x300
    unsigned short _currentStreamID;	// 776 = 0x308
    NSNumber *_sendingStreamID;	// 784 = 0x310
    _Bool _isCompoundStreamIDsIncreased;	// 792 = 0x318
    _Bool _shouldEnableFaceZoom;	// 793 = 0x319
    _Bool _didReceiveFirstFrame;	// 794 = 0x31a
    _Bool _shouldCacheRemoteVideoFrame;	// 795 = 0x31b
    _Atomic _Bool _isVideoCaptureRegistered;	// 796 = 0x31c
    double _fecRatio;	// 800 = 0x320
    int _captureSource;	// 808 = 0x328
    int _streamInputCaptureSource;	// 812 = 0x32c
    long long _captureSourceID;	// 816 = 0x330
    unsigned int _mediaQueueSizeInMillisecond;	// 824 = 0x338
    unsigned int _screenDisplayID;	// 828 = 0x33c
    unsigned int _customWidth;	// 832 = 0x340
    unsigned int _customHeight;	// 836 = 0x344
    unsigned int _tilesPerFrame;	// 840 = 0x348
    unsigned int _initialTargetBitrate;	// 844 = 0x34c
    struct OpaqueFigCFWeakReference *_weakStream;	// 848 = 0x350
    AVCStatisticsCollector *_statisticsCollector;	// 856 = 0x358
    VCRedundancyControllerVideo *_redundancyController;	// 864 = 0x360
    int _lastDisplayedFromImageQueueCount;	// 872 = 0x368
    int _lastDroppedFromImageQueueCount;	// 876 = 0x36c
    double _lastDecodedVideoFrameTime;	// 880 = 0x370
    double _lastStatisticsCollectorVideoStallTotalUpdateTime;	// 888 = 0x378
    _Bool _isRemoteMediaStalled;	// 896 = 0x380
    double _lastMediaStallReportTime;	// 904 = 0x388
    double _mediaStallTimeout;	// 912 = 0x390
    double _mediaStallReportRepeatInterval;	// 920 = 0x398
    _Bool _sendContinuousStallMessages;	// 928 = 0x3a0
    unsigned int _rtpTimestampRate;	// 932 = 0x3a4
    unsigned short _temporalScalingBaseLayerStreamID;	// 936 = 0x3a8
    _Bool _isTemporalScalingEnabled;	// 938 = 0x3aa
    CDStruct_1b6d18a9 _lastSentFrameHostTimeBeforeStop;	// 940 = 0x3ac
    unsigned int _lastSentFrameRTPTimestampBeforeStop;	// 964 = 0x3c4
    id _videoStreamDelegate;	// 968 = 0x3c8
    struct tagVCVideoStreamDelegateRealtimeInstanceVTable _videoStreamDelegateFunctions;	// 976 = 0x3d0
    struct __CFDictionary *_colorInfo;	// 984 = 0x3d8
    unsigned int _baseQualityIndex;	// 992 = 0x3e0
    unsigned int _cachedConnectionMTU;	// 996 = 0x3e4
    unsigned int _constantTransportOverhead;	// 1000 = 0x3e8
    double _externalOutputVideoLatency;	// 1008 = 0x3f0
    double _initTime;	// 1016 = 0x3f8
    _Bool _haveReportedPerfTimers;	// 1024 = 0x400
    VideoAttributes *_cachedRemoteScreenAttributes;	// 1032 = 0x408
}

+ (_Bool)shouldRegisterReportingForStreamType:(long long)arg1;	// IMP=0x0010000000429cb4
+ (_Bool)shouldEnableRateControlForStreamType:(long long)arg1;	// IMP=0x0010000000429c9a
+ (_Bool)isFeatureListStringExpectedForStreamType:(long long)arg1;	// IMP=0x0010000000429c80
+ (_Bool)isLowLatencyStreamType:(long long)arg1;	// IMP=0x0010000000429c3f
+ (id)capabilities;	// IMP=0x0010000000427e92
+ (id)supportedVideoPayloads;	// IMP=0x0010000000427e85
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0010000000427505
+ (_Bool)shouldUseRandomRTPTimestampWithType:(long long)arg1;	// IMP=0x001000000042686d
+ (id)newFeatureListStringsWithConfiguration:(id)arg1;	// IMP=0x0010000000422125
@property(readonly, nonatomic) _Bool isTemporalScalingEnabled; // @synthesize isTemporalScalingEnabled=_isTemporalScalingEnabled;
@property(readonly) VCVideoTransmitterBase *videoTransmitter; // @synthesize videoTransmitter=_videoTransmitter;
@property(readonly) VCVideoReceiverBase *videoReceiver; // @synthesize videoReceiver=_videoReceiver;
@property(nonatomic) unsigned int customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned int customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) _Bool shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property(readonly, nonatomic) _Bool isCompoundStreamIDsIncreased; // @synthesize isCompoundStreamIDsIncreased=_isCompoundStreamIDsIncreased;
@property(readonly, nonatomic) NSNumber *sendingStreamID; // @synthesize sendingStreamID=_sendingStreamID;
@property(nonatomic) _Bool isEndToEndBasedBandwidthProbingEnabled; // @synthesize isEndToEndBasedBandwidthProbingEnabled=_isEndToEndBasedBandwidthProbingEnabled;
@property(nonatomic) _Bool isServerBasedBandwidthProbingEnabled; // @synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
- (void)reportStreamPerfTimings;	// IMP=0x00000000004334f4
- (void)updateSourcePlayoutTime:(const struct tagVCMediaTime *)arg1;	// IMP=0x0000000000432ec6
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x0000000000432e99
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x0000000000432c78
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x0000000000432c72
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x0000000000432c38
- (void)rateAdaptation:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x0000000000432923
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000043280b
- (void)collectTxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000004327dc
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000004327ad
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x0000000000432790
- (void)reactionDidStart:(id)arg1;	// IMP=0x000000000043278a
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x00000000004326cf
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x000000000043249f
- (id)clientCaptureRule;	// IMP=0x000000000043248e
- (void)avConferenceScreenCaptureError:(id)arg1;	// IMP=0x00000000004322f9
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x0000000000432164
- (CDUnknownBlockType)copyOnVideoFrameBlock;	// IMP=0x00000000004320a3
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x0000000000432086
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x0000000000431fd0
- (void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x0000000000431e9f
- (unsigned int)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;	// IMP=0x0000000000431d06
- (void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;	// IMP=0x0000000000431c07
- (void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;	// IMP=0x00000000004317df
- (void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;	// IMP=0x0000000000431551
@property(nonatomic, getter=getVideoReceiverFeedbackDelegate) id <VCVideoReceiverFeedbackDelegate> videoReceiverFeedbackDelegate;
- (void)stopSynchronization;	// IMP=0x000000000043148e
- (_Bool)startSynchronization:(id)arg1;	// IMP=0x0000000000431471
- (struct __CFDictionary *)getClientSpecificUserInfo;	// IMP=0x000000000042ff51
- (_Bool)isClientSpecificUserInfoSupported:(int)arg1;	// IMP=0x000000000042ff38
- (int)reportVideoStreamType;	// IMP=0x000000000042fea8
- (struct __CFString *)getReportingClientName;	// IMP=0x000000000042fd50
- (struct __CFString *)getReportingServiceName;	// IMP=0x000000000042fd0f
- (int)screenSharingReportingClientType;	// IMP=0x000000000042fc6e
- (int)remoteCameraReportingClientType;	// IMP=0x000000000042fc34
@property(nonatomic) _Bool didReceiveFirstFrame;
- (void)setVideoStreamDelegate:(id)arg1 delegateFunctions:(const struct tagVCVideoStreamDelegateRealtimeInstanceVTable *)arg2;	// IMP=0x000000000042fab3
- (void)handleVTPSendFailedWithData:(void *)arg1;	// IMP=0x000000000042fa46
@property(nonatomic) unsigned int targetBitrateChangeCounter;
@property(nonatomic) unsigned int targetEncoderBitrate;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
- (void)setPeerSubscribedStreamIDs:(id)arg1;	// IMP=0x000000000042f17c
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x000000000042e809
- (void)setTransmitterStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x000000000042e137
- (unsigned int)getMaxTemporalBitrateForStreamIDs:(id)arg1;	// IMP=0x000000000042ddc3
- (double)rtcpHeartbeatLeeway;	// IMP=0x000000000042ddb5
- (void)onSendRTCPPacket;	// IMP=0x000000000042dcbb
- (void)onRTCPTimeout;	// IMP=0x000000000042dca8
- (void)onRTPTimeout;	// IMP=0x000000000042dc95
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042daf1
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042d960
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042d5ba
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042cf71
- (void)setupInternalRedundancyControllerWithStreamConfig:(id)arg1;	// IMP=0x000000000042cd7c
- (_Bool)shouldReportNetworkInterfaceType;	// IMP=0x000000000042cd6a
- (_Bool)isTransportIPv6;	// IMP=0x000000000042cc66
@property(readonly) unsigned int networkMTU;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x000000000042cae1
- (void)setupReportingAgent;	// IMP=0x000000000042c529
- (void)collectImageQueuePerformanceMetrics:(struct __CFDictionary *)arg1;	// IMP=0x000000000042c523
- (_Bool)registerForVideoCapture;	// IMP=0x000000000042c4be
- (_Bool)registerForCameraCaptureWithConfig:(id)arg1;	// IMP=0x000000000042c188
- (void)reportFailedToRegisterVideoFramesFromSource:(int)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4;	// IMP=0x000000000042c068
- (void)deregisterForVideoCapture;	// IMP=0x000000000042c056
- (int)operatingModeForVideoStreamType:(long long)arg1;	// IMP=0x000000000042c036
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000042aacf
- (void)configureMediaStallSettingsWithConfig:(id)arg1;	// IMP=0x000000000042a9d3
- (unsigned int)maxFramerateFromStreamConfigs:(id)arg1;	// IMP=0x000000000042a637
- (_Bool)configureStreamInputCaptureSourceWithStreamInputID:(long long)arg1 frameRate:(unsigned int)arg2;	// IMP=0x000000000042a62f
- (void)deregisterCurrentStreamInputCaptureSource;	// IMP=0x000000000042a629
- (id)getReceiveStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x000000000042a59d
- (id)getTransmitStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x000000000042a538
- (id)getTransmitMediaControllerWithStreamConfig:(id)arg1;	// IMP=0x000000000042a4ea
- (void)onCallIDChanged;	// IMP=0x000000000042a4e4
- (id)supportedPayloads;	// IMP=0x000000000042a4cb
@property(readonly) double videoRxFrameRate;
@property(readonly, nonatomic) double activeVideoStallDuration;
- (void)setUplinkRetransmissionEnabled:(_Bool)arg1;	// IMP=0x000000000042a379
- (void)setLooseAVSyncEnabled:(_Bool)arg1;	// IMP=0x000000000042a35c
- (void)setDeferredAssemblyEnabled:(_Bool)arg1;	// IMP=0x000000000042a33f
- (void)setJitterBufferMode:(int)arg1;	// IMP=0x000000000042a322
- (_Bool)enableRateControlFeebackInConfig:(id)arg1;	// IMP=0x000000000042a17e
- (_Bool)setEncodingMode:(int)arg1;	// IMP=0x000000000042a06a
- (_Bool)validateStreamConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000429cce
- (_Bool)isLowLatencyStreamType;	// IMP=0x0000000000429c59
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (void)setShouldEnableMLEnhance:(_Bool)arg1 streamID:(unsigned short)arg2;	// IMP=0x0000000000429b03
- (void)cleanupBeforeReconfigure:(id)arg1;	// IMP=0x00000000004290f2
- (_Bool)validateVideoStreamConfigurations:(id)arg1;	// IMP=0x0000000000428fe4
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg1;	// IMP=0x0000000000428f92
- (void)setFECRedundancyVector:(const CDStruct_d7e2e0ee *)arg1;	// IMP=0x0000000000428f75
@property(nonatomic) double fecRatio;
- (void)generateKeyFrameWithFIRType:(int)arg1;	// IMP=0x0000000000428b1b
- (void)resetRemoteMediaStalled;	// IMP=0x0000000000428905
- (void)requestLastDecodedFrame;	// IMP=0x000000000042886f
- (void)updateVideoConfig:(id)arg1;	// IMP=0x000000000042803a
- (void)dealloc;	// IMP=0x0000000000427c1f
- (void)setupVideoStream;	// IMP=0x00000000004279aa
- (id)initWithTransportSessionID:(unsigned int)arg1 idsParticipantID:(unsigned long long)arg2 ssrc:(unsigned int)arg3 streamToken:(long long)arg4;	// IMP=0x00000000004276ab
- (id)init;	// IMP=0x0000000000427616
- (double)lastReceivedRTCPPacketTime;	// IMP=0x00000000004275f9
- (double)lastReceivedRTPPacketTime;	// IMP=0x00000000004275dc
- (_Bool)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;	// IMP=0x000000000042754a
- (void)updateShouldCacheRemoteVideoFrame;	// IMP=0x000000000042751e
- (void)setupVideoTransmitterConfigColorInfo:(id)arg1;	// IMP=0x00000000004273f4
- (void)setupColorInfo:(id)arg1;	// IMP=0x0000000000426893
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x0000000000426850
- (void)handleNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;	// IMP=0x00000000004267f7
- (void)handleNWConnectionNotification:(struct tagVCNWConnectionNotification *)arg1;	// IMP=0x00000000004267ab
- (struct tagVCVideoReceiverDelegateRealtimeInstanceVTable)videoReceiverDelegateFunctions;	// IMP=0x00000000004264fc
- (void)stopRateAdaptation;	// IMP=0x000000000042647b
- (void)startRateAdaptationWithStreamConfig:(id)arg1;	// IMP=0x0000000000425e8d
- (void)enableRedundancyController:(id)arg1;	// IMP=0x0000000000425bc8
- (unsigned int)dumpIDFromCallID;	// IMP=0x0000000000425af5
- (void)setupCompoundStreamIDsWithStreamIDs:(id)arg1;	// IMP=0x000000000042550e
- (void)destroyVideoModules;	// IMP=0x0000000000425420
- (void)destroyVideoReceiver;	// IMP=0x0000000000425315
- (void)updateVideoReceiver:(id)arg1;	// IMP=0x0000000000425170
- (_Bool)useUEPForVideoConfig:(int)arg1;	// IMP=0x00000000004250b4
- (void)setupVideoReceiver:(id)arg1 withTransmitterHandle:(struct tagHANDLE *)arg2;	// IMP=0x0000000000424899
- (struct tagVCNACKGeneratorStoreBagsConfig)readServerPacketRetransmissionsForVideoStoreBagConfig:(id)arg1;	// IMP=0x0000000000424158
- (struct tagVCVideoReceiverConfig)videoReceiverConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x0000000000422fd0
- (struct tagVCVideoStreamReceiverConfig)videoStreamReceiverConfigWithDumpID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;	// IMP=0x0000000000422ef0
- (void)cleaunpReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1;	// IMP=0x0000000000422ea7
- (void)addReceiverStreamConfigsToReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 streamConfig:(id)arg2;	// IMP=0x0000000000422cb1
- (void)setupMultiwayVideoReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x0000000000422946
- (void)setupMultiwayVideoReceiverStreamSwitchInfo:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x000000000042281f
- (void)setupMultiwayVideoReceiverTemporalScalingConfig:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x0000000000422755
- (_Bool)isScreenConfig:(id)arg1;	// IMP=0x00000000004226e8
- (int)pickScreenDisplayMode;	// IMP=0x00000000004226af
- (id)newScreenCaptureConfigForVideoConfig:(id)arg1;	// IMP=0x00000000004221e2
- (void)setVideoExpected:(_Bool)arg1;	// IMP=0x00000000004221dc
- (void)destroyVideoTransmitter;	// IMP=0x000000000042200a
- (void)initVideoTransmitter;	// IMP=0x00000000004219fa
- (id)newVideoTransmitterConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x0000000000420249
- (void)overrideConfigWithDefaults:(id)arg1;	// IMP=0x00000000004200c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

