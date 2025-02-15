//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOURLOptions, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOURLPresent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    GEOURLOptions *_options;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_items:1;
        unsigned int read_options:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000094871a
- (unsigned long long)hash;	// IMP=0x00000000009486c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009485f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000094832a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000947f0e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000947f01
- (id)jsonRepresentation;	// IMP=0x0000000000947b5a
- (id)dictionaryRepresentation;	// IMP=0x000000000094785e
- (id)description;	// IMP=0x00000000009477af
- (id)initWithData:(id)arg1;	// IMP=0x000000000094700a
- (id)init;	// IMP=0x0000000000946fae
- (id)initWithDirectionsOptions:(id)arg1;	// IMP=0x00000000014392f2
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000143918c

@end

