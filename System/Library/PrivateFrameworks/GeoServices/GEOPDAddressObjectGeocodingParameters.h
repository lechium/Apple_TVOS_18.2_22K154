//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObjectGeocodingParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSData *_addressObject;	// 24 = 0x18
    GEOPDViewportInfo *_viewportInfo;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _maxResults;	// 52 = 0x34
    struct {
        unsigned int has_maxResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressObject:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003cf797
- (unsigned long long)hash;	// IMP=0x00000000003cf71a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003cf619
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003cf436
- (void)writeTo:(id)arg1;	// IMP=0x00000000003cf20e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003cf1ff
- (id)jsonRepresentation;	// IMP=0x00000000003cec0f
- (id)dictionaryRepresentation;	// IMP=0x00000000003ce891
- (id)description;	// IMP=0x00000000003ce7e2
- (id)initWithData:(id)arg1;	// IMP=0x00000000003ce035
- (id)init;	// IMP=0x00000000003cdfd9

@end

