//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKClient;

@interface AKTokenUpgrader : NSObject
{
    AKClient *_client;	// 8 = 0x8
    AKAccountManager *_accountManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000db693
- (void)_performTokenUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000db3da
- (id)_fetchDependentAuthTokenForAltDSID:(id)arg1;	// IMP=0x00100000000db2f4
- (void)upgradeTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dafb4
- (id)initWithClient:(id)arg1;	// IMP=0x00100000000daf1f

@end

