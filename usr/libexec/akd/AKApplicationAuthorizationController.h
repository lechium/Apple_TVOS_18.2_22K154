//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationStoreManager;
@protocol AKSharedAccountsStoring;

@interface AKApplicationAuthorizationController : NSObject
{
    AKAuthorizationStoreManager *_storeManager;	// 8 = 0x8
    id <AKSharedAccountsStoring> _sharedAccountsStorageController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009a7ab
- (void)_broadcastCredentialStateChange:(long long)arg1 forApplicationWithClientID:(id)arg2 withHandlerBundleID:(id)arg3;	// IMP=0x001000000009a5f0
- (void)_broadcastCredentialStateChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x001000000009a4e5
- (void)_notifyCredentialStateChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x001000000009a216
- (void)_credentialStateDidChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x001000000009a1af
- (void)_processCredentialStateChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a15b
- (void)_processCredentialStateChanges:(id)arg1;	// IMP=0x001000000009a04f
- (_Bool)revokeAuthorizationForAllApplicationsWithAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000099eb4
- (void)removeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000099e9e
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000099d75
- (void)storeAuthorization:(id)arg1 withAltDSID:(id)arg2 forClient:(id)arg3;	// IMP=0x0010000000099cdc
- (void)updateAuthorizationListWithMetadataInfo:(id)arg1 withAltDSID:(id)arg2;	// IMP=0x0010000000099c70
- (void)updateAuthorizationListWithMetadataInfo:(id)arg1 withAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000099b53
- (id)currentAuthorizationListVersionWithAltDSID:(id)arg1;	// IMP=0x0010000000099b3d
- (id)initWithStoreManager:(id)arg1 sharedAccountsStorageController:(id)arg2;	// IMP=0x0010000000099ade
- (id)initWithStoreManager:(id)arg1;	// IMP=0x0010000000099a4f
- (id)init;	// IMP=0x0010000000099a3b

@end

