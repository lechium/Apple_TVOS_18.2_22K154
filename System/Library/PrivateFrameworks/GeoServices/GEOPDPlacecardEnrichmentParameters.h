//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardEnrichmentParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_enrichmentInfos;	// 24 = 0x18
    GEOPDMapsIdentifier *_mapsId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    _Bool _skipHtml;	// 52 = 0x34
    struct {
        unsigned int has_skipHtml:1;
        unsigned int read_unknownFields:1;
        unsigned int read_enrichmentInfos:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000515846
- (unsigned long long)hash;	// IMP=0x00000000005157c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005156b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000515397
- (void)writeTo:(id)arg1;	// IMP=0x0000000000514f32
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000514f23
- (id)jsonRepresentation;	// IMP=0x0000000000514a5f
- (id)dictionaryRepresentation;	// IMP=0x00000000005145b2
- (id)description;	// IMP=0x0000000000514503
- (id)initWithData:(id)arg1;	// IMP=0x0000000000513b8d
- (id)init;	// IMP=0x0000000000513b31

@end

