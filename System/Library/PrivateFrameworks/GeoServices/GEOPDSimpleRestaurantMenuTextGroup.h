//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSimpleRestaurantMenuTextGroup : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_menuItems;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_menuItems:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000c61372
- (unsigned long long)hash;	// IMP=0x0000000000c6131b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c61249
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c60f65
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c60cbe
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c60caf
- (id)jsonRepresentation;	// IMP=0x0000000000c60942
- (id)dictionaryRepresentation;	// IMP=0x0000000000c606ac
- (id)description;	// IMP=0x0000000000c605fd
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c5ff52
- (id)init;	// IMP=0x0000000000c5fef6

@end

