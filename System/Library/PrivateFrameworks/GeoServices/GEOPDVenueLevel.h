//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueLabel, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueLevel : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDVenueLabel *_label;	// 16 = 0x10
    unsigned long long _levelId;	// 24 = 0x18
    int _ordinal;	// 32 = 0x20
    struct {
        unsigned int has_levelId:1;
        unsigned int has_ordinal:1;
    } _flags;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000031edfb
- (unsigned long long)hash;	// IMP=0x000000000031ed91
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031ecb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031ebee
- (void)writeTo:(id)arg1;	// IMP=0x000000000031eb43
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031eb34
- (id)jsonRepresentation;	// IMP=0x000000000031e69b
- (id)dictionaryRepresentation;	// IMP=0x000000000031e3f4
- (id)description;	// IMP=0x000000000031e345

@end

