//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImagePetsResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000324e83
- (void).cxx_destruct;	// IMP=0x00000000002c4e8b
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002c4dd7
- (unsigned long long)hash;	// IMP=0x00000000002c4cd2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c4c2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c4ba2
- (void)copyTo:(id)arg1;	// IMP=0x00000000002c4b6e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c4b08
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c4afb
- (id)dictionaryRepresentation;	// IMP=0x00000000002c4825
- (id)description;	// IMP=0x00000000002c4776
- (id)exportToLegacyDictionary;	// IMP=0x000000000032502f

@end

