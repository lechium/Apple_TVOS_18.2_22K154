//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableArray.h"

__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000078ac5
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00800000000787c0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000078d6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000078c25
- (unsigned long long)retainCount;	// IMP=0x0000000000078c20
- (_Bool)_isDeallocating;	// IMP=0x0000000000078c10
- (_Bool)_tryRetain;	// IMP=0x0000000000078bff
- (oneway void)release;	// IMP=0x0000000000078bfa
- (id)retain;	// IMP=0x0000000000078bf5
- (id)description;	// IMP=0x0000000000078b3a
- (unsigned long long)hash;	// IMP=0x0000000000078b35
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000078add
- (Class)classForCoder;	// IMP=0x0000000000078a9f
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000078a04
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000078960
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000078893
- (void)removeLastObject;	// IMP=0x0000000000078843
- (void)addObject:(id)arg1;	// IMP=0x0000000000078817
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000787c3
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000078720
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000007867d
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000785da
- (unsigned long long)count;	// IMP=0x000000000007859f

@end

