//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSString, TimingCollection, VCPositionalInfo, VCSessionBandwidthAllocationTable, VCSessionParticipantMediaStreamInfo;
@protocol OS_dispatch_source, OS_nw_activity;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantRemote
{
    _Bool _remoteVideoEnabled;	// 448 = 0x1c0
    _Bool _remoteScreenEnabled;	// 449 = 0x1c1
    _Bool _remoteVideoPaused;	// 450 = 0x1c2
    _Bool _remoteSystemAudioPaused;	// 451 = 0x1c3
    _Bool _receivedFirstFrame;	// 452 = 0x1c4
    unsigned char _videoQuality;	// 453 = 0x1c5
    unsigned int _visibilityIndex;	// 456 = 0x1c8
    unsigned int _prominenceIndex;	// 460 = 0x1cc
    VCSessionBandwidthAllocationTable *_mediaTable;	// 464 = 0x1d0
    VCSessionBandwidthAllocationTable *_repairMediaTable;	// 472 = 0x1d8
    _Bool _isVideoDegraded;	// 480 = 0x1e0
    _Bool _isRedundancyRequested;	// 481 = 0x1e1
    _Bool _isRemoteMediaStalled;	// 482 = 0x1e2
    struct tagVCAudioStreamGroupPriorityInfo _mediaPriorityInfo;	// 484 = 0x1e4
    TimingCollection *_perfTimers;	// 520 = 0x208
    _Bool _haveReportedPerfTimers;	// 528 = 0x210
    _Bool _isMediaSuspended;	// 529 = 0x211
    _Bool _oneToOneVideoEnabled;	// 530 = 0x212
    _Bool _isServerRTxEnabled;	// 531 = 0x213
    _Bool _screenControlEnabled;	// 532 = 0x214
    struct _VCSessionParticipantCapabilities _capabilities;	// 536 = 0x218
    _Bool _outOfProcessCodecsEnabled;	// 552 = 0x228
    int _thermalLevel;	// 556 = 0x22c
    VCPositionalInfo *_positionalInfo;	// 560 = 0x230
    struct __CFDictionary *_mediaTypeToSpatialAudioMetadataEntryMap;	// 568 = 0x238
    NSObject<OS_nw_activity> *_nwActivity;	// 576 = 0x240
    NSObject<OS_nw_activity> *_participantPoorConnectionNwActivity;	// 584 = 0x248
    NSObject<OS_nw_activity> *_participantMediaStallNwActivity;	// 592 = 0x250
    double _lastVideoExpectationSwitch;	// 600 = 0x258
    _Bool _isVideoExpected;	// 608 = 0x260
    _Bool _isVideoJitterForPlayoutEnabled;	// 609 = 0x261
    _Bool _remoteAudioEnabled;	// 610 = 0x262
    _Bool _remoteAudioPaused;	// 611 = 0x263
    _Bool _remoteScreenEnabledStateChanged;	// 612 = 0x264
    NSMutableDictionary *_jbSynchronizerPerSyncGroupID;	// 616 = 0x268
    NSMutableDictionary *_remoteMediaStates;	// 624 = 0x270
    NSObject<OS_dispatch_source> *_remoteStreamGroupStateUpdateTimer;	// 632 = 0x278
    _Bool _isEnhancedJBAdaptationsEnabled;	// 640 = 0x280
    _Bool _shouldDisableMiddleTierMLEnhance;	// 641 = 0x281
    _Bool _isCameraUsedForConnectionTiming;	// 642 = 0x282
    _Bool _isConnectionTimingSourceDetected;	// 643 = 0x283
    _Bool _isConnectionTimingReported;	// 644 = 0x284
    _Bool _enableMaxCameraBitrateVideoQualityNewTier;	// 645 = 0x285
}

