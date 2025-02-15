//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialEventLookupResponse : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _categorys;	// 24 = 0x18
    GEOLatLng *_center;	// 48 = 0x30
    NSMutableArray *_eventDateTimes;	// 56 = 0x38
    GEOPDMapsIdentifier *_eventId;	// 64 = 0x40
    GEOPDMapsIdentifier *_poiId;	// 72 = 0x48
    GEOTimezone *_timezone;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_center:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_poiId:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 100 = 0x64
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000c67a93
+ (Class)eventDateTimeType;	// IMP=0x0010000000c663a2
- (void).cxx_destruct;	// IMP=0x0000000000c68f23
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000c68d08
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c689ab
- (unsigned long long)hash;	// IMP=0x0000000000c688e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c68766
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c683c0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c681a7
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000c68113
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c67dcb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c67dbc
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c676d5
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c676c3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c66e44
- (id)jsonRepresentation;	// IMP=0x0000000000c66d34
- (id)dictionaryRepresentation;	// IMP=0x0000000000c66674
- (id)description;	// IMP=0x0000000000c665c5
@property(retain, nonatomic) GEOPDMapsIdentifier *poiId;
@property(readonly, nonatomic) _Bool hasPoiId;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) _Bool hasTimezone;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000c66371
- (unsigned long long)eventDateTimesCount;	// IMP=0x0000000000c66345
- (void)addEventDateTime:(id)arg1;	// IMP=0x0000000000c66261
- (void)clearEventDateTimes;	// IMP=0x0000000000c66202
@property(retain, nonatomic) NSMutableArray *eventDateTimes;
- (int)StringAsCategorys:(id)arg1;	// IMP=0x0000000000c65ed4
- (id)categorysAsString:(int)arg1;	// IMP=0x0000000000c65e8b
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000c65e21
- (int)categoryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000c65d4c
- (void)addCategory:(int)arg1;	// IMP=0x0000000000c65ce5
- (void)clearCategorys;	// IMP=0x0000000000c65c8f
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property(readonly, nonatomic) _Bool hasEventId;
- (void)dealloc;	// IMP=0x0000000000c64f8d
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c64f31
- (id)init;	// IMP=0x0000000000c64ed5

@end

