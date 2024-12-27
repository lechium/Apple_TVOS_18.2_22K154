//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, VCMediaStreamConfigRemoteDeviceInfo;

__attribute__((visibility("hidden")))
@interface VCAudioStreamConfig
{
    long long _audioStreamMode;	// 280 = 0x118
    NSMutableDictionary *_codecConfigurations;	// 288 = 0x120
    _Bool _redEnabled;	// 296 = 0x128
    unsigned char _numRedundantPayloads;	// 297 = 0x129
    NSMutableOrderedSet *_supportedNumRedundantPayload;	// 304 = 0x130
    _Bool _enableMaxBitrateOnNoChangeCMR;	// 312 = 0x138
    _Bool _forceEVSWideBand;	// 313 = 0x139
    float _volume;	// 316 = 0x13c
    _Bool _shouldApplyRedAsBoolean;	// 320 = 0x140
    _Bool _supportsAdaptation;	// 321 = 0x141
    int _bundlingScheme;	// 324 = 0x144
    _Bool _useExternalIO;	// 328 = 0x148
    struct tagVCAudioFrameFormat _externalIOFormat;	// 336 = 0x150
    int _oneToOneOperatingMode;	// 384 = 0x180
    _Bool _dtmfTonePlaybackEnabled;	// 388 = 0x184
    _Bool _dtmfEventCallbacksEnabled;	// 389 = 0x185
    unsigned int _dtmfSampleRate;	// 392 = 0x188
    _Bool _anbrEnabled;	// 396 = 0x18c
    long long _subscriptionSlot;	// 400 = 0x190
    _Bool _isLowLatency;	// 408 = 0x198
    unsigned int _preferredMediaBitRate;	// 412 = 0x19c
    _Bool _isHigherAudioREDCutoverU1Enabled;	// 416 = 0x1a0
    _Bool _useWifiTiers;	// 417 = 0x1a1
    unsigned int _channelCount;	// 420 = 0x1a4
    VCMediaStreamConfigRemoteDeviceInfo *_remoteDeviceInfo;	// 424 = 0x1a8
}

+ (int)bundlingSchemeForAudioStreamMode:(long long)arg1 payloadType:(int)arg2;	// IMP=0x006000000046a052
@property(readonly, nonatomic) VCMediaStreamConfigRemoteDeviceInfo *remoteDeviceInfo; // @synthesize remoteDeviceInfo=_remoteDeviceInfo;
@property(nonatomic) _Bool useWifiTiers; // @synthesize useWifiTiers=_useWifiTiers;
@property(nonatomic) _Bool isHigherAudioREDCutoverU1Enabled; // @synthesize isHigherAudioREDCutoverU1Enabled=_isHigherAudioREDCutoverU1Enabled;
@property(nonatomic) _Bool dtmfEventCallbacksEnabled; // @synthesize dtmfEventCallbacksEnabled=_dtmfEventCallbacksEnabled;
@property(nonatomic) unsigned int preferredMediaBitRate; // @synthesize preferredMediaBitRate=_preferredMediaBitRate;
@property(readonly, nonatomic) _Bool useExternalIO; // @synthesize useExternalIO=_useExternalIO;
@property(nonatomic) _Bool isLowLatency; // @synthesize isLowLatency=_isLowLatency;
@property(nonatomic) long long subscriptionSlot; // @synthesize subscriptionSlot=_subscriptionSlot;
@property(nonatomic) _Bool anbrEnabled; // @synthesize anbrEnabled=_anbrEnabled;
@property(nonatomic) unsigned int dtmfSampleRate; // @synthesize dtmfSampleRate=_dtmfSampleRate;
@property(nonatomic) _Bool dtmfTonePlaybackEnabled; // @synthesize dtmfTonePlaybackEnabled=_dtmfTonePlaybackEnabled;
@property(nonatomic) unsigned int channelCount; // @synthesize channelCount=_channelCount;
@property(nonatomic) int oneToOneOperatingMode; // @synthesize oneToOneOperatingMode=_oneToOneOperatingMode;
@property(nonatomic) int bundlingScheme; // @synthesize bundlingScheme=_bundlingScheme;
@property(nonatomic) _Bool supportsAdaptation; // @synthesize supportsAdaptation=_supportsAdaptation;
@property(nonatomic) _Bool shouldApplyRedAsBoolean; // @synthesize shouldApplyRedAsBoolean=_shouldApplyRedAsBoolean;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool forceEVSWideBand; // @synthesize forceEVSWideBand=_forceEVSWideBand;
@property(nonatomic) _Bool enableMaxBitrateOnNoChangeCMR; // @synthesize enableMaxBitrateOnNoChangeCMR=_enableMaxBitrateOnNoChangeCMR;
@property(nonatomic) unsigned char numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(readonly, nonatomic, getter=isRedEnabled) _Bool redEnabled; // @synthesize redEnabled=_redEnabled;
@property(readonly, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
@property(nonatomic) long long audioStreamMode; // @synthesize audioStreamMode=_audioStreamMode;
@property(readonly, nonatomic) NSArray *supportedNumRedundantPayload;
- (void)addSupportedNumRedundantPayload:(unsigned int)arg1;	// IMP=0x000000000046ac4d
- (void)addCodecConfiguration:(id)arg1;	// IMP=0x000000000046ab72
@property(nonatomic) const struct tagVCAudioFrameFormat *externalIOFormat;
- (_Bool)setupDTMFCodecWithClientDictionary:(id)arg1;	// IMP=0x000000000046a8d2
- (_Bool)setupCNCodecWithClientDictionary:(id)arg1;	// IMP=0x000000000046a680
- (void)setupRedWithRxPayload:(unsigned int)arg1 txPayload:(unsigned int)arg2;	// IMP=0x000000000046a62e
- (_Bool)setupCodecWithClientDictionary:(id)arg1;	// IMP=0x000000000046a140
- (void)dealloc;	// IMP=0x0000000000469fc9
- (id)initWithClientDictionary:(id)arg1;	// IMP=0x0000000000469a94
- (id)init;	// IMP=0x0000000000469a07
@property(readonly, nonatomic) NSDictionary *allCodecConfigurations;

@end

