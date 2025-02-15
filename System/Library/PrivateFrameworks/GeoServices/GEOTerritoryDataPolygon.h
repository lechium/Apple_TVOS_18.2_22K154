//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTerritoryDataPolygon : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _shells;	// 16 = 0x10
    NSMutableArray *_holes;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_shells:1;
        unsigned int read_holes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000d27298
- (unsigned long long)hash;	// IMP=0x0000000000d27252
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2718e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d26e73
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d26bc2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d26bb3
- (id)jsonRepresentation;	// IMP=0x0000000000d26828
- (id)dictionaryRepresentation;	// IMP=0x0000000000d26569
- (id)description;	// IMP=0x0000000000d264ba
- (void)dealloc;	// IMP=0x0000000000d25da8
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d25d4c
- (id)init;	// IMP=0x0000000000d25cf0

@end

