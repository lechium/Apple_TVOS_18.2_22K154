//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDate, CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPZoneUsage : PBCodable
{
    CKDPIdentifier *_deviceIdentifier;	// 8 = 0x8
    CKDPDate *_time;	// 16 = 0x10
    CKDPIdentifier *_userIdentifier;	// 24 = 0x18
    int _version;	// 32 = 0x20
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 40 = 0x28
    CDStruct_f20694ce _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002748fe
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) CKDPIdentifier *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) CKDPIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) CKDPDate *time; // @synthesize time=_time;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000027474f
- (unsigned long long)hash;	// IMP=0x000000000027469d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027455b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027444c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000274389
- (void)writeTo:(id)arg1;	// IMP=0x00000000002742cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000273fd3
- (id)dictionaryRepresentation;	// IMP=0x0000000000273e0a
- (id)description;	// IMP=0x0000000000273d5b
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(readonly, nonatomic) _Bool hasUserIdentifier;
@property(readonly, nonatomic) _Bool hasDeviceIdentifier;
@property(readonly, nonatomic) _Bool hasTime;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) int version; // @synthesize version=_version;

@end

