//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDCameraRecordingAudioCodecConfiguration, HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingVideoCodecConfiguration, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase
{
    HMDCameraRecordingGeneralConfiguration *_generalConfiguration;	// 8 = 0x8
    HMDCameraRecordingVideoCodecConfiguration *_videoConfiguration;	// 16 = 0x10
    HMDCameraRecordingAudioCodecConfiguration *_audioConfiguration;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000836ba9
- (void).cxx_destruct;	// IMP=0x0000000000836b67
@property(readonly, copy, nonatomic) HMDCameraRecordingAudioCodecConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(readonly, copy, nonatomic) HMDCameraRecordingVideoCodecConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(readonly, copy, nonatomic) HMDCameraRecordingGeneralConfiguration *generalConfiguration; // @synthesize generalConfiguration=_generalConfiguration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000836a51
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000083692c
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000083673f
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x000000000083638c
- (id)initWithGeneralConfiguration:(id)arg1 videoCodecConfiguration:(id)arg2 audioCodecConfiguration:(id)arg3;	// IMP=0x00000000008362c2

@end

