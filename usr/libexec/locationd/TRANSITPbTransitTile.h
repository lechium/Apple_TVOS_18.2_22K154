//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, TRANSITPbLocationFingerprints, TRANSITPbLocationFingerprintsV1;

@interface TRANSITPbTransitTile : PBCodable
{
    double _generationTimeSecs;	// 8 = 0x8
    unsigned long long _marketId;	// 16 = 0x10
    unsigned long long _securityKey;	// 24 = 0x18
    TRANSITPbLocationFingerprintsV1 *_dEPRECATEDFingerprints;	// 32 = 0x20
    int _expirationAgeSecs;	// 40 = 0x28
    MISSING_TYPE *_fingerprints;	// 48 = 0x30
    int _tileX;	// 56 = 0x38
    int _tileY;	// 60 = 0x3c
    int _version;	// 64 = 0x40
    struct {
        unsigned int generationTimeSecs:1;
        unsigned int marketId:1;
        unsigned int securityKey:1;
        unsigned int expirationAgeSecs:1;
        unsigned int tileX:1;
        unsigned int tileY:1;
        unsigned int version:1;
    } _has;	// 68 = 0x44
}

@property(retain, nonatomic) TRANSITPbLocationFingerprints *fingerprints; // @synthesize fingerprints=_fingerprints;
@property(retain, nonatomic) TRANSITPbLocationFingerprintsV1 *dEPRECATEDFingerprints; // @synthesize dEPRECATEDFingerprints=_dEPRECATEDFingerprints;
@property(nonatomic) int expirationAgeSecs; // @synthesize expirationAgeSecs=_expirationAgeSecs;
@property(nonatomic) double generationTimeSecs; // @synthesize generationTimeSecs=_generationTimeSecs;
@property(nonatomic) int tileY; // @synthesize tileY=_tileY;
@property(nonatomic) int tileX; // @synthesize tileX=_tileX;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000297d9b
- (unsigned long long)hash;	// IMP=0x0010000000297b8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002979b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000029783a
- (void)copyTo:(id)arg1;	// IMP=0x001000000029770c
- (void)writeTo:(id)arg1;	// IMP=0x00100000002975c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002975b8
- (id)dictionaryRepresentation;	// IMP=0x0010000000296d84
- (id)description;	// IMP=0x0010000000296d0d
@property(nonatomic) _Bool hasMarketId;
@property(nonatomic) unsigned long long marketId; // @synthesize marketId=_marketId;
@property(readonly, nonatomic) _Bool hasFingerprints;
@property(readonly, nonatomic) _Bool hasDEPRECATEDFingerprints;
@property(nonatomic) _Bool hasExpirationAgeSecs;
@property(nonatomic) _Bool hasGenerationTimeSecs;
@property(nonatomic) _Bool hasSecurityKey;
@property(nonatomic) unsigned long long securityKey; // @synthesize securityKey=_securityKey;
@property(nonatomic) _Bool hasTileY;
@property(nonatomic) _Bool hasTileX;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;	// IMP=0x0010000000296a3c

@end

