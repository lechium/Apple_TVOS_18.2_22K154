//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRefreshId : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDMapsIdentifier *_forwardMapsId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c4bfe6
- (unsigned long long)hash;	// IMP=0x0000000000c4bfc9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c4bf39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c4beae
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c4be53
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c4be44
- (id)jsonRepresentation;	// IMP=0x0000000000c4bb01
- (id)dictionaryRepresentation;	// IMP=0x0000000000c4b90e
- (id)description;	// IMP=0x0000000000c4b85f

@end

