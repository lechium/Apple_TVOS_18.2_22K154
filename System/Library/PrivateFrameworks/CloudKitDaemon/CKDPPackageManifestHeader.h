//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPPackageManifestHeader : PBCodable
{
    NSData *_signature;	// 8 = 0x8
    NSData *_verificationKey;	// 16 = 0x10
    int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000001a922e
@property(retain, nonatomic) NSData *verificationKey; // @synthesize verificationKey=_verificationKey;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001a9151
- (unsigned long long)hash;	// IMP=0x00000000001a90d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a8fee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a8f2b
- (void)copyTo:(id)arg1;	// IMP=0x00000000001a8ea8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a8e25
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a8c1e
- (id)dictionaryRepresentation;	// IMP=0x00000000001a8b37
- (id)description;	// IMP=0x00000000001a8a88
@property(readonly, nonatomic) _Bool hasVerificationKey;
@property(readonly, nonatomic) _Bool hasSignature;
@property(nonatomic) _Bool hasVersion;

@end

