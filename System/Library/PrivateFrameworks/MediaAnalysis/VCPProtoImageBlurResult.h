//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageBlurResult : PBCodable
{
    float _faceSharpness;	// 8 = 0x8
    float _sharpness;	// 12 = 0xc
    struct {
        unsigned int faceSharpness:1;
    } _has;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000003869f8
@property(nonatomic) float faceSharpness; // @synthesize faceSharpness=_faceSharpness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e6b83
- (unsigned long long)hash;	// IMP=0x00000000000e69b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e6905
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e688e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e6855
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e67f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e67e3
- (id)dictionaryRepresentation;	// IMP=0x00000000000e652a
- (id)description;	// IMP=0x00000000000e647b
@property(nonatomic) _Bool hasFaceSharpness;
- (id)exportToLegacyDictionary;	// IMP=0x0000000000386b50

@end

