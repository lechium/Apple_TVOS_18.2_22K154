//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBLessThanConditionDomainRestriction : RBDomainRestriction
{
    NSString *_condition;	// 8 = 0x8
    long long _value;	// 16 = 0x10
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000007e94d
- (void).cxx_destruct;	// IMP=0x000000000007f0b9
- (id)description;	// IMP=0x000000000007f02a
- (unsigned long long)hash;	// IMP=0x000000000007eff7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007ef5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ef50
- (id)allEntitlements;	// IMP=0x000000000007ef37
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000007ecfe
- (id)_initWithCondition:(id)arg1 value:(long long)arg2;	// IMP=0x000000000007e8ae

@end

