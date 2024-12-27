//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (IMAdditions)
- (long long)pf_indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0020000000003bd0
- (id)mt_uniqueOrdered;	// IMP=0x002000000001b70c
- (id)mt_uniqued;	// IMP=0x002000000001b6f0
- (id)mt_allObjectsExcludingIndexes:(id)arg1;	// IMP=0x002000000001b611
- (id)mt_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x002000000001b4ed
- (id)arrayByRemovingObject:(id)arg1;	// IMP=0x002000000001b46d
- (id)filter:(CDUnknownBlockType)arg1 compactMap:(CDUnknownBlockType)arg2;	// IMP=0x002000000001b281
- (id)mt_filter:(CDUnknownBlockType)arg1;	// IMP=0x002000000001b0d8
- (id)mt_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x002000000001af1a
- (void)concurrentMapWithStrideSize:(unsigned long long)arg1 on:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00200000000412c5
- (unsigned long long)strideCountForSize:(unsigned long long)arg1;	// IMP=0x002000000004128f
- (id)subarrayForStrideIndex:(unsigned long long)arg1 withStrideSize:(unsigned long long)arg2;	// IMP=0x0020000000041214
- (id)im_jsonSerializableValue;	// IMP=0x0020000000052f91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

