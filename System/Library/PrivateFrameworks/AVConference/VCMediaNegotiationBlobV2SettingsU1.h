//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2SettingsU1 : PBCodable
{
    NSMutableArray *_encodeDecodeFeatures;	// 8 = 0x8
    unsigned int _rtpSSRC;	// 16 = 0x10
    struct {
        unsigned int rtpSSRC:1;
    } _has;	// 20 = 0x14
}

+ (Class)encodeDecodeFeaturesType;	// IMP=0x001000000029ee93
+ (id)appendCipherSuiteFlags:(unsigned int)arg1 toDescription:(id)arg2;	// IMP=0x001000000037c5bc
+ (int)negotiationCipherSuitesFromMediaStreamCipherSuites:(id)arg1;	// IMP=0x001000000037c46c
+ (int)negotiationCipherSuiteFromMediaStreamCipherSuite:(long long)arg1;	// IMP=0x001000000037c3ab
+ (long long)mediaStreamCipherSuiteFromNegotiationCipherSuite:(int)arg1;	// IMP=0x001000000037c389
+ (id)mediaStreamCipherSuitesFromNegotiationCipherSuites:(int)arg1;	// IMP=0x001000000037c2cf
@property(retain, nonatomic) NSMutableArray *encodeDecodeFeatures; // @synthesize encodeDecodeFeatures=_encodeDecodeFeatures;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000029f828
- (unsigned long long)hash;	// IMP=0x000000000029f7dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029f757
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029f599
- (void)copyTo:(id)arg1;	// IMP=0x000000000029f4ed
- (void)writeTo:(id)arg1;	// IMP=0x000000000029f3ce
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029f3c1
- (id)dictionaryRepresentation;	// IMP=0x000000000029ef3e
- (id)description;	// IMP=0x000000000029eea4
- (id)encodeDecodeFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000029ee76
- (unsigned long long)encodeDecodeFeaturesCount;	// IMP=0x000000000029ee59
- (void)addEncodeDecodeFeatures:(id)arg1;	// IMP=0x000000000029ee0c
- (void)clearEncodeDecodeFeatures;	// IMP=0x000000000029edef
@property(nonatomic) _Bool hasRtpSSRC;
- (void)dealloc;	// IMP=0x000000000029ed47
- (_Bool)loadEncodeDecodeFeatures:(id)arg1;	// IMP=0x000000000037c2c7
- (id)u1Config;	// IMP=0x000000000037c253
- (id)initWithU1Config:(id)arg1;	// IMP=0x000000000037c144

@end

