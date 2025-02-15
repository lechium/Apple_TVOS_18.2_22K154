//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (NSOrderedSetDiffing)
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x0050000000760043
+ (_Bool)supportsSecureCoding;	// IMP=0x005000000075fbbb
- (id)orderedSetByApplyingDifference:(id)arg1;	// IMP=0x0010000000757e07
- (id)differenceFromOrderedSet:(id)arg1;	// IMP=0x0010000000757df3
- (id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00100000007576be
- (id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(CDUnknownBlockType)arg3;	// IMP=0x001000000075763a
- (Class)classForCoder;	// IMP=0x0010000000760032
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000075fdac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000075fbc3
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00100000007c5f56
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000007c5e4b
- (id)valueForKey:(id)arg1;	// IMP=0x00100000007c5bdd
- (id)_minForKeyPath:(id)arg1;	// IMP=0x00100000007c5b45
- (id)_maxForKeyPath:(id)arg1;	// IMP=0x00100000007c5aad
- (id)_countForKeyPath:(id)arg1;	// IMP=0x00100000007c5a78
- (id)_avgForKeyPath:(id)arg1;	// IMP=0x00100000007c59ff
- (id)_sumForKeyPath:(id)arg1;	// IMP=0x00100000007c58e2
- (_Bool)_validateValue:(inout id *)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id *)arg4;	// IMP=0x00100000007c9245
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;	// IMP=0x00100000007c9202
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000007c91ce
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000007c919a
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000007c9166
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000007c9132
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00100000007d95c1
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x00100000007d9555
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00100000007d94e9
- (id)filteredOrderedSetUsingPredicate:(id)arg1;	// IMP=0x001000000083179a
- (id)sortedArrayUsingDescriptors:(id)arg1;	// IMP=0x00100000008617ba
@end

