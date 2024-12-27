//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PCSManateeShareInvitation : PBCodable
{
    NSData *_exportedPCSData;	// 8 = 0x8
    NSData *_shareePublicKeyData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000063e1a
@property(retain, nonatomic) NSData *shareePublicKeyData; // @synthesize shareePublicKeyData=_shareePublicKeyData;
@property(retain, nonatomic) NSData *exportedPCSData; // @synthesize exportedPCSData=_exportedPCSData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000063d6d
- (unsigned long long)hash;	// IMP=0x0000000000063d20
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063c68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000063bca
- (void)copyTo:(id)arg1;	// IMP=0x0000000000063b67
- (void)writeTo:(id)arg1;	// IMP=0x0000000000063b0a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000063afd
- (id)dictionaryRepresentation;	// IMP=0x0000000000063910
- (id)description;	// IMP=0x0000000000063861
@property(readonly, nonatomic) _Bool hasShareePublicKeyData;
@property(readonly, nonatomic) _Bool hasExportedPCSData;

@end

