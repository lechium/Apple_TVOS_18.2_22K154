//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceVersion, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceVersionUpdate : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOMapLayerDataServiceLayerIndex *_index;	// 16 = 0x10
    GEOMapLayerDataServiceLayer *_layer;	// 24 = 0x18
    GEOMapLayerDataServiceVersion *_sourceVersion;	// 32 = 0x20
    GEOMapLayerDataServiceVersion *_targetVersion;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    CDStruct_b651aedb _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x000000000113a065
- (unsigned long long)hash;	// IMP=0x0000000001139fd7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001139eb1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001139ce0
- (void)writeTo:(id)arg1;	// IMP=0x0000000001139b18
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001139b0b
- (id)jsonRepresentation;	// IMP=0x00000000011398b1
- (id)dictionaryRepresentation;	// IMP=0x000000000113945f
- (id)description;	// IMP=0x00000000011393b0
- (id)initWithData:(id)arg1;	// IMP=0x0000000001138d7b
- (id)init;	// IMP=0x0000000001138d1f

@end

