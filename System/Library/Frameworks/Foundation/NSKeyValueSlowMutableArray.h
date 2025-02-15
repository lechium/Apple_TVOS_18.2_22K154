//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyArrays;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000007cb7e9
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000007cb773
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000007cb70c
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007cb6a5
- (void)removeLastObject;	// IMP=0x00000000007cb643
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000007cb5e3
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000007cb3d7
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000007cb2c4
- (void)addObject:(id)arg1;	// IMP=0x00000000007cb1c3
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000007cb18f
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007cb15b
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007cb113
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000007cb0bf
- (unsigned long long)count;	// IMP=0x00000000007cb051
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000007cafba
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007caf2d
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007cae5a

@end

