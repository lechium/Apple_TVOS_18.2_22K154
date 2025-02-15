//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _NSFaultingMutableOrderedSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableOrderedSet
{
    _NSFaultingMutableOrderedSetMutationMethods *_mutationMethods;	// 32 = 0x20
}

- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x000000000025ca5a
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000025ca2b
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000025c9fc
- (void)unionSet:(id)arg1;	// IMP=0x000000000025c906
- (void)minusSet:(id)arg1;	// IMP=0x000000000025c742
- (void)intersectSet:(id)arg1;	// IMP=0x000000000025c57e
- (void)unionOrderedSet:(id)arg1;	// IMP=0x000000000025c488
- (void)minusOrderedSet:(id)arg1;	// IMP=0x000000000025c2d4
- (void)intersectOrderedSet:(id)arg1;	// IMP=0x000000000025c105
- (void)removeObjectsInArray:(id)arg1;	// IMP=0x000000000025bf3c
- (void)removeAllObjects;	// IMP=0x000000000025be7b
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x000000000025bce8
- (void)removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x000000000025bc25
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000025b9a6
- (void)insertObjects:(id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000025b87e
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000025b783
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000025b571
- (void)addObject:(id)arg1;	// IMP=0x000000000025b44d
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000025b307
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000025b276
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000025b137
- (void)dealloc;	// IMP=0x000000000025b07f

@end

