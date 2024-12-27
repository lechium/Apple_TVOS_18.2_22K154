//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MockAKSOptionalParameters : PBCodable
{
    NSData *_accessGroups;	// 8 = 0x8
    NSData *_acmHandle;	// 16 = 0x10
    NSData *_externalData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000075c3a
@property(retain, nonatomic) NSData *acmHandle; // @synthesize acmHandle=_acmHandle;
@property(retain, nonatomic) NSData *externalData; // @synthesize externalData=_externalData;
@property(retain, nonatomic) NSData *accessGroups; // @synthesize accessGroups=_accessGroups;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000075b48
- (unsigned long long)hash;	// IMP=0x0000000000075adb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000759fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000075937
- (void)copyTo:(id)arg1;	// IMP=0x00000000000758b4
- (void)writeTo:(id)arg1;	// IMP=0x000000000007583a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000756ae
- (id)dictionaryRepresentation;	// IMP=0x0000000000075604
- (id)description;	// IMP=0x0000000000075555
@property(readonly, nonatomic) _Bool hasAcmHandle;
@property(readonly, nonatomic) _Bool hasExternalData;
@property(readonly, nonatomic) _Bool hasAccessGroups;

@end

