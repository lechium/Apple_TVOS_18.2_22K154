//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCollectionResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDMapsIdentifier *_collectionId;	// 24 = 0x18
    NSMutableArray *_components;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _status;	// 52 = 0x34
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_collectionId:1;
        unsigned int read_components:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000afd560
- (unsigned long long)hash;	// IMP=0x0000000000afd236
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000afd135
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000afce07
- (void)writeTo:(id)arg1;	// IMP=0x0000000000afae4b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000afae3c
- (id)jsonRepresentation;	// IMP=0x0000000000afa310
- (id)dictionaryRepresentation;	// IMP=0x0000000000af9ddd
- (id)description;	// IMP=0x0000000000af9d2e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000af93b1
- (id)init;	// IMP=0x0000000000af9355

@end

