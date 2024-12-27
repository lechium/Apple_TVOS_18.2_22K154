//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAudioCodecGroup, HMDAudioSampleRate, HMDBitRateSetting, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraAudioParameterCombination : HMFObject
{
    HMDAudioCodecGroup *_codecGroupType;	// 8 = 0x8
    HMDBitRateSetting *_bitrateSetting;	// 16 = 0x10
    HMDAudioSampleRate *_sampleRate;	// 24 = 0x18
    NSNumber *_maximumBitrate;	// 32 = 0x20
    NSNumber *_minimumBitrate;	// 40 = 0x28
    NSNumber *_rtcpInterval;	// 48 = 0x30
    NSNumber *_rtpPTime;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004d72d1
@property(readonly, nonatomic) NSNumber *rtpPTime; // @synthesize rtpPTime=_rtpPTime;
@property(readonly, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property(readonly, nonatomic) NSNumber *minimumBitrate; // @synthesize minimumBitrate=_minimumBitrate;
@property(readonly, nonatomic) NSNumber *maximumBitrate; // @synthesize maximumBitrate=_maximumBitrate;
@property(readonly, nonatomic) HMDAudioSampleRate *sampleRate; // @synthesize sampleRate=_sampleRate;
@property(readonly, nonatomic) HMDBitRateSetting *bitrateSetting; // @synthesize bitrateSetting=_bitrateSetting;
@property(readonly, nonatomic) HMDAudioCodecGroup *codecGroupType; // @synthesize codecGroupType=_codecGroupType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d710a
- (id)description;	// IMP=0x00000000004d6fab
- (id)initWithCodecGroup:(id)arg1 bitrateSetting:(id)arg2 sampleRate:(id)arg3 maximumBitrate:(id)arg4 minimumBitrate:(id)arg5 rtcpInterval:(id)arg6 rtpPtime:(id)arg7;	// IMP=0x00000000004d6eb4
- (id)initWithCodecGroup:(id)arg1 bitrateSetting:(id)arg2 sampleRate:(id)arg3;	// IMP=0x00000000004d6dea

@end

