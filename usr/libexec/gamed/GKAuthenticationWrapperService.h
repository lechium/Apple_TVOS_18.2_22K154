//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKService, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GKAuthenticationWrapperService
{
    GKService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_authQueue;	// 16 = 0x10
    NSDictionary *_signatureLookup;	// 24 = 0x18
}

+ (id)serviceForBundleID:(id)arg1 player:(id)arg2;	// IMP=0x00200000000b4c26
+ (id)serviceForClient:(id)arg1 player:(id)arg2;	// IMP=0x00100000000b4b0d
+ (id)authenticationWrapperForService:(id)arg1;	// IMP=0x00100000000b4a31
- (void).cxx_destruct;	// IMP=0x00200000000bb7a5
- (void)forwardInvocation:(id)arg1;	// IMP=0x00100000000bb557
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000000bb413
- (oneway void)renewCredentialsForAccountWithUsername:(id)arg1 ttl:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bb237
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bafe3
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000bad2b
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000ba588
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000b9e2a
- (oneway void)setActivitySharingRepromptLastTriggerDate:(id)arg1;	// IMP=0x00100000000b9c82
- (oneway void)checkActivitySharingRepromptWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b9ada
- (oneway void)getAccountAgeCategoryForPlayerID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b9908
- (oneway void)notifyWidgetPlayerAuthenticationUpdated;	// IMP=0x00100000000b977d
- (oneway void)getOnboardingInfoForPlayerID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b95ab
- (oneway void)getLastContactsIntegrationConsentVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b9403
- (oneway void)setLastContactsIntegrationConsentVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000b925b
- (oneway void)getLastProfilePrivacyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b90b3
- (oneway void)setLastProfilePrivacyVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000b8f0b
- (oneway void)getLastFriendSuggestionsVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b8d63
- (oneway void)setLastFriendSuggestionsVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000b8bbb
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b8a13
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000b886b
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b86c3
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x00100000000b852e
- (oneway void)getLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b8386
- (oneway void)setLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x00100000000b81f1
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b8047
- (oneway void)notifyClient:(id)arg1 playerAuthenticatedFromClient:(id)arg2;	// IMP=0x00100000000b7e94
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b7d06
- (oneway void)getDevicePushTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b7b78
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b79ea
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b77c6
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b75f0
- (oneway void)switchLocalPlayerWithAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b743d
- (oneway void)authenticateNonActivePlayerWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 usingFastPath:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b7241
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 isGame:(_Bool)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000b703a
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 usingFastPath:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b7016
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 usingFastPath:(_Bool)arg3 displayAuthUI:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b6e1d
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b6df6
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 altDSID:(id)arg4 isGame:(_Bool)arg5 usingFastPath:(_Bool)arg6 displayAuthUI:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000b6261
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b5fec
- (oneway void)signOutPlayerWithOptOut:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b5a51
- (oneway void)didShowFullscreenSignIn;	// IMP=0x00100000000b58f0
- (oneway void)didShowSignInBanner;	// IMP=0x00100000000b578f
- (oneway void)fetchItemsForIdentityVerificationSignature:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b53fd
- (oneway void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b506b
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b4e6b
- (oneway void)isAppUnlistedAndDisallowed:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b4d3f
- (id)initWithService:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000b48a2
- (void)_buildSignatureLookupForProtocol:(id)arg1;	// IMP=0x00100000000b46ca
- (id)initWithClient:(id)arg1;	// IMP=0x00100000000b45a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

