//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStop : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_stopInfos;	// 16 = 0x10
}

+ (id)transitTripStopForPlaceData:(id)arg1;	// IMP=0x0010000000996b13
- (void).cxx_destruct;	// IMP=0x0000000000caae01
- (unsigned long long)hash;	// IMP=0x0000000000caade4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000caad54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000caab97
- (void)writeTo:(id)arg1;	// IMP=0x0000000000caaa38
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000caaa29
- (id)jsonRepresentation;	// IMP=0x0000000000caa6ea
- (id)dictionaryRepresentation;	// IMP=0x0000000000caa34e
- (id)description;	// IMP=0x0000000000caa29f

@end

