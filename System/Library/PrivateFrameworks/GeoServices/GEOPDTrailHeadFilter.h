//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTrailHeadFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _factCount;	// 16 = 0x10
    struct {
        unsigned int has_factCount:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000c8b23a
- (unsigned long long)hash;	// IMP=0x0000000000c8b210
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c8b17e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c8b0fe
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c8b09a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c8b08d
- (id)jsonRepresentation;	// IMP=0x0000000000c8ad2d
- (id)dictionaryRepresentation;	// IMP=0x0000000000c8ab59
- (id)description;	// IMP=0x0000000000c8aaaa

@end

