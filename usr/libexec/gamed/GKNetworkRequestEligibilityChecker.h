//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKNetworkRequestEligibilityChecker : NSObject
{
    MISSING_TYPE *hasAcknowledgedLatestGDPR;	// 8 = 0x8
    MISSING_TYPE *alwaysAllowedBagKeys;	// 16 = 0x10
    MISSING_TYPE *isAppUnlistedAndDisallowed;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x004000000019f575
- (id)init;	// IMP=0x001000000019f542
- (id)verifyEligibilityWithBagKey:(id)arg1;	// IMP=0x001000000019f490
- (id)initWithHasAcknowledgedLatestGDPR:(_Bool)arg1 alwaysAllowedBagKeysObject:(id)arg2 isAppUnlistedAndDisallowed:(_Bool)arg3;	// IMP=0x001000000019f37b

@end

