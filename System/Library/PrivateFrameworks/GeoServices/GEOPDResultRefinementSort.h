//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementSort : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSMutableArray *_sorts;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _defaultSelectedElementIndex;	// 52 = 0x34
    unsigned int _selectedElementIndex;	// 56 = 0x38
    struct {
        unsigned int has_defaultSelectedElementIndex:1;
        unsigned int has_selectedElementIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayName:1;
        unsigned int read_sorts:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000da5efa
- (unsigned long long)hash;	// IMP=0x0000000000da5e56
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000da5d35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000da59fc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000da5571
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000da5562
- (id)jsonRepresentation;	// IMP=0x0000000000da50be
- (id)dictionaryRepresentation;	// IMP=0x0000000000da4bf8
- (id)description;	// IMP=0x0000000000da4b49
- (id)initWithData:(id)arg1;	// IMP=0x0000000000da4138
- (id)init;	// IMP=0x0000000000da40dc

@end

