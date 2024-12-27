//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDChildAction, GEOPDChildPlace, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildItem : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDChildAction *_childAction;	// 24 = 0x18
    GEOPDChildPlace *_childPlace;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _childItemType;	// 52 = 0x34
    struct {
        unsigned int has_childItemType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_childAction:1;
        unsigned int read_childPlace:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000af6c59
- (unsigned long long)hash;	// IMP=0x0000000000af6b37
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af6a36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af684e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000af6594
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000af6585
- (id)jsonRepresentation;	// IMP=0x0000000000af6010
- (id)dictionaryRepresentation;	// IMP=0x0000000000af5d07
- (id)description;	// IMP=0x0000000000af5c58
- (id)initWithData:(id)arg1;	// IMP=0x0000000000af53a1
- (id)init;	// IMP=0x0000000000af5345

@end

