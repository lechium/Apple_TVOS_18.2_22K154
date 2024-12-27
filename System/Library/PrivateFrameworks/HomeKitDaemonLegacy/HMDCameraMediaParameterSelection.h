//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraAudioParameterSelection, HMDCameraVideoParameterSelection;

__attribute__((visibility("hidden")))
@interface HMDCameraMediaParameterSelection
{
    HMDCameraAudioParameterSelection *_audioParameterSelection;	// 8 = 0x8
    HMDCameraVideoParameterSelection *_videoParameterSelection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b67c11
@property(retain, nonatomic) HMDCameraVideoParameterSelection *videoParameterSelection; // @synthesize videoParameterSelection=_videoParameterSelection;
@property(retain, nonatomic) HMDCameraAudioParameterSelection *audioParameterSelection; // @synthesize audioParameterSelection=_audioParameterSelection;
- (void)setReselectedConfigParameters:(id)arg1 videoTier:(id)arg2;	// IMP=0x0000000000b67a46
- (void)setSelectedConfigParameters:(id)arg1;	// IMP=0x0000000000b6789e
- (void)setSelectedEndPointSetupParameters:(id)arg1 videoNetworkConfig:(id)arg2 audioNetworkConfig:(id)arg3;	// IMP=0x0000000000b674ba
- (_Bool)findBestMatchWithProtocolParameters:(id)arg1 streamingCapabilities:(id)arg2 videoTierParameters:(id)arg3;	// IMP=0x0000000000b67106

@end

