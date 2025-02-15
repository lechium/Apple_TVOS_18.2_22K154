//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTileSetVersion : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOTileSetRegion *_availableTiles;	// 24 = 0x18
    unsigned long long _availableTilesCount;	// 32 = 0x20
    unsigned long long _availableTilesSpace;	// 40 = 0x28
    struct GEOGenericTile *_genericTiles;	// 48 = 0x30
    unsigned long long _genericTilesCount;	// 56 = 0x38
    unsigned long long _genericTilesSpace;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    unsigned int _identifier;	// 84 = 0x54
    unsigned int _supportedLanguagesVersion;	// 88 = 0x58
    unsigned int _timeToLiveSeconds;	// 92 = 0x5c
    struct {
        unsigned int has_supportedLanguagesVersion:1;
        unsigned int has_timeToLiveSeconds:1;
        unsigned int read_unknownFields:1;
        unsigned int read_availableTiles:1;
        unsigned int read_genericTiles:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000135017c
- (unsigned long long)hash;	// IMP=0x00000000013500a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000134ff42
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000134fd1d
- (void)writeTo:(id)arg1;	// IMP=0x000000000134fa22
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000134fa13
- (id)jsonRepresentation;	// IMP=0x000000000134f6a6
- (id)dictionaryRepresentation;	// IMP=0x000000000134f128
- (id)description;	// IMP=0x000000000134f079
- (void)dealloc;	// IMP=0x000000000134e423
- (id)initWithData:(id)arg1;	// IMP=0x000000000134e3c7
- (id)init;	// IMP=0x000000000134e36b

@end

