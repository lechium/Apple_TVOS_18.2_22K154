//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol FTPasswordManager, IDSAppleIDRegistrationCenterMessageDelivery;

@interface IDSAppleIDRegistrationCenter : NSObject
{
    NSMutableDictionary *_queues;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    id <IDSAppleIDRegistrationCenterMessageDelivery> _messageDelivery;	// 24 = 0x18
    id <FTPasswordManager> _passwordManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x002000000044e298
- (void).cxx_destruct;	// IMP=0x00200000004536b7
- (void)removeListener:(id)arg1;	// IMP=0x001000000045366a
- (void)addListener:(id)arg1;	// IMP=0x00100000004535e8
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x0010000000453538
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x0010000000453462
- (_Bool)authenticateRegistration:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x0010000000453381
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2;	// IMP=0x001000000045329f
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2 requireSilentAuth:(_Bool)arg3;	// IMP=0x00100000004531b9
- (_Bool)authenticateRegistration:(id)arg1 forceRenewal:(_Bool)arg2 requireSilentAuth:(_Bool)arg3;	// IMP=0x00100000004530d0
- (_Bool)validateRegion:(id)arg1 phoneNumber:(id)arg2 forRegistration:(id)arg3;	// IMP=0x0010000000452fb2
- (_Bool)queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x0010000000452ede
- (_Bool)_queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x0010000000452c14
- (_Bool)_validateRegionID:(id)arg1 phoneNumber:(id)arg2 registration:(id)arg3;	// IMP=0x00100000004528cd
- (_Bool)_registrationNeedsAuthentication:(id)arg1;	// IMP=0x0010000000452832
- (_Bool)_registrationIsAuthenticating:(id)arg1;	// IMP=0x00100000004527b1
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2 forceRenewal:(_Bool)arg3 failIfNotSilent:(_Bool)arg4;	// IMP=0x00100000004523ca
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2 failIfNotSilent:(_Bool)arg3;	// IMP=0x00100000004523b2
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2;	// IMP=0x001000000045239a
- (void)_fetchTokenForRegistrationInfo:(id)arg1 failIfNotSilent:(_Bool)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000451d81
- (void)_renewTokenForRegistrationInfo:(id)arg1 forceRenewal:(_Bool)arg2 failIfNotSilent:(_Bool)arg3;	// IMP=0x00100000004517d4
- (void)_noteSuccessfulToken:(id)arg1 profileID:(id)arg2 selfID:(id)arg3 forRegistrationInfo:(id)arg4 wasFetched:(_Bool)arg5;	// IMP=0x001000000045142f
- (void)_processRegionValidationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x0010000000451137
- (void)_processDefaultInvitationContextMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x0010000000450ea0
- (void)_postUserNotificationWithTitle:(id)arg1 message:(id)arg2 identifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000450d01
- (void)_notifyAuthenticationSuccess:(id)arg1;	// IMP=0x0010000000450918
- (void)_notifyAuthenticationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x001000000045029b
- (void)_notifyAuthenticating:(id)arg1;	// IMP=0x001000000044ffc5
- (void)_notifyRegionValidationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x001000000044f7fd
- (void)_notifyRegionValidationSuccess:(id)arg1 regionID:(id)arg2 phoneNumber:(id)arg3 context:(id)arg4 verified:(_Bool)arg5;	// IMP=0x001000000044f28a
- (void)_notifyInitialRegionQuerySuccess:(id)arg1;	// IMP=0x001000000044efa4
- (void)_removeMessageForRegistration:(id)arg1 fromQueueForKey:(id)arg2;	// IMP=0x001000000044ecd7
- (_Bool)_haveQueuedMessageForRegistration:(id)arg1 inQueueForKey:(id)arg2;	// IMP=0x001000000044ea60
- (void)_serviceQueueForKey:(id)arg1;	// IMP=0x001000000044e6f5
- (void)_setQueue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000044e63d
- (id)_queueForKey:(id)arg1;	// IMP=0x001000000044e579
- (void)dealloc;	// IMP=0x001000000044e4b7
- (id)init;	// IMP=0x001000000044e3f7
- (id)initWithMessageDelivery:(id)arg1 passwordManager:(id)arg2;	// IMP=0x001000000044e2ed

@end

