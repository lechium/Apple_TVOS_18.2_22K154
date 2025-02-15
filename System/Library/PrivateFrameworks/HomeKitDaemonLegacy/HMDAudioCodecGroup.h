//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDAudioCodecGroup : HAPNumberParser
{
    unsigned long long _codec;	// 8 = 0x8
}

+ (id)arrayWithCodecs:(id)arg1;	// IMP=0x001000000009c318
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000009c310
@property(readonly, nonatomic) unsigned long long codec; // @synthesize codec=_codec;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009c2ae
- (id)initWithAudioCodecGroup:(unsigned long long)arg1;	// IMP=0x000000000009c26a
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000009c213
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000009c177
- (id)description;	// IMP=0x000000000009c103
- (unsigned long long)hash;	// IMP=0x000000000009c0f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009c06e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009bfd7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009bf1a

@end

