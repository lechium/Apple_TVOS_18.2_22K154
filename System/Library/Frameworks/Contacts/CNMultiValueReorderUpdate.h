//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNMultiValueReorderUpdate
{
    NSOrderedSet *_values;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012d225
@property(readonly, copy, nonatomic) NSOrderedSet *values; // @synthesize values=_values;
- (id)description;	// IMP=0x000000000012d182
- (long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2;	// IMP=0x000000000012cfa1
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;	// IMP=0x000000000012ceb2
- (id)initWithValues:(id)arg1;	// IMP=0x000000000012ce12
- (_Bool)applyToABPerson:(void *)arg1 abmultivalue:(void *)arg2 propertyDescription:(id)arg3 isUnified:(_Bool)arg4 logger:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000d5d36

@end

