//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalTransitLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_externalTransitStationCodes;	// 24 = 0x18
    NSString *_sourceId;	// 32 = 0x20
    GEOLocation *_transactionLocation;	// 40 = 0x28
    double _transactionTimestamp;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int has_transactionTimestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_externalTransitStationCodes:1;
        unsigned int read_sourceId:1;
        unsigned int read_transactionLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000044abd5
- (unsigned long long)hash;	// IMP=0x000000000044aa66
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000044a930
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000044a5ee
- (void)writeTo:(id)arg1;	// IMP=0x000000000044a13d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000044a12e
- (id)jsonRepresentation;	// IMP=0x0000000000449d7d
- (id)dictionaryRepresentation;	// IMP=0x00000000004497a9
- (id)description;	// IMP=0x00000000004496fa
- (id)initWithData:(id)arg1;	// IMP=0x0000000000448c3e
- (id)init;	// IMP=0x0000000000448be2

@end

