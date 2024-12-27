//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDRelatedSearchSuggestion, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDisplayHeaderSubstitute : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_interpretedQuery;	// 24 = 0x18
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _substituteType;	// 52 = 0x34
    struct {
        unsigned int has_substituteType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_interpretedQuery:1;
        unsigned int read_relatedSearchSuggestion:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000445a27
- (unsigned long long)hash;	// IMP=0x000000000044599d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000044589c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004456b4
- (void)writeTo:(id)arg1;	// IMP=0x000000000044545e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000044544f
- (id)jsonRepresentation;	// IMP=0x00000000004450ae
- (id)dictionaryRepresentation;	// IMP=0x0000000000444ddf
- (id)description;	// IMP=0x0000000000444d30
- (id)initWithData:(id)arg1;	// IMP=0x00000000004444b2
- (id)init;	// IMP=0x0000000000444456

@end

