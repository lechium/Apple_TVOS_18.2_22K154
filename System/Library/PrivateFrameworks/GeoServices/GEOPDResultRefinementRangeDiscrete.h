//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementRangeDiscrete : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_elements;	// 16 = 0x10
    unsigned int _selectedMaxElementIndex;	// 24 = 0x18
    unsigned int _selectedMinElementIndex;	// 28 = 0x1c
    struct {
        unsigned int has_selectedMaxElementIndex:1;
        unsigned int has_selectedMinElementIndex:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000da0304
- (unsigned long long)hash;	// IMP=0x0000000000da0296
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000da01bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d9ffc5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d9fe20
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d9fe11
- (id)jsonRepresentation;	// IMP=0x0000000000d9f992
- (id)dictionaryRepresentation;	// IMP=0x0000000000d9f528
- (id)description;	// IMP=0x0000000000d9f479

@end

