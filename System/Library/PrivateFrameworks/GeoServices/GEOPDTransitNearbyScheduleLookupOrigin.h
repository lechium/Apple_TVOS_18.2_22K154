//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOWaypointTyped, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbyScheduleLookupOrigin : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOWaypointTyped *_waypointTyped;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000566c7c
- (unsigned long long)hash;	// IMP=0x0000000000566c5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000566bcf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000566b44
- (void)writeTo:(id)arg1;	// IMP=0x00000000005669ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005669de
- (id)jsonRepresentation;	// IMP=0x000000000056669b
- (id)dictionaryRepresentation;	// IMP=0x00000000005664a8
- (id)description;	// IMP=0x00000000005663f9

@end

