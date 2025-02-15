//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBPublicDevicePrekey : PBCodable
{
    double _timestamp;	// 8 = 0x8
    NSData *_prekey;	// 16 = 0x10
    NSData *_prekeySignature;	// 24 = 0x18
    NSData *_tetraPreKey;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001f1bc
@property(retain, nonatomic) NSData *tetraPreKey; // @synthesize tetraPreKey=_tetraPreKey;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *prekeySignature; // @synthesize prekeySignature=_prekeySignature;
@property(retain, nonatomic) NSData *prekey; // @synthesize prekey=_prekey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001f094
- (unsigned long long)hash;	// IMP=0x000000000001ef40
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ee46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ed6b
- (void)copyTo:(id)arg1;	// IMP=0x000000000001ecd6
- (void)writeTo:(id)arg1;	// IMP=0x000000000001ec31
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001ec24
- (id)dictionaryRepresentation;	// IMP=0x000000000001e928
- (id)description;	// IMP=0x000000000001e879
@property(readonly, nonatomic) _Bool hasTetraPreKey;

@end

