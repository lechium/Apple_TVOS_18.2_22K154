//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraVideoTier, HMDCameraVideoTierParameters, HMDH264Level, HMDH264Profile, HMDPacketizationMode, HMDSelectedVideoParameters, HMDStreamingCapabilities, HMDSupportedRTPConfiguration, HMDSupportedVideoStreamConfiguration, HMDVideoCodec, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraVideoParameterSelection
{
    HMDSupportedVideoStreamConfiguration *_supportedVideoStreamConfiguration;	// 8 = 0x8
    HMDSupportedRTPConfiguration *_rtpConfiguration;	// 16 = 0x10
    NSNumber *_syncSource;	// 24 = 0x18
    HMDSelectedVideoParameters *_selectedVideoParameters;	// 32 = 0x20
    HMDStreamingCapabilities *_streamingCapabilities;	// 40 = 0x28
    NSArray *_videoCodecsPreference;	// 48 = 0x30
    NSArray *_h264ProfilesPreference;	// 56 = 0x38
    NSArray *_h264LevelsPreference;	// 64 = 0x40
    NSArray *_h264PacketizationPreference;	// 72 = 0x48
    NSArray *_videoResolutionsPreference;	// 80 = 0x50
    NSArray *_validVideoParameterCombinations;	// 88 = 0x58
    HMDCameraVideoTierParameters *_videoTierParameters;	// 96 = 0x60
    HMDH264Profile *_selectedProfile;	// 104 = 0x68
    HMDH264Level *_selectedLevel;	// 112 = 0x70
    HMDPacketizationMode *_selectedPacketizationMode;	// 120 = 0x78
    NSNumber *_selectedFramerate;	// 128 = 0x80
    HMDCameraVideoTier *_selectedVideoTier;	// 136 = 0x88
    HMDVideoCodec *_selectedCodecType;	// 144 = 0x90
}

+ (id)logCategory;	// IMP=0x00600000006bbf25
- (void).cxx_destruct;	// IMP=0x00000000006bbde4
@property(retain, nonatomic) HMDVideoCodec *selectedCodecType; // @synthesize selectedCodecType=_selectedCodecType;
@property(retain, nonatomic) HMDCameraVideoTier *selectedVideoTier; // @synthesize selectedVideoTier=_selectedVideoTier;
@property(retain, nonatomic) NSNumber *selectedFramerate; // @synthesize selectedFramerate=_selectedFramerate;
@property(retain, nonatomic) HMDPacketizationMode *selectedPacketizationMode; // @synthesize selectedPacketizationMode=_selectedPacketizationMode;
@property(retain, nonatomic) HMDH264Level *selectedLevel; // @synthesize selectedLevel=_selectedLevel;
@property(retain, nonatomic) HMDH264Profile *selectedProfile; // @synthesize selectedProfile=_selectedProfile;
@property(readonly, nonatomic) HMDCameraVideoTierParameters *videoTierParameters; // @synthesize videoTierParameters=_videoTierParameters;
@property(readonly, nonatomic) NSArray *validVideoParameterCombinations; // @synthesize validVideoParameterCombinations=_validVideoParameterCombinations;
@property(readonly, nonatomic) NSArray *videoResolutionsPreference; // @synthesize videoResolutionsPreference=_videoResolutionsPreference;
@property(readonly, nonatomic) NSArray *h264PacketizationPreference; // @synthesize h264PacketizationPreference=_h264PacketizationPreference;
@property(readonly, nonatomic) NSArray *h264LevelsPreference; // @synthesize h264LevelsPreference=_h264LevelsPreference;
@property(readonly, nonatomic) NSArray *h264ProfilesPreference; // @synthesize h264ProfilesPreference=_h264ProfilesPreference;
@property(readonly, nonatomic) NSArray *videoCodecsPreference; // @synthesize videoCodecsPreference=_videoCodecsPreference;
@property(readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities; // @synthesize streamingCapabilities=_streamingCapabilities;
@property(retain, nonatomic) HMDSelectedVideoParameters *selectedVideoParameters; // @synthesize selectedVideoParameters=_selectedVideoParameters;
@property(readonly, nonatomic) NSNumber *syncSource; // @synthesize syncSource=_syncSource;
@property(readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration; // @synthesize rtpConfiguration=_rtpConfiguration;
@property(readonly, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration; // @synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration;
- (void)_generateAllCombinations;	// IMP=0x00000000006ba171
- (id)createReselectedVideoParameters:(id)arg1;	// IMP=0x00000000006ba006
- (id)createSelectedVideoParameters;	// IMP=0x00000000006b9c1c
- (id)createSRTPParamters;	// IMP=0x00000000006b9b91
- (_Bool)_selectParametersFromCodec:(id)arg1 profiles:(id)arg2 levels:(id)arg3 packetizationModes:(id)arg4 videoAttributes:(id)arg5;	// IMP=0x00000000006b9271
- (_Bool)selectVideoParameters;	// IMP=0x00000000006b8302
- (id)logIdentifier;	// IMP=0x00000000006b82b2
- (void)_setVideoResolutionPreference;	// IMP=0x00000000006b7ece
- (id)initWithSessionID:(id)arg1 videoTierParameters:(id)arg2 supportedVideoConfiguration:(id)arg3 supportedRTPConfiguration:(id)arg4 streamingCapabilities:(id)arg5;	// IMP=0x00000000006b7ce0

@end

