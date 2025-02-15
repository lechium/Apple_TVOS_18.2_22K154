//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKClient;
@protocol AKAuthorizationStoring;

@interface AKAuthorizationCredentialStateController : NSObject
{
    AKClient *_client;	// 8 = 0x8
    AKAccountManager *_accountManager;	// 16 = 0x10
    id <AKAuthorizationStoring> _localAccountsStorageController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000089d61
@property(retain, nonatomic) id <AKAuthorizationStoring> localAccountsStorageController; // @synthesize localAccountsStorageController=_localAccountsStorageController;
@property(retain, nonatomic) AKAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (_Bool)_verifyUserID:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x0010000000089b59
- (id)_fetchDeveloperTeamWithClientID:(id)arg1 withAltDSID:(id)arg2;	// IMP=0x001000000008991d
- (id)_fetchDeveloperTeamWithTeamID:(id)arg1 withAltDSID:(id)arg2;	// IMP=0x00100000000896bc
- (long long)_sanitizedCredentialStateForExternalClients:(long long)arg1;	// IMP=0x00100000000896b3
- (_Bool)_isCapableOfSilentAuthForRequest:(id)arg1;	// IMP=0x00100000000896ab
- (_Bool)_demoModeEnabled;	// IMP=0x001000000008965b
- (void)_getLocalCredentialStateWithStateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008857e
- (long long)_internalCredentialStateForUserState:(long long)arg1 error:(id)arg2;	// IMP=0x0010000000088514
- (void)_verifyClientInformationForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000882f5
- (void)getCredentialStateForClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008811e
- (long long)getInternalCredentialStateForCredentialRequestContext:(id)arg1;	// IMP=0x0010000000087c72
- (void)getCredentialStateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087464
- (id)initWithClient:(id)arg1 accountManager:(id)arg2 localAccountsStorageController:(id)arg3 sharedAccountsStorageController:(id)arg4;	// IMP=0x0010000000087422
- (id)initWithClient:(id)arg1;	// IMP=0x001000000008735a
- (id)init;	// IMP=0x001000000008732f

@end

