//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategoryLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    long long _industryCode;	// 24 = 0x18
    NSString *_mapsCategoryId;	// 32 = 0x20
    NSString *_walletCategoryId;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_industryCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapsCategoryId:1;
        unsigned int read_walletCategoryId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000aef054
- (unsigned long long)hash;	// IMP=0x0000000000aeef5a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aeee59
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aeec63
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aeea3b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aeea2c
- (id)jsonRepresentation;	// IMP=0x0000000000aee2f8
- (id)dictionaryRepresentation;	// IMP=0x0000000000aedf81
- (id)description;	// IMP=0x0000000000aeded2
- (id)initWithData:(id)arg1;	// IMP=0x0000000000aed7ca
- (id)init;	// IMP=0x0000000000aed76e

@end

