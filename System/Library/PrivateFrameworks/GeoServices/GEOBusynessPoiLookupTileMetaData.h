//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOBusynessPoiLookupTileMetaData : PBCodable
{
    unsigned long long _tileId;	// 8 = 0x8
    NSString *_version;	// 16 = 0x10
    unsigned int _poiCount;	// 24 = 0x18
    struct {
        unsigned int has_tileId:1;
        unsigned int has_poiCount:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000cbaa6f
- (unsigned long long)hash;	// IMP=0x0000000000cbaa06
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cba929
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cba876
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cba7e6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cba502
- (id)jsonRepresentation;	// IMP=0x0000000000cba4f8
- (id)dictionaryRepresentation;	// IMP=0x0000000000cba3c3
- (id)description;	// IMP=0x0000000000cba314

@end

