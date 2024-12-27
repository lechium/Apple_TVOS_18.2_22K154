//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SDAutoUnlockAWDLInfo : PBCodable
{
    double _phoneUnlockDate;	// 8 = 0x8
    NSString *_appName;	// 16 = 0x10
    NSData *_awdlInfo;	// 24 = 0x18
    unsigned int _errorCode;	// 32 = 0x20
    NSData *_keyData;	// 40 = 0x28
    unsigned int _version;	// 48 = 0x30
    _Bool _authPrompt;	// 52 = 0x34
    _Bool _isAuthenticatingForSiri;	// 53 = 0x35
    _Bool _skipMotionCheck;	// 54 = 0x36
    _Bool _supportsConfirmationACK;	// 55 = 0x37
    _Bool _useToken;	// 56 = 0x38
    struct {
        unsigned int phoneUnlockDate:1;
        unsigned int errorCode:1;
        unsigned int version:1;
        unsigned int authPrompt:1;
        unsigned int isAuthenticatingForSiri:1;
        unsigned int skipMotionCheck:1;
        unsigned int supportsConfirmationACK:1;
        unsigned int useToken:1;
    } _has;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x002000000009a778
@property(nonatomic) _Bool isAuthenticatingForSiri; // @synthesize isAuthenticatingForSiri=_isAuthenticatingForSiri;
@property(nonatomic) _Bool skipMotionCheck; // @synthesize skipMotionCheck=_skipMotionCheck;
@property(nonatomic) double phoneUnlockDate; // @synthesize phoneUnlockDate=_phoneUnlockDate;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool supportsConfirmationACK; // @synthesize supportsConfirmationACK=_supportsConfirmationACK;
@property(nonatomic) _Bool authPrompt; // @synthesize authPrompt=_authPrompt;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) _Bool useToken; // @synthesize useToken=_useToken;
@property(retain, nonatomic) NSData *awdlInfo; // @synthesize awdlInfo=_awdlInfo;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000009a51a
- (unsigned long long)hash;	// IMP=0x001000000009a2af
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009a019
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000099e59
- (void)copyTo:(id)arg1;	// IMP=0x0010000000099cec
- (void)writeTo:(id)arg1;	// IMP=0x0010000000099b5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000099b50
- (id)dictionaryRepresentation;	// IMP=0x00100000000991e2
- (id)description;	// IMP=0x0010000000099133
@property(nonatomic) _Bool hasIsAuthenticatingForSiri;
@property(nonatomic) _Bool hasSkipMotionCheck;
@property(nonatomic) _Bool hasPhoneUnlockDate;
@property(readonly, nonatomic) _Bool hasAppName;
@property(nonatomic) _Bool hasSupportsConfirmationACK;
@property(nonatomic) _Bool hasAuthPrompt;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasKeyData;
@property(nonatomic) _Bool hasUseToken;
@property(readonly, nonatomic) _Bool hasAwdlInfo;
@property(nonatomic) _Bool hasVersion;

@end

