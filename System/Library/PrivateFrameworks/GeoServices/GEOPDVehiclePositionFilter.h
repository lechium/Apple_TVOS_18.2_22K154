//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVehiclePositionFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cb1e29
- (unsigned long long)hash;	// IMP=0x0000000000cb1e21
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb1dde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb1d81
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb1d64
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb1d57
- (id)jsonRepresentation;	// IMP=0x0000000000cb1a9a
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb1930
- (id)description;	// IMP=0x0000000000cb1881

@end

