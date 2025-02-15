//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (AppleIDAuthentication)
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0090000000003885
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x009000000000386d
- (id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1;	// IMP=0x00900000000035e6
- (id)aida_accountForAltDSID:(id)arg1;	// IMP=0x0090000000003380
- (id)aida_accountForPrimaryiCloudAccount;	// IMP=0x0090000000003321
- (id)aida_accountForiCloudAccount:(id)arg1;	// IMP=0x0090000000003002
- (id)aida_AppleIDAuthenticationAccounts;	// IMP=0x0090000000002fa3
- (id)aida_AppleIDAuthenticationAccountType;	// IMP=0x0090000000002f87
- (id)_primaryiCloudAccount;	// IMP=0x0090000000002d72
@end

