//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllGuidesLocationsSectionHeader : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_headerString;	// 24 = 0x18
    GEOPDMapsIdentifier *_placeId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _sectionHeaderType;	// 52 = 0x34
    struct {
        unsigned int has_sectionHeaderType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_headerString:1;
        unsigned int read_placeId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003ddd80
- (unsigned long long)hash;	// IMP=0x00000000003ddcf6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ddbf5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003dda0d
- (void)writeTo:(id)arg1;	// IMP=0x00000000003dd83e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003dd82f
- (id)jsonRepresentation;	// IMP=0x00000000003dd47e
- (id)dictionaryRepresentation;	// IMP=0x00000000003dd1af
- (id)description;	// IMP=0x00000000003dd100
- (id)initWithData:(id)arg1;	// IMP=0x00000000003dc882
- (id)init;	// IMP=0x00000000003dc826

@end

