//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDate, CKDPZone, CKDPZoneCapabilities, NSData, NSString;

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable
{
    long long _assetQuotaUsage;	// 8 = 0x8
    long long _metadataQuotaUsage;	// 16 = 0x10
    CKDPZoneCapabilities *_capabilities;	// 24 = 0x18
    NSData *_clientChangeToken;	// 32 = 0x20
    NSData *_currentServerContinuationToken;	// 40 = 0x28
    int _deviceCount;	// 48 = 0x30
    CKDPDate *_expirationTime;	// 56 = 0x38
    CKDPZone *_targetZone;	// 64 = 0x40
    NSString *_zonePcsModificationDevice;	// 72 = 0x48
    CKDPDate *_zonePcsModificationTime;	// 80 = 0x50
    _Bool _expired;	// 88 = 0x58
    _Bool _zoneKeyRollAllowed;	// 89 = 0x59
    _Bool _zoneishPcsNeedsRolled;	// 90 = 0x5a
    struct {
        unsigned int assetQuotaUsage:1;
        unsigned int metadataQuotaUsage:1;
        unsigned int deviceCount:1;
        unsigned int expired:1;
        unsigned int zoneKeyRollAllowed:1;
        unsigned int zoneishPcsNeedsRolled:1;
    } _has;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x000000000015a58e
@property(retain, nonatomic) CKDPDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(retain, nonatomic) NSString *zonePcsModificationDevice; // @synthesize zonePcsModificationDevice=_zonePcsModificationDevice;
@property(retain, nonatomic) CKDPDate *zonePcsModificationTime; // @synthesize zonePcsModificationTime=_zonePcsModificationTime;
@property(nonatomic) _Bool zoneKeyRollAllowed; // @synthesize zoneKeyRollAllowed=_zoneKeyRollAllowed;
@property(nonatomic) _Bool zoneishPcsNeedsRolled; // @synthesize zoneishPcsNeedsRolled=_zoneishPcsNeedsRolled;
@property(retain, nonatomic) CKDPZoneCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) long long metadataQuotaUsage; // @synthesize metadataQuotaUsage=_metadataQuotaUsage;
@property(nonatomic) long long assetQuotaUsage; // @synthesize assetQuotaUsage=_assetQuotaUsage;
@property(nonatomic) int deviceCount; // @synthesize deviceCount=_deviceCount;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSData *currentServerContinuationToken; // @synthesize currentServerContinuationToken=_currentServerContinuationToken;
@property(retain, nonatomic) CKDPZone *targetZone; // @synthesize targetZone=_targetZone;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015a21b
- (unsigned long long)hash;	// IMP=0x000000000015a055
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000159d91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000159b6b
- (void)copyTo:(id)arg1;	// IMP=0x00000000001599b5
- (void)writeTo:(id)arg1;	// IMP=0x00000000001597f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001597e8
- (id)dictionaryRepresentation;	// IMP=0x0000000000158dae
- (id)description;	// IMP=0x0000000000158cff
@property(readonly, nonatomic) _Bool hasExpirationTime;
@property(nonatomic) _Bool hasExpired;
@property(readonly, nonatomic) _Bool hasZonePcsModificationDevice;
@property(readonly, nonatomic) _Bool hasZonePcsModificationTime;
@property(nonatomic) _Bool hasZoneKeyRollAllowed;
@property(nonatomic) _Bool hasZoneishPcsNeedsRolled;
@property(readonly, nonatomic) _Bool hasCapabilities;
@property(nonatomic) _Bool hasMetadataQuotaUsage;
@property(nonatomic) _Bool hasAssetQuotaUsage;
@property(nonatomic) _Bool hasDeviceCount;
@property(readonly, nonatomic) _Bool hasClientChangeToken;
@property(readonly, nonatomic) _Bool hasCurrentServerContinuationToken;
@property(readonly, nonatomic) _Bool hasTargetZone;

@end

