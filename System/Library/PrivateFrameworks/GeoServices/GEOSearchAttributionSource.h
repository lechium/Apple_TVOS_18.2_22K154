//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionSource : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _attributionRequirements;	// 24 = 0x18
    CDStruct_95bda58d _suppressAttributionLogos;	// 48 = 0x30
    NSString *_appAdamID;	// 72 = 0x48
    NSMutableArray *_attributionApps;	// 80 = 0x50
    NSMutableArray *_localizedAttributions;	// 88 = 0x58
    NSString *_sourceIdentifier;	// 96 = 0x60
    NSMutableArray *_supportedComponentActions;	// 104 = 0x68
    NSString *_webBaseActionURL;	// 112 = 0x70
    unsigned int _readerMarkPos;	// 120 = 0x78
    unsigned int _readerMarkLength;	// 124 = 0x7c
    struct os_unfair_lock_s _readerLock;	// 128 = 0x80
    unsigned int _sourceVersion;	// 132 = 0x84
    _Bool _devPlaceCardAttr;	// 136 = 0x88
    _Bool _enforceAppStore;	// 137 = 0x89
    _Bool _requiresAttributionInPhotoViewerHeader;	// 138 = 0x8a
    struct {
        unsigned int has_devPlaceCardAttr:1;
        unsigned int has_enforceAppStore:1;
        unsigned int has_requiresAttributionInPhotoViewerHeader:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attributionRequirements:1;
        unsigned int read_suppressAttributionLogos:1;
        unsigned int read_appAdamID:1;
        unsigned int read_attributionApps:1;
        unsigned int read_localizedAttributions:1;
        unsigned int read_sourceIdentifier:1;
        unsigned int read_supportedComponentActions:1;
        unsigned int read_webBaseActionURL:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 140 = 0x8c
}

- (void).cxx_destruct;	// IMP=0x000000000106c8ca
- (unsigned long long)hash;	// IMP=0x000000000106c743
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000106c4c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000106bd57
- (void)writeTo:(id)arg1;	// IMP=0x000000000106b694
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000106b685
- (id)jsonRepresentation;	// IMP=0x000000000106b02c
- (id)dictionaryRepresentation;	// IMP=0x000000000106a4dc
- (id)description;	// IMP=0x000000000106a42d
- (void)dealloc;	// IMP=0x0000000001068a89
- (id)initWithData:(id)arg1;	// IMP=0x0000000001068a2d
- (id)init;	// IMP=0x00000000010689d1

@end

