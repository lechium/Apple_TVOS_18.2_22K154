//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDForwardInfoFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bb2b97
- (unsigned long long)hash;	// IMP=0x0000000000bb2b8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bb2b4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bb2aef
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bb2ad2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bb2ac5
- (id)jsonRepresentation;	// IMP=0x0000000000bb2808
- (id)dictionaryRepresentation;	// IMP=0x0000000000bb269e
- (id)description;	// IMP=0x0000000000bb25ef

@end

