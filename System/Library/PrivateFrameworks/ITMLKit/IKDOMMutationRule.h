//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface IKDOMMutationRule
{
    _Bool _mutable;	// 8 = 0x8
}

+ (id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;	// IMP=0x006000000004dc99
+ (id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;	// IMP=0x006000000004d930
+ (id)mutationRuleWithDOMElement:(id)arg1 mutable:(_Bool)arg2;	// IMP=0x006000000004d01c
@property(readonly, nonatomic, getter=isMutable) _Bool mutable; // @synthesize mutable=_mutable;
- (void)applyOnDOMElement:(id)arg1;	// IMP=0x000000000004d23d
- (long long)compare:(id)arg1;	// IMP=0x000000000004d125
- (id)initWithDOMElement:(id)arg1 mutable:(_Bool)arg2;	// IMP=0x000000000004d0e3

@end

