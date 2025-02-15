//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineArea : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_displayMapRegions;	// 24 = 0x18
    GEOMapRegion *_mapRegion;	// 32 = 0x20
    GEOMapRegion *_maximumAllowedMapRegion;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegions:1;
        unsigned int read_mapRegion:1;
        unsigned int read_maximumAllowedMapRegion:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000bfa1a0
- (unsigned long long)hash;	// IMP=0x0000000000bfa129
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bfa02b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bf9d23
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bf9a5e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bf9a4f
- (id)jsonRepresentation;	// IMP=0x0000000000bf9571
- (id)dictionaryRepresentation;	// IMP=0x0000000000bf90a0
- (id)description;	// IMP=0x0000000000bf8ff1
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bf86c8
- (id)init;	// IMP=0x0000000000bf866c

@end

