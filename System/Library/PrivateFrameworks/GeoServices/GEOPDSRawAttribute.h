//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSRawAttribute : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _beginIndex;	// 16 = 0x10
    unsigned int _endIndex;	// 20 = 0x14
    struct {
        unsigned int has_beginIndex:1;
        unsigned int has_endIndex:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005c59c4
- (unsigned long long)hash;	// IMP=0x00000000005c5980
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005c58cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005c5830
- (void)writeTo:(id)arg1;	// IMP=0x00000000005c57a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005c5795
- (id)jsonRepresentation;	// IMP=0x00000000005c537b
- (id)dictionaryRepresentation;	// IMP=0x00000000005c513b
- (id)description;	// IMP=0x00000000005c508c

@end

