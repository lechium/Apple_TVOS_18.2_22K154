//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableArray
{
    struct objc_ivar *_ivar;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000007cbf54
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000007cbf11
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000007cbedd
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007cbea9
- (void)removeLastObject;	// IMP=0x00000000007cbe7b
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000007cbca7
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000007cbbb5
- (void)addObject:(id)arg1;	// IMP=0x00000000007cbaf9
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000007cbac5
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007cba91
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007cba49
- (id)_nonNilMutableArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000007cb9f4
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000007cb97e
- (unsigned long long)count;	// IMP=0x00000000007cb946
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007cb8e3
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007cb85f

@end

