//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (HKUUID)
+ (_Bool)_permutationHelperForArray:(id)arg1 number:(long long)arg2 permutationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000129773
+ (id)hk_arrayWithCount:(long long)arg1 generator:(CDUnknownBlockType)arg2;	// IMP=0x0010000000127c38
+ (id)indexableKeyPathsWithPrefix:(id)arg1;	// IMP=0x00100000001de05f
- (id)hk_dataForAllUUIDs;	// IMP=0x001000000007264d
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000723b3
- (id)hk_splitWithBucketCount:(long long)arg1;	// IMP=0x0010000000129e13
- (id)hk_mutableSubarrayWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000129d6e
- (_Bool)_permutationsWithCount:(long long)arg1 permutation:(id)arg2 depth:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000129a67
- (void)hk_enumeratePermutationsOfSubsetsOfLength:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000012989c
- (id)hk_shuffled;	// IMP=0x0010000000129726
- (id)hk_reversed;	// IMP=0x00100000001296d6
- (void)hk_enumeratePermutationsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001294b6
- (id)hk_mapToSet:(CDUnknownBlockType)arg1;	// IMP=0x001000000012927e
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129009
- (id)hk_orPredicateWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128fa6
- (void)hk_partitionArrayWithPartitionSetupBlock:(CDUnknownBlockType)arg1 partitionMembershipCheckBlock:(CDUnknownBlockType)arg2 partitionExtendBlock:(CDUnknownBlockType)arg3 partitionFinalizeBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000128d20
- (_Bool)hk_allElementsEqual;	// IMP=0x0010000000128cae
- (_Bool)hk_allElementsUnique;	// IMP=0x0010000000128c3b
- (_Bool)hk_containsObjectsInArray:(id)arg1;	// IMP=0x0010000000128b98
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128a0c
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000012885c
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001286b4
- (double)hk_sumUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000012854e
- (id)hk_averageUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128371
- (_Bool)hk_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128238
- (_Bool)hk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128205
- (id)hk_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018518
- (id)hk_foldRightFrom:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x0010000000128059
- (id)hk_filter:(CDUnknownBlockType)arg1;	// IMP=0x00100000000178ea
- (id)hk_map:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0010000000127d6e
- (id)hk_map:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f84f
- (id)_hk_featureAvailabilityRequirements;	// IMP=0x00100000001dd60b
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001de6a4
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001de0e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

