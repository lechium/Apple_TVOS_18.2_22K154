//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOWaypointTyped, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbyScheduleLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_transitNearbyScheduleLookupOrigins;	// 24 = 0x18
    GEOWaypointTyped *_userLocation;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_transitNearbyScheduleLookupOrigins:1;
        unsigned int read_userLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000568657
- (unsigned long long)hash;	// IMP=0x0000000000568600
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056852e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000568244
- (void)writeTo:(id)arg1;	// IMP=0x0000000000567f0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000567efe
- (id)jsonRepresentation;	// IMP=0x0000000000567a4b
- (id)dictionaryRepresentation;	// IMP=0x0000000000567619
- (id)description;	// IMP=0x000000000056756a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000566d09
- (id)init;	// IMP=0x0000000000566cad

@end

