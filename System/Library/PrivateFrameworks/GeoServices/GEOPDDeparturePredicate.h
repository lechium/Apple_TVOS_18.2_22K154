//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDeparturePredicate : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDTimeRange _timeRange;	// 16 = 0x10
    unsigned int _numAdditionalDepartures;	// 28 = 0x1c
    struct {
        unsigned int has_timeRange:1;
        unsigned int has_numAdditionalDepartures:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b72429
- (unsigned long long)hash;	// IMP=0x0000000000b723cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b722f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b7224d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b72158
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b7214b
- (id)jsonRepresentation;	// IMP=0x0000000000b7198f
- (id)dictionaryRepresentation;	// IMP=0x0000000000b71759
- (id)description;	// IMP=0x0000000000b716aa
- (id)initWithTraitsTransitModeFilter:(id)arg1;	// IMP=0x000000000132b4d0

@end

