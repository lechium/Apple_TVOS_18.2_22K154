//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBCompoundAllDomainRestriction : RBDomainRestriction
{
    NSArray *_restrictions;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000007beb4
- (void).cxx_destruct;	// IMP=0x000000000007c94f
- (id)description;	// IMP=0x000000000007c8cb
- (unsigned long long)hash;	// IMP=0x000000000007c8ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007c829
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007c81e
- (id)allEntitlements;	// IMP=0x000000000007c651
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000007c238
- (id)_initWithRestrictions:(id)arg1;	// IMP=0x000000000007be23

@end

