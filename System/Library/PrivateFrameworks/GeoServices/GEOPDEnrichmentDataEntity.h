//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDEnrichmentInfo, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEnrichmentDataEntity : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_adamIds;	// 24 = 0x18
    GEOPDEnrichmentInfo *_enrichmentInfo;	// 32 = 0x20
    NSData *_enrichmentMetadata;	// 40 = 0x28
    NSString *_html;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _suppressionReason;	// 68 = 0x44
    struct {
        unsigned int has_suppressionReason:1;
        unsigned int read_unknownFields:1;
        unsigned int read_adamIds:1;
        unsigned int read_enrichmentInfo:1;
        unsigned int read_enrichmentMetadata:1;
        unsigned int read_html:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000b89a2d
- (unsigned long long)hash;	// IMP=0x0000000000b89974
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8981f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b894ac
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b89165
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b89156
- (id)jsonRepresentation;	// IMP=0x0000000000b88db5
- (id)dictionaryRepresentation;	// IMP=0x0000000000b88a22
- (id)description;	// IMP=0x0000000000b88973
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b87d92
- (id)init;	// IMP=0x0000000000b87d36

@end

