//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDBrowseCategory, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchResultsForCategoryEntry : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _placeIndexs;	// 24 = 0x18
    GEOPDBrowseCategory *_category;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_placeIndexs:1;
        unsigned int read_category:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000055534c
- (unsigned long long)hash;	// IMP=0x0000000000555306
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000555243
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005550bd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000554ed3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000554ec4
- (id)jsonRepresentation;	// IMP=0x0000000000554b23
- (id)dictionaryRepresentation;	// IMP=0x000000000055485b
- (id)description;	// IMP=0x00000000005547ac
- (void)dealloc;	// IMP=0x00000000005540df
- (id)initWithData:(id)arg1;	// IMP=0x0000000000554083
- (id)init;	// IMP=0x0000000000554027

@end

