//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMClientIdentity, MCMUserIdentityCache, NSString;
@protocol MCMContainerCache;

__attribute__((visibility("hidden")))
@interface MCMContainerFactory : NSObject
{
    id <MCMContainerCache> _cache;	// 8 = 0x8
    MCMClientIdentity *_clientIdentity;	// 16 = 0x10
    MCMUserIdentityCache *_userIdentityCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c6f5f
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(readonly, nonatomic) MCMClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic) id <MCMContainerCache> cache; // @synthesize cache=_cache;
- (id)_containerPathIdentifierForContainerIdentity:(id)arg1;	// IMP=0x00000000000c6c99
- (id)_generateConcreteContainerIdentityFromContainerIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c69e8
- (id)_createContainerForContainerIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c5bea
- (_Bool)deleteURL:(id)arg1 forUserIdentity:(id)arg2 reclaimSoon:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000c573f
- (_Bool)deleteURL:(id)arg1 forUserIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c5706
- (id)containerForContainerIdentity:(id)arg1 createIfNecessary:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000c4726
- (id)createStagedContainerForContainerIdentity:(id)arg1 finalContainerPath:(id *)arg2 dataProtectionClass:(int)arg3 error:(id *)arg4;	// IMP=0x00000000000c3aff
- (id)initWithContainerCache:(id)arg1 clientIdentity:(id)arg2 userIdentityCache:(id)arg3;	// IMP=0x00000000000c3a27
- (_Bool)upgradeContainer:(id)arg1 clientIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c7a48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

