//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceSuggestionParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_mapsCategoryIds;	// 24 = 0x18
    NSMutableArray *_suggestedPlaceIds;	// 32 = 0x20
    GEOPDViewportInfo *_viewportInfo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_mapsCategoryIds:1;
        unsigned int read_suggestedPlaceIds:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000512ec6
- (unsigned long long)hash;	// IMP=0x0000000000512e4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000512d51
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000512963
- (void)writeTo:(id)arg1;	// IMP=0x00000000005125ee
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005125df
- (id)jsonRepresentation;	// IMP=0x000000000051211d
- (id)dictionaryRepresentation;	// IMP=0x0000000000511c7e
- (id)description;	// IMP=0x0000000000511bcf
- (id)initWithData:(id)arg1;	// IMP=0x00000000005111aa
- (id)init;	// IMP=0x000000000051114e

@end

