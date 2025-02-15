//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AKAuthorizationRequest, NSData, NSNumber, NSString;

@interface CDCredentialRequestBuilder : NSObject
{
    _Bool _isRapportLogin;	// 8 = 0x8
    ACAccount *_authKitAccount;	// 16 = 0x10
    NSString *_appBundleIdentifier;	// 24 = 0x18
    NSString *_appTeamIdentifier;	// 32 = 0x20
    NSString *_appIdentifier;	// 40 = 0x28
    NSString *_appName;	// 48 = 0x30
    NSData *_appIconData;	// 56 = 0x38
    NSNumber *_appIconScale;	// 64 = 0x40
    NSString *_deviceClass;	// 72 = 0x48
    NSString *_deviceName;	// 80 = 0x50
    AKAuthorizationRequest *_baseAppleIDRequest;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000080c0
@property(nonatomic) _Bool isRapportLogin; // @synthesize isRapportLogin=_isRapportLogin;
@property(copy, nonatomic) AKAuthorizationRequest *baseAppleIDRequest; // @synthesize baseAppleIDRequest=_baseAppleIDRequest;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(copy, nonatomic) NSNumber *appIconScale; // @synthesize appIconScale=_appIconScale;
@property(copy, nonatomic) NSData *appIconData; // @synthesize appIconData=_appIconData;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(copy, nonatomic) NSString *appTeamIdentifier; // @synthesize appTeamIdentifier=_appTeamIdentifier;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) ACAccount *authKitAccount; // @synthesize authKitAccount=_authKitAccount;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000007ec5
- (id)_appleIDRequest;	// IMP=0x0010000000007d5c
- (id)_clientContext;	// IMP=0x0010000000007caf
- (id)credentialRequest;	// IMP=0x0010000000007bea

@end

