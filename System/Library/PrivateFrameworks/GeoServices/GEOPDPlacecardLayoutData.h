//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDPlacecardLayoutConfiguration, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardLayoutData : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDPlacecardLayoutConfiguration *_layoutConfiguration;	// 24 = 0x18
    NSMutableArray *_moduleConfigurations;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_layoutConfiguration:1;
        unsigned int read_moduleConfigurations:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000c2fecf
- (unsigned long long)hash;	// IMP=0x0000000000c2fe78
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c2fda6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c2fabc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c2f7b2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c2f7a3
- (id)jsonRepresentation;	// IMP=0x0000000000c2f2f0
- (id)dictionaryRepresentation;	// IMP=0x0000000000c2eebe
- (id)description;	// IMP=0x0000000000c2ee0f
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c2e576
- (id)init;	// IMP=0x0000000000c2e51a

@end

