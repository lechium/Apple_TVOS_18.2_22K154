//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReverseGeocodingParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_extendedLocations;	// 24 = 0x18
    NSMutableArray *_locations;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _placeTypeLimit;	// 52 = 0x34
    _Bool _preserveOriginalLocation;	// 56 = 0x38
    struct {
        unsigned int has_placeTypeLimit:1;
        unsigned int has_preserveOriginalLocation:1;
        unsigned int read_unknownFields:1;
        unsigned int read_extendedLocations:1;
        unsigned int read_locations:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000534621
- (unsigned long long)hash;	// IMP=0x000000000053457c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000534453
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000534028
- (void)writeTo:(id)arg1;	// IMP=0x0000000000533b31
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000533b22
- (id)jsonRepresentation;	// IMP=0x000000000053356c
- (id)dictionaryRepresentation;	// IMP=0x0000000000532d57
- (id)description;	// IMP=0x0000000000532ca8
- (id)initWithData:(id)arg1;	// IMP=0x0000000000532283
- (id)init;	// IMP=0x0000000000532227

@end

