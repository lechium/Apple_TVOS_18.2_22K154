//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialEventLookupResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOMapRegion *_displayMapRegion;	// 24 = 0x18
    NSMutableArray *_events;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _statusCode;	// 52 = 0x34
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_events:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000561fb9
- (unsigned long long)hash;	// IMP=0x0000000000561f2f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000561e2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000561afc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000561823
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000561814
- (id)jsonRepresentation;	// IMP=0x0000000000561328
- (id)dictionaryRepresentation;	// IMP=0x0000000000560de1
- (id)description;	// IMP=0x0000000000560d32
- (id)initWithData:(id)arg1;	// IMP=0x00000000005603f0
- (id)init;	// IMP=0x0000000000560394

@end

