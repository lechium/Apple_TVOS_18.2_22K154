//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSPersonNameComponents, NSString;

@interface CSDMessagingPersonNameComponents : PBCodable
{
    NSString *_familyName;	// 8 = 0x8
    NSString *_givenName;	// 16 = 0x10
    NSString *_middleName;	// 24 = 0x18
    NSString *_namePrefix;	// 32 = 0x20
    MISSING_TYPE *_nameSuffix;	// 40 = 0x28
    NSString *_nickname;	// 48 = 0x30
    CSDMessagingPersonNameComponents *_phoneticRepresentation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000da05c
@property(retain, nonatomic) CSDMessagingPersonNameComponents *phoneticRepresentation; // @synthesize phoneticRepresentation=_phoneticRepresentation;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(retain, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d9e40
- (unsigned long long)hash;	// IMP=0x00100000000d9d69
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d9bd9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d9a6e
- (void)copyTo:(id)arg1;	// IMP=0x00100000000d996b
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d987d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d9870
- (id)dictionaryRepresentation;	// IMP=0x00100000000d948e
- (id)description;	// IMP=0x00100000000d93df
@property(readonly, nonatomic) _Bool hasPhoneticRepresentation;
@property(readonly, nonatomic) _Bool hasNickname;
@property(readonly, nonatomic) _Bool hasNameSuffix;
@property(readonly, nonatomic) _Bool hasFamilyName;
@property(readonly, nonatomic) _Bool hasMiddleName;
@property(readonly, nonatomic) _Bool hasGivenName;
@property(readonly, nonatomic) _Bool hasNamePrefix;
@property(readonly, copy, nonatomic) NSPersonNameComponents *personNameComponents;
- (id)initWithPersonNameComponents:(id)arg1;	// IMP=0x00100000000c317d

@end

