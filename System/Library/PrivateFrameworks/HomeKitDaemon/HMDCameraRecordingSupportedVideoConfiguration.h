//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSupportedVideoConfiguration : HAPTLVBase
{
    NSArray *_codecConfigurations;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b076d2
- (void).cxx_destruct;	// IMP=0x0000000000b07672
@property(readonly, copy, nonatomic) NSArray *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b075f1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b074b5
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000b073c2
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000b071e5
- (id)initWithCodecConfigurations:(id)arg1;	// IMP=0x0000000000b07177

@end

