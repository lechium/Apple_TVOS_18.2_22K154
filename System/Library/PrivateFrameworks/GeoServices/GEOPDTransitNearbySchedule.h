//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbySchedule : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categorys;	// 24 = 0x18
    NSMutableArray *_groups;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_groups:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)transitNearbyScheduleForPlaceData:(id)arg1;	// IMP=0x0010000000997007
- (void).cxx_destruct;	// IMP=0x0000000000c9dafc
- (unsigned long long)hash;	// IMP=0x0000000000c9daa5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c9d9d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c9d60e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c9d10e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c9d0ff
- (id)jsonRepresentation;	// IMP=0x0000000000c9cb79
- (id)dictionaryRepresentation;	// IMP=0x0000000000c9c609
- (id)description;	// IMP=0x0000000000c9c55a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c9bca2
- (id)init;	// IMP=0x0000000000c9bc46

@end

