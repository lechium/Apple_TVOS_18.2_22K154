//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItemContainer : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_pictureItems;	// 16 = 0x10
    _Bool _allowFullScreenPhoto;	// 24 = 0x18
    struct {
        unsigned int has_allowFullScreenPhoto:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000c02f23
- (unsigned long long)hash;	// IMP=0x0000000000c02ed0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c02e06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c02c2b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c02aa6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c02a97
- (id)jsonRepresentation;	// IMP=0x0000000000c026bd
- (id)dictionaryRepresentation;	// IMP=0x0000000000c022b0
- (id)description;	// IMP=0x0000000000c02201

@end

