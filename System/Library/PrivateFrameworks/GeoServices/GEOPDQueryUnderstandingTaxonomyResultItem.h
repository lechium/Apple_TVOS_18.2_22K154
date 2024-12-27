//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDQueryUnderstandingTaxonomyResultItemBrand, GEOPDQueryUnderstandingTaxonomyResultItemCategory, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQueryUnderstandingTaxonomyResultItem : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDQueryUnderstandingTaxonomyResultItemBrand *_brand;	// 24 = 0x18
    GEOPDQueryUnderstandingTaxonomyResultItemCategory *_category;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _type;	// 52 = 0x34
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_brand:1;
        unsigned int read_category:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000052a9e5
- (unsigned long long)hash;	// IMP=0x000000000052a95b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052a85a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052a672
- (void)writeTo:(id)arg1;	// IMP=0x000000000052a4a3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000052a494
- (id)jsonRepresentation;	// IMP=0x000000000052a127
- (id)dictionaryRepresentation;	// IMP=0x0000000000529d47
- (id)description;	// IMP=0x0000000000529c98
- (id)initWithData:(id)arg1;	// IMP=0x0000000000529609
- (id)init;	// IMP=0x00000000005295ad

@end

