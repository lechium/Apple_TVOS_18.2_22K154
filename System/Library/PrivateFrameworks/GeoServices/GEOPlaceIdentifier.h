//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPlaceIdentifier : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOLatLng *_center;	// 16 = 0x10
    unsigned long long _muid;	// 24 = 0x18
    CDStruct_26a2534e _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000113bce4
- (unsigned long long)hash;	// IMP=0x000000000113bc44
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000113bb88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000113badf
- (void)writeTo:(id)arg1;	// IMP=0x000000000113ba5e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000113ba4f
- (id)jsonRepresentation;	// IMP=0x000000000113b2fa
- (id)dictionaryRepresentation;	// IMP=0x000000000113b0bf
- (id)description;	// IMP=0x000000000113b010

@end

