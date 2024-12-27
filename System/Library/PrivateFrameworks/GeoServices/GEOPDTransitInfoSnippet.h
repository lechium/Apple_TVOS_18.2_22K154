//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOStyleAttributes, GEOTimezone, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitInfoSnippet : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_artworks;	// 24 = 0x18
    NSMutableArray *_labels;	// 32 = 0x20
    NSString *_searchDisplayName;	// 40 = 0x28
    GEOLatLng *_stopLocationForTrip;	// 48 = 0x30
    GEOStyleAttributes *_styleAttributesForTrip;	// 56 = 0x38
    NSMutableArray *_systemNames;	// 64 = 0x40
    GEOTimezone *_timezone;	// 72 = 0x48
    unsigned long long _transitId;	// 80 = 0x50
    NSString *_transitName;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    _Bool _isHidden;	// 108 = 0x6c
    struct {
        unsigned int has_transitId:1;
        unsigned int has_isHidden:1;
        unsigned int read_unknownFields:1;
        unsigned int read_artworks:1;
        unsigned int read_labels:1;
        unsigned int read_searchDisplayName:1;
        unsigned int read_stopLocationForTrip:1;
        unsigned int read_styleAttributesForTrip:1;
        unsigned int read_systemNames:1;
        unsigned int read_timezone:1;
        unsigned int read_transitName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

+ (id)transitInfoSnippetForPlaceData:(id)arg1;	// IMP=0x00100000009969d6
- (void).cxx_destruct;	// IMP=0x0000000000c997bb
- (unsigned long long)hash;	// IMP=0x0000000000c9965f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c99418
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c98dc2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c9876e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c9875f
- (id)jsonRepresentation;	// IMP=0x0000000000c976b5
- (id)dictionaryRepresentation;	// IMP=0x0000000000c96deb
- (id)description;	// IMP=0x0000000000c96d3c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c9575e
- (id)init;	// IMP=0x0000000000c95702

@end

