//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, GEOPDPublisherViewResultFilter, GEOPDViewportInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherViewParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDMapsIdentifier *_publisherId;	// 24 = 0x18
    GEOPDPublisherViewResultFilter *_resultFilter;	// 32 = 0x20
    GEOPDViewportInfo *_viewportInfo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    unsigned int _numClientizedResults;	// 60 = 0x3c
    struct {
        unsigned int has_numClientizedResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_publisherId:1;
        unsigned int read_resultFilter:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000051f16b
- (unsigned long long)hash;	// IMP=0x000000000051efca
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000051eea1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000051ec8e
- (void)writeTo:(id)arg1;	// IMP=0x000000000051e972
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000051e963
- (id)jsonRepresentation;	// IMP=0x000000000051e573
- (id)dictionaryRepresentation;	// IMP=0x000000000051e1e8
- (id)description;	// IMP=0x000000000051e139
- (id)initWithData:(id)arg1;	// IMP=0x000000000051d6c8
- (id)init;	// IMP=0x000000000051d66c

@end

