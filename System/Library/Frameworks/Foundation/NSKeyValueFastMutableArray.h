//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueMutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray
{
    NSKeyValueMutatingArrayMethodSet *_mutatingMethods;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000007ca846
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000007ca6cc
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000007ca63a
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007ca59b
- (void)removeLastObject;	// IMP=0x00000000007ca569
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000007ca4d7
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000007ca3b7
- (void)addObject:(id)arg1;	// IMP=0x00000000007ca377
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007ca306
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007ca279

@end

