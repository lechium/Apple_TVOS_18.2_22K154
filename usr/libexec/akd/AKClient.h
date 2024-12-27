//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAuditToken, NSData, NSString, NSXPCConnection;

@interface AKClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_fullName;	// 24 = 0x18
    NSString *_description;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    BSAuditToken *_auditToken;	// 48 = 0x30
    NSString *_authorizationAccessLevel;	// 56 = 0x38
}

+ (_Bool)isAppWithBundleIDForeground:(id)arg1;	// IMP=0x004000000000a48c
- (void).cxx_destruct;	// IMP=0x002000000000bd58
@property(readonly, nonatomic) NSString *authorizationAccessLevel; // @synthesize authorizationAccessLevel=_authorizationAccessLevel;
- (id)_stringValueForEntitlement:(id)arg1;	// IMP=0x001000000000bca8
- (_Bool)_boolValueForEntitlement:(id)arg1;	// IMP=0x001000000000bc14
- (id)_arrayValueForEntitlement:(id)arg1;	// IMP=0x001000000000bb8e
@property(readonly, nonatomic) _Bool authorizationClientProvidesUI;
@property(readonly, nonatomic) _Bool authorizationRequiresRapport;
- (id)_authorizationAccessLevels;	// IMP=0x001000000000bb06
@property(readonly, nonatomic) NSString *teamID;
- (id)_appIDForIOS;	// IMP=0x001000000000ba12
- (id)_appIDForMacOS;	// IMP=0x001000000000b9b0
@property(readonly, nonatomic) NSString *appID;
@property(readonly, nonatomic) NSString *bundleID;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b637
- (id)description;	// IMP=0x001000000000b56b
- (id)_bundle;	// IMP=0x001000000000b43e
- (id)_bundleNonPluginKit;	// IMP=0x001000000000b328
@property(readonly, nonatomic) NSString *localizedAppName;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSData *auditTokenData;
@property(readonly, nonatomic) _Bool isPermittedToAccessBirthday;
@property(readonly, nonatomic) _Bool isPermittedToProxyAuthorizationBundleIdentifier;
@property(readonly, nonatomic) _Bool isExemptedFromMandatoryUISecurityUpgrade;
- (id)_exemptedBundleIDsFromMandatoryUISecurityUpgrade;	// IMP=0x001000000000add3
@property(readonly, nonatomic) _Bool isPermittedForInteractiveAuthOnLimitedContext;
- (id)_permittedProcessNamesForInteractiveAuthOnLimitedContext;	// IMP=0x001000000000acef
@property(readonly, nonatomic) _Bool isPermittedToProxyInitialAuth;
- (id)_permitedProcessNamesToProxyInitialAuthWhiteList;	// IMP=0x001000000000abc2
@property(readonly, nonatomic) _Bool isPermittedToProxy;
- (id)_permittedProcessNamesToProxyAllowlist;	// IMP=0x001000000000aa71
- (_Bool)_isOnInternalBuild;	// IMP=0x001000000000aa60
- (_Bool)_isAppleBinary;	// IMP=0x001000000000aa58
- (id)_approvedCodeSigningIdentifiers;	// IMP=0x001000000000aa21
- (id)_codeSigningIdentifier;	// IMP=0x001000000000a9a9
- (_Bool)_hasApprovedSigningIdentifier;	// IMP=0x001000000000a935
@property(readonly, nonatomic) _Bool hasBirthdayAccess;
@property(readonly, nonatomic) _Bool hasPrivateSignedAccess;
@property(readonly, nonatomic) _Bool hasPrivateAccess;
@property(readonly, nonatomic) _Bool hasPublicAccess;
@property(readonly, nonatomic) _Bool hasOwnerAccess;
@property(readonly, nonatomic) _Bool hasInternalAccess;
@property(readonly, nonatomic) _Bool hasWriteAccess;
@property(readonly, nonatomic) _Bool hasCompanionKeyEnvelopeAccess;
@property(readonly, nonatomic) _Bool hasServerOnlyDeviceListAccess;
@property(readonly, nonatomic) _Bool hasSiwaAccountListAccess;
@property(readonly, nonatomic) _Bool hasSiwaUnderageEntitlementAccess;
@property(readonly, nonatomic) _Bool hasSiwaDefaultEntitlementAccess;
@property(readonly, nonatomic) _Bool hasSiwaEntitlement;
@property(readonly, nonatomic) _Bool hasInternalEntitledAccess;
@property(readonly, nonatomic) _Bool hasInternalPrivateAccess;
- (_Bool)hasInternalPrivateEntitlementAccess;	// IMP=0x001000000000a644
@property(readonly, nonatomic) NSXPCConnection *xpcConnection;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x001000000000a5b5
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000000a54a

@end

