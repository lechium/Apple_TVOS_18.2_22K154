//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, VCRedundancyControllerVideo;

__attribute__((visibility("hidden")))
@interface VCVideoStreamReceiveGroup
{
    _Atomic unsigned char _videoPriority;	// 289 = 0x121
    unsigned char _lastVideoPriority;	// 290 = 0x122
    unsigned char _videoQuality;	// 291 = 0x123
    _Bool _remoteVideoPaused;	// 292 = 0x124
    _Bool _isRemoteMediaStalled;	// 293 = 0x125
    _Bool _isVideoDegraded;	// 294 = 0x126
    double _isVideoDegradedStartTime;	// 296 = 0x128
    _Bool _reportedDegradeStatus;	// 304 = 0x130
    unsigned int _visibilityIndex;	// 308 = 0x134
    _Bool _haveReportedPerfTimers;	// 312 = 0x138
    _Bool _isProcessingVideoOptIn;	// 313 = 0x139
    NSNumber *_previousOptedInStreamID;	// 320 = 0x140
    VCRedundancyControllerVideo *_videoRedundancyController;	// 328 = 0x148
    _Bool _isRedundancyRequested;	// 336 = 0x150
    _Bool _isMediaSuspended;	// 337 = 0x151
    double _lastVideoExpectationSwitch;	// 344 = 0x158
    _Bool _isVideoExpected;	// 352 = 0x160
    double _lastRecordedExtendedPoorConnection;	// 360 = 0x168
    double _poorConnectionTotalLength;	// 368 = 0x170
    _Bool _poorConnectionPercentageRegressedFromTelemetrySymptomReported;	// 376 = 0x178
    int _poorConnectionPercentageABCReportingThreshold;	// 380 = 0x17c
    double _startTime;	// 384 = 0x180
    double _didReportSymptomOnPoorConnectionDespiteVideoIsReceived;	// 392 = 0x188
    double _displayLatency;	// 400 = 0x190
    _Bool _shouldConvertSourceRTPTimestamp;	// 408 = 0x198
    unsigned long long _syncUpdateCalled;	// 416 = 0x1a0
    _Bool _remoteVideoEnabled;	// 424 = 0x1a8
}

@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) _Bool isRemoteMediaStalled; // @synthesize isRemoteMediaStalled=_isRemoteMediaStalled;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
- (void)mediaStream:(id)arg1 didReceiveNewMediaKeyIndex:(id)arg2;	// IMP=0x000000000038e4a6
- (void)checkForAndReportPoorConnectionDespiteVideoReceivedForVideoStream:(id)arg1 stallDuration:(double)arg2;	// IMP=0x000000000038e18d
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x000000000038db0a
- (void)checkForExtendedPoorConnectionWithStallDuration:(double)arg1;	// IMP=0x000000000038d877
- (void)vcMediaStream:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;	// IMP=0x000000000038d5ee
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(_Bool)arg2 duration:(double)arg3;	// IMP=0x000000000038d505
- (void)setIsRemoteMediaStalled:(_Bool)arg1 duration:(double)arg2;	// IMP=0x000000000038d1fb
- (void)updateVideoExpected;	// IMP=0x000000000038cfc9
- (void)vcMediaStream:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x000000000038cbd5
- (void)vcMediaStream:(id)arg1 didReceiveFirstFrameWithTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000038c99c
- (void)vcMediaStream:(id)arg1 priorityDidChange:(unsigned char)arg2;	// IMP=0x000000000038c988
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x000000000038c982
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x000000000038c97c
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x000000000038c42b
- (void)setShouldEnableMLEnhance:(_Bool)arg1 streamID:(unsigned short)arg2;	// IMP=0x000000000038c23d
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (void)setVideoDegraded:(_Bool)arg1 duration:(double)arg2;	// IMP=0x000000000038b9ae
- (void)checkAndReportRegressedPoorConnectionPercentage;	// IMP=0x000000000038b68d
- (void)setMediaSuspended:(_Bool)arg1 forStreamToken:(id)arg2;	// IMP=0x000000000038b317
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x000000000038a3ef
- (void)setOptedInStreamID:(id)arg1;	// IMP=0x000000000038a37e
- (void)updateVideoPriority:(unsigned char)arg1;	// IMP=0x000000000038a2a0
- (void)setupVideoPriority;	// IMP=0x000000000038a284
- (void)didStop;	// IMP=0x000000000038a223
- (id)willStart;	// IMP=0x000000000038a1c5
- (void)setVideoStreamDelegate:(id)arg1 delegateFunctions:(const struct tagVCVideoStreamDelegateRealtimeInstanceVTable *)arg2;	// IMP=0x0000000000389bf5
- (_Bool)setSyncSource:(id)arg1;	// IMP=0x00000000003897af
- (void)updateShouldEnableFaceZoom;	// IMP=0x0000000000389527
- (void)setShouldEnableFaceZoom:(_Bool)arg1;	// IMP=0x0000000000389418
- (_Bool)isVideoExpected;	// IMP=0x0000000000389050
- (_Bool)isVisible;	// IMP=0x000000000038903c
- (id)setupRedundancyController;	// IMP=0x0000000000388c67
- (void)willStop;	// IMP=0x0000000000388c55
- (void)didStart;	// IMP=0x0000000000388c43
- (void)resetPerfTimers;	// IMP=0x0000000000388be8
- (void)resetDidReceiveFirstFrame;	// IMP=0x0000000000388ac0
- (void)setExternalRenderLatency:(double)arg1;	// IMP=0x0000000000388846
- (void)setupExternalRenderLatency;	// IMP=0x00000000003887bd
- (void)dealloc;	// IMP=0x00000000003885ca
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000388328

@end

