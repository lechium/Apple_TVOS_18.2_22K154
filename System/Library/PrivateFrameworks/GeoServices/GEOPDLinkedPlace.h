//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedPlace : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOLatLng *_center;	// 24 = 0x18
    unsigned long long _featureId;	// 32 = 0x20
    GEOPDMapsIdentifier *_mapsId;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    GEOStyleAttributes *_styleAttributes;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int has_featureId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_mapsId:1;
        unsigned int read_name:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000bd66a9
- (unsigned long long)hash;	// IMP=0x0000000000bd65f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd649c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd6262
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bd6000
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bd5ff1
- (id)jsonRepresentation;	// IMP=0x0000000000bd57cd
- (id)dictionaryRepresentation;	// IMP=0x0000000000bd5432
- (id)description;	// IMP=0x0000000000bd5383
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bd47ea
- (id)init;	// IMP=0x0000000000bd478e

@end

