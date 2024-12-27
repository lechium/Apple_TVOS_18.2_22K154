//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

__attribute__((visibility("hidden")))
@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy
{
    _Bool _requiresEntitlement;	// 8 = 0x8
}

+ (id)defaultPolicy;	// IMP=0x0060000000bbcb24
+ (id)policyWithEntitlementRequirement:(_Bool)arg1;	// IMP=0x0060000000bbcaf7
@property(readonly) _Bool requiresEntitlement; // @synthesize requiresEntitlement=_requiresEntitlement;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bbcada
- (unsigned long long)hash;	// IMP=0x0000000000bbcac4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bbca1b
- (id)__initWithEntitlementRequirement:(_Bool)arg1;	// IMP=0x0000000000bbc9d9
- (id)init;	// IMP=0x0000000000bbc931

@end

