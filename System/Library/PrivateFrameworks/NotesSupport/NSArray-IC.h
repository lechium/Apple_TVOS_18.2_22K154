//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (IC)
+ (id)ic_arrayFromNonNilObject:(id)arg1;	// IMP=0x0020000000022818
- (_Bool)ic_allSatisfy:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023db0
- (id)ic_dictionaryByHashingContentWithFunction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023bbe
- (id)ic_subarrayFromIndex:(unsigned long long)arg1;	// IMP=0x0010000000023b7b
- (id)ic_reduceStartingWithState:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000239a1
- (id)ic_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023823
- (id)ic_map:(CDUnknownBlockType)arg1;	// IMP=0x00100000000236e9
- (id)ic_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000235af
- (id)ic_arrayByAddingObjectsFromNonNilArray:(id)arg1;	// IMP=0x0010000000023561
- (id)ic_arrayByAddingNonNilObject:(id)arg1;	// IMP=0x0010000000023513
- (id)ic_objectAfter:(id)arg1 wrap:(_Bool)arg2;	// IMP=0x001000000002347c
- (id)ic_objectBefore:(id)arg1 wrap:(_Bool)arg2;	// IMP=0x00100000000233e9
- (id)ic_objectAfter:(id)arg1;	// IMP=0x00100000000233d5
- (id)ic_objectBefore:(id)arg1;	// IMP=0x00100000000233c1
- (_Bool)ic_indexIsValid:(long long)arg1;	// IMP=0x0010000000023396
- (unsigned long long)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long *)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x0010000000023297
- (id)ic_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;	// IMP=0x0010000000023068
- (id)ic_arrayBySplittingIntoTwoArraysWithMaxPrefixCount:(unsigned long long)arg1 prefixMatchingPredicate:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022e6b
- (id)ic_arrayBySplittingIntoTwoArraysWithMaxPrefixCount:(unsigned long long)arg1;	// IMP=0x0010000000022d7a
- (id)ic_firstObjectConformingToProtocol:(id)arg1;	// IMP=0x0010000000022caa
- (id)ic_objectsConformingToProtocol:(id)arg1;	// IMP=0x0010000000022bec
- (id)ic_firstObjectOfClass:(Class)arg1;	// IMP=0x0010000000022b66
- (id)ic_objectsOfClass:(Class)arg1;	// IMP=0x0010000000022af1
- (id)ic_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022a92
- (_Bool)ic_containsObjectMatchingPredicate:(id)arg1;	// IMP=0x00100000000229d3
- (_Bool)ic_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000229a0
- (id)ic_objectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000002294e
@property(readonly, nonatomic) id ic_randomObject;
- (_Bool)ic_containsObjectOfClass:(Class)arg1;	// IMP=0x00100000000228b5
@end

