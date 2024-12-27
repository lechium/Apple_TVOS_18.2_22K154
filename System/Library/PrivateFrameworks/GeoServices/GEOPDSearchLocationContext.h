//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDSearchViewportInfo, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLocationContext : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLatLng *_deviceLocation;	// 16 = 0x10
    GEOPDSearchViewportInfo *_viewportInfo;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_deviceLocation:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000113390a
- (unsigned long long)hash;	// IMP=0x000000000113376f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000113369d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001133513
- (void)writeTo:(id)arg1;	// IMP=0x00000000011332aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000113329b
- (id)jsonRepresentation;	// IMP=0x00000000011327a7
- (id)dictionaryRepresentation;	// IMP=0x0000000001132621
- (id)description;	// IMP=0x0000000001132572
- (id)initWithData:(id)arg1;	// IMP=0x0000000001131ec9
- (id)init;	// IMP=0x0000000001131e6d

@end