+ (unsigned int)maxQualityIndexForStreamGroupID:(unsigned int)arg1 videoQuality:(unsigned char)arg2 isLocalOnWiFi:(_Bool)arg3 isRedundancyRequested:(_Bool)arg4 isSharingEnabled:(_Bool)arg5 enableNewTier:(_Bool)arg6;	// IMP=0x001000000018c727
+ (unsigned int)maxFdatQualityIndexForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2;	// IMP=0x001000000018c705
+ (unsigned int)maxBdatQualityIndexForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2;	// IMP=0x001000000018c6e3
+ (unsigned int)maxFtxtQualityIndexForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3 isSharingEnabled:(_Bool)arg4;	// IMP=0x001000000018c6af
+ (unsigned int)maxCameraQualityIndexForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3 isSharingEnabled:(_Bool)arg4 enableNewTier:(_Bool)arg5;	// IMP=0x001000000018c0e3
+ (unsigned int)maxWebRTCCameraQualityIndexForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isSharingEnabled:(_Bool)arg3 enableNewTier:(_Bool)arg4;	// IMP=0x001000000018bb3a
+ (unsigned int)maxCameraQualityIndexForVideoQuality:(unsigned char)arg1 useWiFiTable:(_Bool)arg2 isSharingEnabled:(_Bool)arg3 enableNewTier:(_Bool)arg4;	// IMP=0x001000000018bab2
+ (unsigned int)maxCameraQualityIndexWithRedundancyForVideoQuality:(unsigned char)arg1 useWiFiTable:(_Bool)arg2 enableNewTier:(_Bool)arg3;	// IMP=0x001000000018ba56
+ (unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(_Bool)arg1 isLowLatencyAudio:(_Bool)arg2;	// IMP=0x001000000018ba41
+ (_Bool)isDeviceLargeScreen;	// IMP=0x001000000018ba39
@property(nonatomic) _Bool isServerRTxEnabled; // @synthesize isServerRTxEnabled=_isServerRTxEnabled;
@property(nonatomic, getter=isRemoteAudioPaused) _Bool remoteAudioPaused; // @synthesize remoteAudioPaused=_remoteAudioPaused;
@property(nonatomic, getter=isRemoteAudioEnabled) _Bool remoteAudioEnabled; // @synthesize remoteAudioEnabled=_remoteAudioEnabled;
@property(nonatomic) _Bool enableMaxCameraBitrateVideoQualityNewTier; // @synthesize enableMaxCameraBitrateVideoQualityNewTier=_enableMaxCameraBitrateVideoQualityNewTier;
@property(nonatomic, getter=isScreenControlEnabled) _Bool screenControlEnabled; // @synthesize screenControlEnabled=_screenControlEnabled;
@property(readonly, nonatomic) VCPositionalInfo *positionalInfo; // @synthesize positionalInfo=_positionalInfo;
@property(nonatomic) struct _VCSessionParticipantCapabilities capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isRemoteScreenEnabled) _Bool remoteScreenEnabled; // @synthesize remoteScreenEnabled=_remoteScreenEnabled;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
- (int)reportingResolutionForResolution:(long long)arg1;	// IMP=0x0000000000196d19
- (void)reportCameraCompositionEnabled:(_Bool)arg1;	// IMP=0x0000000000196c72
- (void)updateAndHandleVideoMediaStall:(_Bool)arg1 isOneToOneStream:(_Bool)arg2;	// IMP=0x0000000000196a2a
- (void)cancelAndReleaseFetchTimer;	// IMP=0x0000000000196859
- (void)createAndResumeFetchTimer;	// IMP=0x0000000000196207
- (_Bool)isSeamlessTransitionSupportedForStreamGroup:(id)arg1;	// IMP=0x00000000001961c0
- (void)updateShouldEnableMLEnhanceOneToOne;	// IMP=0x0000000000195c19
- (_Bool)setShouldEnableMLEnhance:(_Bool)arg1 streamWithVideoResolution:(long long)arg2 videoStreamGroup:(id)arg3;	// IMP=0x0000000000195928
- (void)updateShouldEnableMLEnhanceHighTierMultiway;	// IMP=0x00000000001956b1
- (void)updateShouldEnableMLEnhanceMiddleTierMultiway;	// IMP=0x000000000019522c
- (void)updateShouldEnableMLEnhanceLowTierMultiway;	// IMP=0x0000000000194fb8
- (_Bool)shouldEnableMLEnhanceMiddleTier;	// IMP=0x0000000000194ed3
- (_Bool)shouldEnableMLEnhanceHighTier;	// IMP=0x0000000000194dfa
- (_Bool)shouldDisableMLEnhanceCommonFactors;	// IMP=0x0000000000194d86
- (_Bool)shouldEnableMLEnhanceOneToOne;	// IMP=0x0000000000194d71
- (_Bool)shouldEnableMLEnhanceLowTier;	// IMP=0x0000000000194c94
- (void)updateShouldEnableMLEnhance;	// IMP=0x0000000000194a5a
- (void)updateStreamConfigWithMLEnhance:(id)arg1;	// IMP=0x0000000000194975
- (void)setSharingEnabled:(_Bool)arg1;	// IMP=0x00000000001948d0
- (void)setShouldEnableFaceZoom:(_Bool)arg1;	// IMP=0x000000000019477a
- (void)updateShouldEnableFaceZoom;	// IMP=0x0000000000194520
- (_Bool)setupStreamGroups;	// IMP=0x000000000019401e
- (void)setupJBTargetSynchronizers;	// IMP=0x0000000000193aa2
- (void)createJitterBufferTargetEstimatorSynchronizer:(struct tagVCJBTargetEstimatorSynchronizer **)arg1 syncGroupID:(unsigned int)arg2;	// IMP=0x0000000000193808
- (_Bool)shouldSetupStreamGroupWithID:(unsigned int)arg1;	// IMP=0x0000000000193636
- (_Bool)shouldEnablePacketRetransmissionForStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000001935f2
- (id)newVideoStreamGroupWithStreamGroupConfig:(id)arg1;	// IMP=0x00000000001933b4
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x0000000000192a86
- (_Bool)addOneToOneStreamConfigToMediaStreamInfo:(id)arg1 negotiatorStreamGroupConfig:(id)arg2;	// IMP=0x0000000000192366
- (id)newMediaStreamWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000192276
- (id)newStreamGroupConfigWithNegotiationConfig:(id)arg1;	// IMP=0x0000000000191aa7
- (int)setupSpatialInfoForStreamGroupConfig:(id)arg1;	// IMP=0x000000000019153b
- (int)spatialChannelIndex:(unsigned int *)arg1 spatialAudioSourceID:(unsigned long long *)arg2 forMediaType:(unsigned int)arg3;	// IMP=0x00000000001910cd
- (void)setupMediaStreamGroupConfig:(id)arg1 withNegotiationConfig:(id)arg2;	// IMP=0x0000000000190eb2
- (id)newMediaStreamInfoWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000190457
- (id)newMediaStreamConfigWithStreamConfig:(id)arg1 streamGroupConfig:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3;	// IMP=0x0000000000190187
- (_Bool)setupStreamConfigWithCodecs:(id)arg1 streamConfig:(id)arg2 codecConfigs:(id)arg3 featureStringsDict:(id)arg4;	// IMP=0x000000000018faf8
- (id)newMediaStreamConfigWithStreamGroupConfig:(id)arg1 streamConfig:(id)arg2 rateControlConfig:(id)arg3 multiwayConfig:(id)arg4;	// IMP=0x000000000018f30d
- (_Bool)setupVideoStreamConfiguration:(id)arg1 withStreamGroupStreamConfig:(id)arg2 codecConfigs:(id)arg3 multiwayConfig:(id)arg4 groupID:(unsigned int)arg5;	// IMP=0x000000000018eb88
- (id)newMultiwayConfigWithStreamGroupStreamConfig:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2 groupID:(unsigned int)arg3;	// IMP=0x000000000018e93d
- (void)updateVideoMultiwayConfig:(id)arg1 withStreamGroupStreamConfig:(id)arg2;	// IMP=0x000000000018e7d6
- (void)updateScreenStreamConfigurationWithStreamGroupResult:(id)arg1 multiwayConfig:(id)arg2 screenStreamConfig:(id)arg3;	// IMP=0x000000000018e5af
@property(readonly, nonatomic) _Bool isVideoExpected;
- (void)setMediaSuspended:(_Bool)arg1 forStreamToken:(id)arg2;	// IMP=0x000000000018e0e0
@property(readonly) _Bool isVisible;
@property(readonly) NSArray *mediaEntries;
- (void)validateMediaEntries:(id)arg1;	// IMP=0x000000000018d53d
- (void)appendStreamGroupsMediaEntries:(id)arg1;	// IMP=0x000000000018cc1c
- (unsigned char)cappedVideoQualityWithShouldLimitCameraQualityForPIP:(_Bool)arg1;	// IMP=0x000000000018c9d3
- (void)appendStreamGroup:(id)arg1 maxQualityIndex:(unsigned int)arg2 mediaEntries:(id)arg3;	// IMP=0x000000000018c7f5
- (void)setRemoteMediaStalled:(_Bool)arg1;	// IMP=0x000000000018b81f
- (void)networkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2;	// IMP=0x000000000018b7bd
- (void)setVideoDegraded:(_Bool)arg1;	// IMP=0x000000000018b390
- (void)pushEventToNwActivity:(long long)arg1 started:(_Bool)arg2;	// IMP=0x000000000018af15
- (void)collectAudioChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x000000000018ad2c
- (void)collectVideoChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x000000000018ab8e
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x000000000018ab88
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x000000000018a4ee
- (void)didReceiveFirstFrameForStreamGroup:(id)arg1;	// IMP=0x000000000018a3ef
- (void)reportConnectionTimingWithStreamGroupDispatched:(id)arg1;	// IMP=0x000000000018a2df
- (void)reportConnectionTimingDispatched;	// IMP=0x0000000000189ffb
- (void)reportConnectionTiming;	// IMP=0x0000000000189f6d
- (unsigned int)optedInNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x0000000000189f20
- (unsigned int)actualNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x0000000000189ed3
- (id)activeDownlinkStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000189ea8
- (id)optedInStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000189e7d
- (void)didStopReacting;	// IMP=0x0000000000189d76
- (void)reactionDidStart:(id)arg1;	// IMP=0x0000000000189c5c
- (void)setStreamGroup:(unsigned int)arg1 syncSourceStreamGroupID:(unsigned int)arg2;	// IMP=0x0000000000189655
- (void)setMediaRecorder:(id)arg1;	// IMP=0x0000000000189473
- (void)updateThermalLevel:(int)arg1;	// IMP=0x00000000001891f5
- (id)startScreenGroup;	// IMP=0x00000000001891ed
- (id)stopAudioStreams;	// IMP=0x00000000001891e5
- (id)startAudioIO;	// IMP=0x00000000001891dd
- (unsigned int)actualNetworkBitrateWithAudioBitrates:(id)arg1;	// IMP=0x0000000000189033
- (void)setVideoStreamDelegate:(id)arg1 delegateFunctions:(const struct tagVCVideoStreamDelegateRealtimeInstanceVTable *)arg2;	// IMP=0x0000000000188ddb
- (void)setVideoReceiverFeedbackDelegate:(id)arg1;	// IMP=0x0000000000188d42
- (void)dispatchedSetVideoReceiverFeedbackDelegate:(id)arg1;	// IMP=0x0000000000188a9b
- (_Bool)configureWithOneToOneParticipantConfig:(id)arg1 operatingMode:(int)arg2;	// IMP=0x00000000001887c9
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (long long)participantMicrophoneToken;	// IMP=0x0000000000188660
- (_Bool)isParticipantIDBasedKeyLookupEnabled;	// IMP=0x000000000018864f
- (id)audioGroup;	// IMP=0x00000000001885dd
- (id)videoGroup;	// IMP=0x0000000000188581
- (id)screenGroup;	// IMP=0x0000000000188525
- (long long)participantScreenToken;	// IMP=0x00000000001884e5
- (id)systemAudioStreamInfo;	// IMP=0x00000000001884ae
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *screenStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *cameraStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *micStreamInfo;
- (_Bool)isScreenActive;	// IMP=0x00000000001883b3
- (void)updateAudioSpectrumState;	// IMP=0x0000000000187cab
- (_Bool)isAudioActive;	// IMP=0x0000000000187c66
- (void)negotiateAudioRules:(id)arg1;	// IMP=0x000000000018789a
- (id)recommendedStreamIDsForSelectedMediaEntries:(id)arg1 forceSeamlessTransition:(_Bool)arg2;	// IMP=0x00000000001871fd
- (void)appendOptedInStreamID:(id)arg1 toOptInStreamsIDs:(id)arg2 targetBandwidthEntry:(id)arg3 forceSeamlessTransition:(_Bool)arg4;	// IMP=0x0000000000186f18
@property(readonly, nonatomic) NSNumber *optedInVideoStreamID;
@property(readonly, nonatomic) NSNumber *optedInAudioStreamID;
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x0000000000186c74
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000186b93
- (id)getAudioDumpName;	// IMP=0x0000000000186b8b
- (id)entryForStreamID:(id)arg1;	// IMP=0x00000000001869bd
- (_Bool)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg1 streamGroupID:(unsigned int)arg2 entryType:(unsigned char)arg3;	// IMP=0x0000000000185b75
- (id)checkSubstreams:(id)arg1 forLowerQualityIndex:(unsigned int)arg2;	// IMP=0x0000000000185a29
- (_Bool)setupAudioStreamConfiguration:(id)arg1 withStreamGroupConfig:(id)arg2 streamGroupStreamConfig:(id)arg3;	// IMP=0x0000000000185326
- (_Bool)isStreamGroupActive:(id)arg1;	// IMP=0x00000000001851c8
- (_Bool)isEnabledMediaType:(unsigned int)arg1;	// IMP=0x0000000000185088
- (_Bool)isActiveMediaType:(unsigned int)arg1;	// IMP=0x0000000000184f5e
- (void)cleanupNwActivity;	// IMP=0x0000000000184ea0
- (void)completeAndReleaseNwActivity:(id)arg1 withReason:(int)arg2;	// IMP=0x0000000000184e7f
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000184e77
- (id)setupStreamRTP:(id)arg1;	// IMP=0x0000000000184e62
- (_Bool)isParticipantDawnburstOrLater;	// IMP=0x0000000000184c34
- (_Bool)isParticipantPeace:(id)arg1;	// IMP=0x00000000001849d0
- (_Bool)supportsIDSParticipantIDBasedKeyIndexMatching;	// IMP=0x0000000000184736
- (_Bool)supportsGFTSwitchToOneToOne;	// IMP=0x00000000001842f7
- (_Bool)supportsNegotiatedCoordinateSystem;	// IMP=0x0000000000184062
- (id)getMajorVersionNumber;	// IMP=0x0000000000183a24
- (_Bool)processParticipantInfo;	// IMP=0x0000000000183057
- (void)updateOneToOneAudioPositionalInfo:(const struct tagVCSpatialAudioMetadataPositionalInfo *)arg1;	// IMP=0x000000000018302e
- (_Bool)isInCanvas;	// IMP=0x0000000000183011
- (void)updatePositionalInfo:(id)arg1 shouldReapply:(_Bool)arg2;	// IMP=0x0000000000182e76
- (void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg1;	// IMP=0x000000000018290b
- (id)applyVideoEnabledSetting:(_Bool)arg1;	// IMP=0x000000000018253a
- (void)dispatchedSetRemoteVideoPaused:(_Bool)arg1;	// IMP=0x0000000000181f37
- (unsigned int)remoteMediaStateForMediaType:(unsigned int)arg1;	// IMP=0x0000000000181eea
- (void)setRemoteMediaTypeStates:(id)arg1;	// IMP=0x00000000001819a9
- (id)newSupportedRemoteMediaTypeStatesDict:(id)arg1;	// IMP=0x00000000001815c1
- (void)setRemoteMediaState:(id)arg1 forMediaType:(id)arg2;	// IMP=0x000000000018107a
- (id)updateMediaState:(unsigned int)arg1 forStreamGroup:(id)arg2;	// IMP=0x0000000000180e98
- (void)setTransitionToDisabled:(unsigned int)arg1;	// IMP=0x0000000000180c14
- (void)setTransitionToPaused:(unsigned int)arg1;	// IMP=0x00000000001808d8
- (void)setTransitionToEnabled:(unsigned int)arg1;	// IMP=0x00000000001805a6
- (void)setRemoteSystemAudioPaused:(_Bool)arg1;	// IMP=0x000000000018050e
- (void)dispatchedSetRemoteSystemAudioPaused:(_Bool)arg1;	// IMP=0x000000000018008f
- (void)dispatchedSetScreenControlEnabled:(_Bool)arg1;	// IMP=0x000000000017f9f2
- (void)dispatchedSetRemoteScreenEnabled:(_Bool)arg1;	// IMP=0x000000000017f3a5
- (void)dispatchedSetRemoteVideoEnabled:(_Bool)arg1;	// IMP=0x000000000017eda1
- (void)setVideoPaused:(_Bool)arg1;	// IMP=0x000000000017eb71
- (id)updateActiveStateForStreamGroup:(id)arg1;	// IMP=0x000000000017eae5
- (void)dispatchedSetRemoteAudioEnabled:(_Bool)arg1;	// IMP=0x000000000017e637
- (void)dispatchedSetRemoteAudioPaused:(_Bool)arg1;	// IMP=0x000000000017e189
- (void)setAudioPaused:(_Bool)arg1;	// IMP=0x000000000017de79
@property(readonly, nonatomic) NSDictionary *participantSpatialAudioSourceIDs;
- (int)storeSpatialAudioMetadataEntry:(void *)arg1 forMediaType:(unsigned int)arg2;	// IMP=0x000000000017d873
- (void *)spatialMetadataEntryForMediaType:(unsigned int)arg1;	// IMP=0x000000000017d6ad
- (void)cleanupSpatialAudio;	// IMP=0x000000000017d681
- (int)setupSpatialAudioWithMetadata:(void *)arg1 spatialMetadataEntryMap:(struct __CFDictionary *)arg2;	// IMP=0x000000000017cba7
- (void)initializeParticipantType;	// IMP=0x000000000017c90e
- (void)detectConnectionTimingSource;	// IMP=0x000000000017c38f
- (void)stop;	// IMP=0x000000000017c2e1
- (void)start;	// IMP=0x000000000017c1d0
- (void)dealloc;	// IMP=0x000000000017c0e7
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000017ad5c

// Remaining properties
@property(readonly) NSString *uuid;

@end

