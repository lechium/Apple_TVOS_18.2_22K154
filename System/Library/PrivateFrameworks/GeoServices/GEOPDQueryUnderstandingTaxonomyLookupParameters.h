//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQueryUnderstandingTaxonomyLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categoryBranchs;	// 24 = 0x18
    NSMutableArray *_identifiers;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categoryBranchs:1;
        unsigned int read_identifiers:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000528953
- (unsigned long long)hash;	// IMP=0x00000000005288fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052882a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000528465
- (void)writeTo:(id)arg1;	// IMP=0x000000000052810d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005280fe
- (id)jsonRepresentation;	// IMP=0x0000000000527d91
- (id)dictionaryRepresentation;	// IMP=0x0000000000527b75
- (id)description;	// IMP=0x0000000000527ac6
- (id)initWithData:(id)arg1;	// IMP=0x000000000052730d
- (id)init;	// IMP=0x00000000005272b1

@end

