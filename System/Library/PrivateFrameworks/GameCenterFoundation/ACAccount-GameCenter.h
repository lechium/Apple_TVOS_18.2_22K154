//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@interface ACAccount (GameCenter)
- (void)_gkSetProperty:(id)arg1 forKey:(id)arg2 environment:(long long)arg3;	// IMP=0x00600000000a4010
- (id)_gkPropertyForKey:(id)arg1 environment:(long long)arg2;	// IMP=0x00600000000a3fa2
- (id)_gkModifiedDateForProperty:(id)arg1 environment:(long long)arg2;	// IMP=0x00600000000a3f34
- (id)_gkCredentialForEnvironment:(long long)arg1;	// IMP=0x00600000000a3da7
- (id)_gkCredentialsForEnvironment:(long long)arg1;	// IMP=0x00600000000a35eb
- (id)_gkCredentials;	// IMP=0x00600000000a35d7
- (void)_gkSetPlayerInternal:(id)arg1;	// IMP=0x00600000000a3506
- (id)_gkPlayerInternal;	// IMP=0x00600000000a323a
- (id)_gkPerEnvironmentTokens;	// IMP=0x00600000000a3153
- (void)_gkSetToken:(id)arg1 forEnvironment:(long long)arg2;	// IMP=0x00600000000a301c
- (id)_gkTokenForEnvironment:(long long)arg1;	// IMP=0x00600000000a2ee8
- (_Bool)_gkIsPrimaryForEnvironment:(long long)arg1;	// IMP=0x00600000000a2e2b
- (id)gkDirtyProperties;	// IMP=0x00600000000d9c9b
@end

