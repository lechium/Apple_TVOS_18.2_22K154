//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsSuggestionsTouristInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _isTourist;	// 16 = 0x10
    struct {
        unsigned int has_isTourist:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000e5a36a
- (unsigned long long)hash;	// IMP=0x0000000000e5a26c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e5a1d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e5a150
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e5a0ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e5a0dd
- (id)jsonRepresentation;	// IMP=0x0000000000e59d8f
- (id)dictionaryRepresentation;	// IMP=0x0000000000e59bb9
- (id)description;	// IMP=0x0000000000e59b0a

@end

