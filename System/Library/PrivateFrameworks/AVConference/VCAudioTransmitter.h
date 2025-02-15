//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSArray, NSDictionary, NSMutableArray, NSString, VCAudioPayload, VCAudioPayloadConfig, VCAudioRedBuilder, VCAudioTier, VCAudioTierPicker, VCPacketBundler, VCRedundancyControllerAudio, VCTransportSession;
@protocol VCAudioTransmitterDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject
{
    VCPacketBundler *_audioBundler;	// 8 = 0x8
    VCPacketBundler *_audioBundlerShortRED;	// 16 = 0x10
    VCAudioRedBuilder *_redBuilder;	// 24 = 0x18
    VCRedundancyControllerAudio *_redundancyController;	// 32 = 0x20
    struct opaqueVCAudioBufferList *_encodeBuffer;	// 40 = 0x28
    _Bool _lastIsTalking;	// 48 = 0x30
    double _lastTierSwitch;	// 56 = 0x38
    double _audioInterval;	// 64 = 0x40
    int _audioTierChangeRequestCount;	// 72 = 0x48
    int _audioTxBitrate;	// 76 = 0x4c
    int _actualAudioSendingBitrate;	// 80 = 0x50
    int _actualAudioSendingBitrateNoRED;	// 84 = 0x54
    unsigned int _lastSentAudioSampleTime;	// 88 = 0x58
    unsigned char _inputMeter;	// 92 = 0x5c
    unsigned int _maxAudioPacketSize;	// 96 = 0x60
    unsigned int _constantTransportOverhead;	// 100 = 0x64
    long long _blockSize;	// 104 = 0x68
    float _blockSeconds;	// 112 = 0x70
    double _lastUpdateQualityIndicator;	// 120 = 0x78
    int _qualityIndicator;	// 128 = 0x80
    VCAudioTierPicker *_audioTierPicker;	// 136 = 0x88
    VCAudioTier *_currentAudioTier;	// 144 = 0x90
    VCAudioTier *_requestedAudioTier;	// 152 = 0x98
    char *_lastInputSampleBuffer;	// 160 = 0xa0
    unsigned int _lastInputSampleBufferSize;	// 168 = 0xa8
    int _audioHeaderSize;	// 172 = 0xac
    _Bool _sendSilenceSamplesEnabled;	// 176 = 0xb0
    double _firstSilencePacketTimeStamp;	// 184 = 0xb8
    _Bool _audioTierHysteresis;	// 192 = 0xc0
    void *_packetThread;	// 200 = 0xc8
    unsigned int _targetBitrate;	// 208 = 0xd0
    unsigned int _rateChangeCounter;	// 212 = 0xd4
    unsigned int _currentTargetBitrate;	// 216 = 0xd8
    unsigned int _currentDuplication;	// 220 = 0xdc
    unsigned int _redundancyPercentage;	// 224 = 0xe0
    double _redundancyInterval;	// 232 = 0xe8
    unsigned int _redundancyControllerNumPayloads;	// 240 = 0xf0
    unsigned int _redundancyControllerMaxDelay20ms;	// 244 = 0xf4
    AVCStatisticsCollector *_statisticsCollector;	// 248 = 0xf8
    _Bool _isAudioStalled;	// 256 = 0x100
    unsigned int _sentAudioBytes;	// 260 = 0x104
    unsigned int _encodedBytes;	// 264 = 0x108
    unsigned int _totalTxAudioBytes;	// 268 = 0x10c
    unsigned int _estimateTxAudioBytes;	// 272 = 0x110
    unsigned int _audioFrameCounter;	// 276 = 0x114
    unsigned int _silenceFrameCounter;	// 280 = 0x118
    unsigned int _vadSegmentCounter;	// 284 = 0x11c
    struct tagHANDLE *_rtpHandle;	// 288 = 0x120
    struct tagHANDLE *_afrc;	// 296 = 0x128
    struct tagHANDLE *_mediaQueue;	// 304 = 0x130
    struct tagHANDLE *_rtpVideo;	// 312 = 0x138
    void *_controlInfoGenerator;	// 320 = 0x140
    _Bool _useRateControl;	// 328 = 0x148
    _Bool _isUseCaseWatchContinuity;	// 329 = 0x149
    _Bool _allowAudioSwitching;	// 330 = 0x14a
    _Bool _supportsAdaptation;	// 331 = 0x14b
    _Bool _needsPacketThread;	// 332 = 0x14c
    _Bool _isLocalCellular_LowestConnectionQuality;	// 333 = 0x14d
    _Bool _isRemoteCellular_LowestConnectionQuality;	// 334 = 0x14e
    _Bool _isConnectedOnIPv6_LowestConnectionQuality;	// 335 = 0x14f
    _Bool _isRedEnabled;	// 336 = 0x150
    _Bool _includeRedSequenceOffset;	// 337 = 0x151
    unsigned int _redNumPayloads;	// 340 = 0x154
    unsigned int _redMaxDelay20ms;	// 344 = 0x158
    _Bool _transmitROC;	// 348 = 0x15c
    NSMutableArray *_audioPayloads;	// 352 = 0x160
    VCAudioPayload *_currentDTXPayload;	// 360 = 0x168
    VCAudioPayload *_currentAudioPayload;	// 368 = 0x170
    int _currentRedPayloadType;	// 376 = 0x178
    unsigned int _currentAudioCap;	// 380 = 0x17c
    struct tagVCAudioFrameFormat _inputFormat;	// 384 = 0x180
    struct opaqueRTCReporting *_reportingAgent;	// 432 = 0x1b0
    int _reportingModuleID;	// 440 = 0x1b8
    int _operatingMode;	// 444 = 0x1bc
    VCTransportSession *_transportSession;	// 448 = 0x1c0
    id _delegate;	// 456 = 0x1c8
    _Bool _ignoreSilence;	// 464 = 0x1d0
    unsigned int _tierNetworkBitrate;	// 468 = 0x1d4
    _Bool _sendActiveVoiceOnly;	// 472 = 0x1d8
    unsigned int _qualityIndex;	// 476 = 0x1dc
    int _ratType;	// 480 = 0x1e0
    unsigned long long _lastReportedRTPIngresspackets;	// 488 = 0x1e8
    double _lastReportingCallbackTime;	// 496 = 0x1f0
    double _lastReportingCallbackTimeShort;	// 504 = 0x1f8
    CDStruct_b671a7c4 _currentChannelMetrics;	// 512 = 0x200
    _Bool _periodicReportingEnabled;	// 600 = 0x258
    struct tagVCIDSChannelDataFormat _idsChannelDataFormat;	// 608 = 0x260
    unsigned int _maxIDSStreamIdCount;	// 688 = 0x2b0
    NSArray *_supportedNumRedundantPayload;	// 696 = 0x2b8
    _Bool _currentDTXEnable;	// 704 = 0x2c0
    unsigned char _mediaControlInfoVersion;	// 705 = 0x2c1
    _Bool _alwaysOnAudioRedundancyEnabled;	// 706 = 0x2c2
    _Bool _cellularAllowRedLowBitratesEnabled;	// 707 = 0x2c3
    _Bool _wifiAllowRedLowBitratesEnabled;	// 708 = 0x2c4
    struct tagVCMemoryPool *_audioBundlePool;	// 712 = 0x2c8
    unsigned long long _remoteIDSParticipantID;	// 720 = 0x2d0
    _Bool _useChannelDataFormat;	// 728 = 0x2d8
    _Bool _useWiFiTiers;	// 729 = 0x2d9
    _Bool _supportsCodecBandwidthUpdate;	// 730 = 0x2da
    struct tagVCNWConnectionNotification _lastNWConnectionNotification;	// 736 = 0x2e0
    struct tagVCCryptor *_sframeCryptor;	// 840 = 0x348
    struct tagVCAudioIssueDetector *_audioIssueDetector;	// 848 = 0x350
    _Bool _audioDumpEnabled;	// 856 = 0x358
    struct tagVCAudioDump *_encoderOutAudioDump;	// 864 = 0x360
    struct tagVCAudioDump *_encoderInAudioDump;	// 872 = 0x368
    struct tagVCAudioDumpPayloadInfo _payloadInfo;	// 880 = 0x370
    int _payloadUsed;	// 904 = 0x388
    _Bool _canSendPacket;	// 908 = 0x38c
    int _sentBytes;	// 912 = 0x390
    unsigned char _tierPickerMode;	// 916 = 0x394
    _Bool _ramStadSRCEnabled;	// 917 = 0x395
    struct tagVCAudioTierInfo _tierInfo;	// 920 = 0x398
    _Bool _isSID;	// 952 = 0x3b8
    unsigned int _rtpTimestampBase;	// 956 = 0x3bc
    _Bool _shouldApplyRedAsBoolean;	// 960 = 0x3c0
    unsigned int _sentAudioBytesShort;	// 964 = 0x3c4
    unsigned int _packetExpirationTimeInMillisecond;	// 968 = 0x3c8
    _Bool _targetBitrateIsAudioOnly;	// 972 = 0x3cc
    _Atomic unsigned int _audioTierChangeCount;	// 976 = 0x3d0
}

