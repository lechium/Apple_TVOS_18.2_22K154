//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSInflectionRule.h"

@class NSMorphology;

__attribute__((visibility("hidden")))
@interface _NSInflectionRuleExplicit : NSInflectionRule
{
    NSMorphology *_morphology;	// 8 = 0x8
    long long _agreeWithConcept;	// 16 = 0x10
    long long _agreeWithArgument;	// 24 = 0x18
    long long _referentConcept;	// 32 = 0x20
}

@property(readonly, nonatomic) long long referentConcept; // @synthesize referentConcept=_referentConcept;
@property(readonly, nonatomic) long long agreeWithArgument; // @synthesize agreeWithArgument=_agreeWithArgument;
@property(readonly, nonatomic) long long agreeWithConcept; // @synthesize agreeWithConcept=_agreeWithConcept;
@property(readonly, copy) NSMorphology *morphology; // @synthesize morphology=_morphology;
- (_Bool)isAutomatic;	// IMP=0x00000000008c2446
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008c2354
- (unsigned long long)hash;	// IMP=0x00000000008c22c3
- (id)description;	// IMP=0x00000000008c205c
- (void)dealloc;	// IMP=0x00000000008c1ff7
- (id)initWithMorphology:(id)arg1 agreeWithArgument:(long long)arg2 agreeWithConcept:(long long)arg3 referentConcept:(long long)arg4;	// IMP=0x00000000008c1f23
- (id)initWithAttributesDictionary:(id)arg1;	// IMP=0x00000000008c1d08

@end

