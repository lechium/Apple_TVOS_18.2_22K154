//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDComponent, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDComponent *_collectionComponent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000049b55f
- (unsigned long long)hash;	// IMP=0x000000000049b542
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000049b4b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049b427
- (void)writeTo:(id)arg1;	// IMP=0x000000000049b3cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000049b3bd
- (id)jsonRepresentation;	// IMP=0x000000000049b07a
- (id)dictionaryRepresentation;	// IMP=0x000000000049ae87
- (id)description;	// IMP=0x000000000049add8

@end

