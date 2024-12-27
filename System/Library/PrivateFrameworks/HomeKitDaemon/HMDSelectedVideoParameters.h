//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDSelectedRTPParameters, HMDVideoAttributes, HMDVideoCodec, HMDVideoCodecParameters, NSData;

__attribute__((visibility("hidden")))
@interface HMDSelectedVideoParameters : HAPTLVBase
{
    HMDVideoCodec *_codec;	// 8 = 0x8
    HMDVideoCodecParameters *_codecParameters;	// 16 = 0x10
    HMDVideoAttributes *_videoAttributes;	// 24 = 0x18
    HMDSelectedRTPParameters *_rtpParameters;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000019ebb9
- (void).cxx_destruct;	// IMP=0x000000000019eb66
@property(readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters; // @synthesize rtpParameters=_rtpParameters;
@property(readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
@property(readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters; // @synthesize codecParameters=_codecParameters;
@property(readonly, copy, nonatomic) HMDVideoCodec *codec; // @synthesize codec=_codec;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019ea0a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019e728
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000019e503
- (_Bool)_parseFromTLVData;	// IMP=0x000000000019e218
@property(readonly, copy) NSData *tlvData;
- (id)initWithCodec:(id)arg1 codecParameter:(id)arg2 attribute:(id)arg3 rtpParameter:(id)arg4;	// IMP=0x000000000019df38

@end

