//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWalletCategoryInformationFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cb5cf8
- (unsigned long long)hash;	// IMP=0x0000000000cb5cf0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb5cad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb5c50
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb5c33
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb5c26
- (id)jsonRepresentation;	// IMP=0x0000000000cb5969
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb57ff
- (id)description;	// IMP=0x0000000000cb5750

@end

