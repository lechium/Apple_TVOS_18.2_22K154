//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIndexQueryNode : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_field;	// 24 = 0x18
    NSMutableArray *_operands;	// 32 = 0x20
    NSString *_value;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _type;	// 60 = 0x3c
    CDStruct_dc56225f _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000468714
- (unsigned long long)hash;	// IMP=0x0000000000468501
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004683f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004680db
- (void)writeTo:(id)arg1;	// IMP=0x0000000000467c6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000467c5c
- (id)jsonRepresentation;	// IMP=0x0000000000467141
- (id)dictionaryRepresentation;	// IMP=0x0000000000466ba5
- (id)description;	// IMP=0x0000000000466af6
- (id)initWithData:(id)arg1;	// IMP=0x00000000004661ec
- (id)init;	// IMP=0x0000000000466190

@end

