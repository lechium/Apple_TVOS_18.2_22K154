//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureTypeResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _resultFeature;	// 16 = 0x10
    struct {
        unsigned int has_resultFeature:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000005a9a78
- (unsigned long long)hash;	// IMP=0x00000000005a9a4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a99bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a993b
- (void)writeTo:(id)arg1;	// IMP=0x00000000005a98d7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005a98ca
- (id)jsonRepresentation;	// IMP=0x00000000005a8e5c
- (id)dictionaryRepresentation;	// IMP=0x00000000005a8c6d
- (id)description;	// IMP=0x00000000005a8bbe

@end

