//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDFeatureBuilding, GEOPDFeaturePOI, GEOPDFeatureVenue, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueFeatureValue : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDFeatureBuilding *_featureBuilding;	// 24 = 0x18
    GEOPDFeaturePOI *_featurePoi;	// 32 = 0x20
    GEOPDFeatureVenue *_featureVenue;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_featureBuilding:1;
        unsigned int read_featurePoi:1;
        unsigned int read_featureVenue:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000003166c2
- (unsigned long long)hash;	// IMP=0x000000000031664b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031654d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000316386
- (void)writeTo:(id)arg1;	// IMP=0x00000000003160bd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003160b0
- (id)jsonRepresentation;	// IMP=0x0000000000315d11
- (id)dictionaryRepresentation;	// IMP=0x0000000000315897
- (id)description;	// IMP=0x00000000003157e8
- (id)initWithData:(id)arg1;	// IMP=0x0000000000315153
- (id)init;	// IMP=0x00000000003150f7

@end

