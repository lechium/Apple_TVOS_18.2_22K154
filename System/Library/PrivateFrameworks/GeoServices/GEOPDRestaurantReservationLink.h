//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRestaurantReservationLink : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_restaurantLinks;	// 16 = 0x10
}

+ (id)reservationLinkForPlaceData:(id)arg1;	// IMP=0x001000000099de27
- (void).cxx_destruct;	// IMP=0x0000000000c514a7
- (unsigned long long)hash;	// IMP=0x0000000000c5148a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c513fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c5123d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c510de
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c510cf
- (id)jsonRepresentation;	// IMP=0x0000000000c50d90
- (id)dictionaryRepresentation;	// IMP=0x0000000000c509f4
- (id)description;	// IMP=0x0000000000c50945

@end

