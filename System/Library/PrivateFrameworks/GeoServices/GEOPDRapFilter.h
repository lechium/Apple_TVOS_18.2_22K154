//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRapFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000106fae5
- (unsigned long long)hash;	// IMP=0x000000000106fadd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000106fa9a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000106fa3d
- (void)writeTo:(id)arg1;	// IMP=0x000000000106fa20
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000106fa11
- (id)jsonRepresentation;	// IMP=0x000000000106f753
- (id)dictionaryRepresentation;	// IMP=0x000000000106f5e9
- (id)description;	// IMP=0x000000000106f53a

@end