@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property(readonly, nonatomic) int actualAudioSendingBitrateNoRED; // @synthesize actualAudioSendingBitrateNoRED=_actualAudioSendingBitrateNoRED;
@property(readonly, nonatomic) VCPacketBundler *audioBundlerShortRED; // @synthesize audioBundlerShortRED=_audioBundlerShortRED;
@property(readonly, nonatomic) NSArray *audioPayloads; // @synthesize audioPayloads=_audioPayloads;
@property _Bool periodicReportingEnabled; // @synthesize periodicReportingEnabled=_periodicReportingEnabled;
@property(retain, nonatomic) VCAudioTierPicker *audioTierPicker; // @synthesize audioTierPicker=_audioTierPicker;
@property(nonatomic) _Bool useWiFiTiers; // @synthesize useWiFiTiers=_useWiFiTiers;
@property(nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(nonatomic) _Bool sendActiveVoiceOnly; // @synthesize sendActiveVoiceOnly=_sendActiveVoiceOnly;
@property(nonatomic) CDStruct_b671a7c4 currentChannelMetrics; // @synthesize currentChannelMetrics=_currentChannelMetrics;
@property(retain, nonatomic) NSArray *supportedNumRedundantPayload; // @synthesize supportedNumRedundantPayload=_supportedNumRedundantPayload;
@property(nonatomic) unsigned int maxIDSStreamIdCount; // @synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount;
@property(nonatomic) int qualityIndicator; // @synthesize qualityIndicator=_qualityIndicator;
@property(nonatomic) _Bool isAudioStalled; // @synthesize isAudioStalled=_isAudioStalled;
@property(nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) _Bool ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property(readonly, nonatomic) _Bool isRedEnabled; // @synthesize isRedEnabled=_isRedEnabled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(readonly, nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime;
@property unsigned char inputMeter; // @synthesize inputMeter=_inputMeter;
@property(readonly, nonatomic) int actualAudioSendingBitrate; // @synthesize actualAudioSendingBitrate=_actualAudioSendingBitrate;
@property(readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate=_audioTxBitrate;
@property(readonly, nonatomic) VCAudioTier *currentAudioTier; // @synthesize currentAudioTier=_currentAudioTier;
@property(readonly, nonatomic) VCPacketBundler *audioBundler; // @synthesize audioBundler=_audioBundler;
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000004a35ae
- (void)handleActiveConnectionChangeDefault:(id)arg1;	// IMP=0x00000000004a3320
- (void)handleActiveConnectionChangeMultiway:(id)arg1;	// IMP=0x00000000004a30e2
- (void)audioIssueDetectorStopAndFinalize;	// IMP=0x00000000004a2c14
- (void)audioIssueDetectorCreateAndConfigure;	// IMP=0x00000000004a2975
- (void)reportRTCPPacket;	// IMP=0x00000000004a295d
- (void)processNWConnectionNotification:(struct tagVCNWConnectionNotification *)arg1;	// IMP=0x00000000004a2852
- (void)logNWConnectionNotification:(struct tagVCNWConnectionNotification *)arg1;	// IMP=0x00000000004a2480
- (void)process5GRATInNWConnectionNotification:(struct tagVCNWConnectionNotification *)arg1;	// IMP=0x00000000004a2419
- (void)processCDRXInNWConnectionNotification:(struct tagVCNWConnectionNotification *)arg1;	// IMP=0x00000000004a236f
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000004a1fee
- (void)setStreamIDs:(id)arg1;	// IMP=0x00000000004a1ec8
- (void)setRedNumPayloads:(int)arg1 withMaxDelay:(int)arg2 shouldResetHistory:(_Bool)arg3 shouldEnableShortRED:(_Bool)arg4;	// IMP=0x00000000004a1d4a
- (void)logTierInfo:(int)arg1;	// IMP=0x00000000004a1bbb
@property(readonly, nonatomic) unsigned int redMaxDelay20ms;
@property(readonly, nonatomic) unsigned int redNumPayloads;
@property(readonly, nonatomic) unsigned int encodedBytes;
- (unsigned int)sentAudioBytesShort;	// IMP=0x00000000004a1b6d
@property(readonly, nonatomic) unsigned int sentAudioBytes;
- (void)stop;	// IMP=0x00000000004a18fe
- (void)start;	// IMP=0x00000000004a127a
- (void)useAudioTier:(id)arg1;	// IMP=0x00000000004a11a3
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2 redNumPayloads:(unsigned int)arg3;	// IMP=0x00000000004a0d8a
- (void)updateAudioTxBitrate;	// IMP=0x00000000004a0693
- (_Bool)setupAudioTierPicker;	// IMP=0x00000000004a028b
- (id)packetsPerBundle;	// IMP=0x00000000004a00c9
- (void)setupAudioHeaderSize;	// IMP=0x000000000049fdcc
- (_Bool)chooseAudioNetworkBitrate;	// IMP=0x000000000049f0e3
- (void)currentPayloadUsed:(int)arg1 payloadUsed:(id *)arg2;	// IMP=0x000000000049ef81
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x000000000049ee65
- (unsigned int)maximumSamplesPerFrame;	// IMP=0x000000000049db96
- (_Bool)allocateLastInputSampleBuffer:(unsigned int)arg1;	// IMP=0x000000000049dab8
- (_Bool)setupAudioEncoders;	// IMP=0x000000000049d82e
- (void)removeUnusedAudioPayloads;	// IMP=0x000000000049d194
- (float)nextAudioInterval:(int)arg1;	// IMP=0x000000000049cf22
@property(readonly, nonatomic) NSDictionary *dtxMetrics;
- (void)reportRedundancyConfigChange;	// IMP=0x000000000049c5a5
- (void)registerReportingTask;	// IMP=0x000000000049c53c
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x000000000049bdd5
- (_Bool)isStandaloneStreamMode;	// IMP=0x000000000049bdb6
- (void)updateAudioTxRate;	// IMP=0x000000000049bcf4
- (_Bool)setupAudio:(id *)arg1;	// IMP=0x000000000049ba96
- (_Bool)setupEncoderBuffer;	// IMP=0x000000000049b8e1
- (void)setCellTech:(int)arg1 remoteCellular:(int)arg2 isIPV6:(int)arg3 audioCap:(unsigned int)arg4;	// IMP=0x000000000049b882
- (_Bool)sendCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x000000000049b6a3
- (void)handleCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1 didUpdateBandwidth:(_Bool *)arg2 didUpdateBitrate:(_Bool *)arg3;	// IMP=0x000000000049b2ab
- (_Bool)isCodecModeChangeRequestValid:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x000000000049b1a5
- (_Bool)shouldUpdateCodecBandwidth:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x000000000049aefa
- (_Bool)shouldUpdateCodecBitrate:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x000000000049ab9f
@property id <VCAudioTransmitterDelegate> delegate;
@property(readonly, nonatomic) VCAudioPayloadConfig *currentAudioPayloadConfig;
- (void)dealloc;	// IMP=0x000000000049a9c8
- (void)initAudioValues;	// IMP=0x000000000049a95f
- (unsigned int)redundancyControllerModeForOperatingMode:(int)arg1 isRedEnabled:(_Bool)arg2 isHigherAudioREDCutoverU1Enabled:(_Bool)arg3;	// IMP=0x000000000049a926
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000499b7f
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x0000000000499b2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

