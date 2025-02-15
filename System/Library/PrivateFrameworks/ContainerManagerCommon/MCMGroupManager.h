//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentityCache;

__attribute__((visibility("hidden")))
@interface MCMGroupManager : NSObject
{
    MCMUserIdentityCache *_userIdentityCache;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x006000000009660d
- (void).cxx_destruct;	// IMP=0x000000000009652b
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
- (id)groupContainerIdentifiersForOwnerIdentifier:(id)arg1 groupContainerClass:(unsigned long long)arg2 codeSignInfo:(id)arg3 withError:(id *)arg4;	// IMP=0x0000000000096176
- (void)_cleanupUnreferencedGroupContainersForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 referenceCounts:(id)arg3 context:(id)arg4;	// IMP=0x0000000000095a9a
- (void)reconcileGroupContainersForContainerClass:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x0000000000095885
- (id)initWithUserIdentityCache:(id)arg1;	// IMP=0x00000000000957fa

@end

