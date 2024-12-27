//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCBasebandCongestionDetector, VCAudioStreamGroupCommon, VCSystemAudioCaptureSession;

__attribute__((visibility("hidden")))
@interface VCAudioStreamSendGroup
{
    _Bool _isVADFilteringEnabled;	// 569 = 0x239
    _Bool _isCurrentDTXEnabled;	// 570 = 0x23a
    AVCBasebandCongestionDetector *_basebandCongestionDetector;	// 576 = 0x240
    unsigned int _cellularUniqueTag;	// 584 = 0x248
    VCAudioStreamGroupCommon *_common;	// 592 = 0x250
    _Bool _lastEnqueuedStreamUpdateEventWasEmpty;	// 600 = 0x258
    struct opaqueCMSimpleQueue *_audioStreamUpdateEventQueue;	// 608 = 0x260
    struct opaqueCMSimpleQueue *_audioRedundancyChangeEventQueue;	// 616 = 0x268
    struct tagVCMemoryPool *_audioStreamUpdatePool;	// 624 = 0x270
    struct tagVCMemoryPool *_audioRedundancyEventPool;	// 632 = 0x278
    struct tagVCMediaQueue *_mediaQueue;	// 640 = 0x280
    unsigned char _lastAudioPriority;	// 648 = 0x288
    _Bool _forcedAudioPriorityEnabled;	// 649 = 0x289
    unsigned char _forcedAudioPriorityValue;	// 650 = 0x28a
    double _forcedAudioPriorityLastUpdateTime;	// 656 = 0x290
    struct opaqueVCVoiceDetector *_voiceDetector;	// 664 = 0x298
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;	// 672 = 0x2a0
    struct tagVCAudioDucker *_audioDucker;	// 680 = 0x2a8
    _Bool _shouldScheduleMediaQueue;	// 688 = 0x2b0
    float _averageInputPower;	// 692 = 0x2b4
    _Bool _audioControllerSupportsVoiceActivityDetection;	// 696 = 0x2b8
}

@property(readonly) VCAudioStreamGroupCommon *common; // @synthesize common=_common;
@property(nonatomic) unsigned int cellularUniqueTag; // @synthesize cellularUniqueTag=_cellularUniqueTag;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(nonatomic, setter=setCurrentDTXEnabled:) _Bool isCurrentDTXEnabled; // @synthesize isCurrentDTXEnabled=_isCurrentDTXEnabled;
@property(nonatomic, setter=setVADFilteringEnabled:) _Bool isVADFilteringEnabled; // @synthesize isVADFilteringEnabled=_isVADFilteringEnabled;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x00000000001da324
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x00000000001d9d84
- (id)checkStreamsForAdditionalOptIn:(id)arg1;	// IMP=0x00000000001d9b9f
- (id)setupRedundancyControllerForMode:(unsigned int)arg1;	// IMP=0x00000000001d9759
- (void)setMuteOnStreams;	// IMP=0x00000000001d95f5
- (void)stopDynamicDucker;	// IMP=0x00000000001d95cd
- (void)startDynamicDucker;	// IMP=0x00000000001d94e5
- (void)stopVoiceActivityDetection;	// IMP=0x00000000001d94bd
- (void)startVoiceActivityDetection;	// IMP=0x00000000001d9468
- (void)flushAudioRedundancyEventQueue;	// IMP=0x00000000001d941a
- (void)flushAudioEventQueue;	// IMP=0x00000000001d93c1
- (void)cleanupIOEventQueues;	// IMP=0x00000000001d9358
- (_Bool)createIOEventQueues;	// IMP=0x00000000001d8f50
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x00000000001d8f4a
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000001d8f44
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000001d8945
- (id)stopCapture;	// IMP=0x00000000001d8928
- (id)startCapture;	// IMP=0x00000000001d890b
- (_Bool)removeSyncDestination:(id)arg1;	// IMP=0x00000000001d84f0
- (_Bool)addSyncDestination:(id)arg1;	// IMP=0x00000000001d80d5
- (id)activeStreamKeys;	// IMP=0x00000000001d7f80
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;	// IMP=0x00000000001d773c
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;	// IMP=0x00000000001d7641
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000001d75f1
- (_Bool)configureStreams;	// IMP=0x00000000001d72ca
@property(nonatomic, setter=setMuted:) _Bool isMuted;
- (void)didStop;	// IMP=0x00000000001d7131
- (id)willStart;	// IMP=0x00000000001d7075
- (void)updateVoiceActivityEnabled:(_Bool)arg1 isMediaPriorityEnabled:(_Bool)arg2;	// IMP=0x00000000001d6fca
- (void)dispatchedUpdateStreamsWithActiveConnection:(id)arg1;	// IMP=0x00000000001d6b4f
- (void)updateActiveVoiceOnly:(_Bool)arg1;	// IMP=0x00000000001d67c5
@property(setter=setPowerSpectrumEnabled:) _Bool isPowerSpectrumEnabled;
@property(readonly, nonatomic) int deviceRole;
- (_Bool)configureAudioStreams:(id)arg1 deviceRole:(int)arg2 operatingMode:(int)arg3;	// IMP=0x00000000001d5b31
- (_Bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x00000000001d52d8
- (_Bool)startCaptureIfNeeded:(_Bool)arg1;	// IMP=0x00000000001d511e
- (_Bool)stopCaptureForEndToEndStreamIfNeeded;	// IMP=0x00000000001d50b1
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x00000000001d501b
- (void)dealloc;	// IMP=0x00000000001d4f20
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000001d459b

@end

