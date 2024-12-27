//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDEndPointAddress, HMDSRTPParameters, NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSetupEndPointWrite : HAPTLVBase
{
    NSUUID *_sessionID;	// 8 = 0x8
    HMDEndPointAddress *_address;	// 16 = 0x10
    HMDSRTPParameters *_videoSrtpParameters;	// 24 = 0x18
    HMDSRTPParameters *_audioSrtpParameters;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000019be56
- (void).cxx_destruct;	// IMP=0x000000000019be03
@property(readonly, copy, nonatomic) HMDSRTPParameters *audioSrtpParameters; // @synthesize audioSrtpParameters=_audioSrtpParameters;
@property(readonly, copy, nonatomic) HMDSRTPParameters *videoSrtpParameters; // @synthesize videoSrtpParameters=_videoSrtpParameters;
@property(readonly, copy, nonatomic) HMDEndPointAddress *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019bcdc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019ba4e
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000019b861
- (_Bool)_parseFromTLVDataOnFailure;	// IMP=0x000000000019b76e
- (_Bool)_parseFromTLVDataOnSuccess;	// IMP=0x000000000019b75c
- (_Bool)_parseFromTLVDataImpl;	// IMP=0x000000000019b492
- (_Bool)_parseFromTLVData;	// IMP=0x000000000019b480
@property(readonly, copy) NSData *tlvData;
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4;	// IMP=0x000000000019b1d9

@end

