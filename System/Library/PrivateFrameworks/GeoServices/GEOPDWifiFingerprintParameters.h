//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiFingerprintParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_measurements;	// 16 = 0x10
    unsigned int _maxLabels;	// 24 = 0x18
    struct {
        unsigned int has_maxLabels:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000057322f
- (unsigned long long)hash;	// IMP=0x00000000005731dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000573123
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000572f48
- (void)writeTo:(id)arg1;	// IMP=0x0000000000572b55
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000572b46
- (id)jsonRepresentation;	// IMP=0x0000000000572770
- (id)dictionaryRepresentation;	// IMP=0x0000000000572376
- (id)description;	// IMP=0x00000000005722c7

@end

