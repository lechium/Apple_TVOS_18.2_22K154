//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (Diff)
- (id)mf_diffWithArray:(id)arg1;	// IMP=0x0030000000006634
- (id)mf_uncommentedAddressList;	// IMP=0x003000000000ae02
- (void)mf_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0030000000032e6e
- (id)mf_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0030000000032e3d
- (id)mf_indicesOfStringsWithPrefix:(id)arg1;	// IMP=0x0030000000032ca1
- (unsigned long long)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;	// IMP=0x0030000000033429
- (unsigned long long)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x003000000003340d
- (id)mf_objectEquivalentTo:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;	// IMP=0x00300000000333c6
- (id)mf_objectEquivalentTo:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x00300000000333aa
- (unsigned long long)mf_indexOfObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;	// IMP=0x00300000000332f6
- (unsigned long long)mf_indexOfObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x00300000000332da
- (id)mf_dictionaryWithMessagesSortedByStore;	// IMP=0x00300000000334dd
- (id)mf_permutations;	// IMP=0x003000000003498b
- (id)mf_subarraysOfSize:(unsigned long long)arg1;	// IMP=0x00300000000348ad
- (id)mf_groupBy:(CDUnknownBlockType)arg1;	// IMP=0x00300000000346cb
- (id)mf_partition:(CDUnknownBlockType)arg1;	// IMP=0x0030000000034533
- (id)mf_prefix:(unsigned long long)arg1;	// IMP=0x00300000000344ed
@property(readonly, nonatomic) NSArray *mf_tail;
- (id)mf_foldLeftWithStart:(id)arg1 reduce:(CDUnknownBlockType)arg2;	// IMP=0x0030000000034379
- (id)mf_reduce:(CDUnknownBlockType)arg1;	// IMP=0x003000000003432a
- (id)mf_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00300000000341b1
- (id)mf_mapSelector:(SEL)arg1;	// IMP=0x0030000000034011
- (id)mf_map:(CDUnknownBlockType)arg1;	// IMP=0x0030000000033e83
- (id)mf_uniquifyWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x0030000000033be9
- (id)mf_flatten;	// IMP=0x0030000000033a4c
- (unsigned long long)mf_countObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0030000000033937
- (id)mf_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x003000000003382a
- (id)mf_filter:(CDUnknownBlockType)arg1;	// IMP=0x00300000000337ae
- (_Bool)mf_any:(CDUnknownBlockType)arg1;	// IMP=0x0030000000033795
- (_Bool)mf_all:(CDUnknownBlockType)arg1;	// IMP=0x0030000000033731
@end

