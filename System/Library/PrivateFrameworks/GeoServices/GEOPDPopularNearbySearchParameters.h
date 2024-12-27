//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPopularNearbySearchParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSData *_suggestionEntryMetadata;	// 24 = 0x18
    GEOPDViewportInfo *_viewportInfo;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _maxResults;	// 52 = 0x34
    int _searchType;	// 56 = 0x38
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_searchType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x000000000051a555
- (unsigned long long)hash;	// IMP=0x000000000051a4a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000051a377
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000051a175
- (void)writeTo:(id)arg1;	// IMP=0x0000000000519f2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000519f1b
- (id)jsonRepresentation;	// IMP=0x0000000000519b6a
- (id)dictionaryRepresentation;	// IMP=0x0000000000519761
- (id)description;	// IMP=0x00000000005196b2
- (id)initWithData:(id)arg1;	// IMP=0x0000000000518e2f
- (id)init;	// IMP=0x0000000000518dd3

@end

