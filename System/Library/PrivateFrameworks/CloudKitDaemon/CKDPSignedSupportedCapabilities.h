//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPSignedSupportedCapabilities : PBCodable
{
    NSData *_adopterCapabilities;	// 8 = 0x8
    NSData *_signature;	// 16 = 0x10
    int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000002bbea3
@property(retain, nonatomic) NSData *adopterCapabilities; // @synthesize adopterCapabilities=_adopterCapabilities;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002bbdd6
- (unsigned long long)hash;	// IMP=0x00000000002bbd56
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002bbc73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002bbbb0
- (void)copyTo:(id)arg1;	// IMP=0x00000000002bbb2d
- (void)writeTo:(id)arg1;	// IMP=0x00000000002bbaaa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002bb8a3
- (id)dictionaryRepresentation;	// IMP=0x00000000002bb7bc
- (id)description;	// IMP=0x00000000002bb70d
@property(readonly, nonatomic) _Bool hasAdopterCapabilities;
@property(readonly, nonatomic) _Bool hasSignature;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) int version; // @synthesize version=_version;

@end

