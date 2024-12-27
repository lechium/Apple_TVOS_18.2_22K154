//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable
{
    unsigned long long _accountFlags;	// 8 = 0x8
    long long _lastWebActivityUTCMills;	// 16 = 0x10
    long long _photosWebAccessTimestamp;	// 24 = 0x18
    NSString *_countryCode;	// 32 = 0x20
    _Bool _corporateSharingEnabled;	// 40 = 0x28
    struct {
        unsigned int accountFlags:1;
        unsigned int lastWebActivityUTCMills:1;
        unsigned int photosWebAccessTimestamp:1;
        unsigned int corporateSharingEnabled:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000146b3b
@property(nonatomic) unsigned long long accountFlags; // @synthesize accountFlags=_accountFlags;
@property(nonatomic) long long photosWebAccessTimestamp; // @synthesize photosWebAccessTimestamp=_photosWebAccessTimestamp;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) long long lastWebActivityUTCMills; // @synthesize lastWebActivityUTCMills=_lastWebActivityUTCMills;
@property(nonatomic) _Bool corporateSharingEnabled; // @synthesize corporateSharingEnabled=_corporateSharingEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000146a11
- (unsigned long long)hash;	// IMP=0x0000000000146956
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014680d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014671c
- (void)copyTo:(id)arg1;	// IMP=0x000000000014665a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000146589
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014657c
- (id)dictionaryRepresentation;	// IMP=0x0000000000145ffb
- (id)description;	// IMP=0x0000000000145f4c
@property(nonatomic) _Bool hasAccountFlags;
@property(nonatomic) _Bool hasPhotosWebAccessTimestamp;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(nonatomic) _Bool hasLastWebActivityUTCMills;
@property(nonatomic) _Bool hasCorporateSharingEnabled;

@end

