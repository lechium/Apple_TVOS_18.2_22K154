//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface __NSFrozenArrayM : NSArray
{
    _Atomic struct __cow_state_t *cow;	// 8 = 0x8
    CDStruct_a6934631 storage;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000001676b
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000015c13
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000168b9
- (id)mutableCopy;	// IMP=0x000000000001683d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016838
- (id)copy;	// IMP=0x0000000000016833
- (void)dealloc;	// IMP=0x0000000000016770
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x0000000000016708
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000016292
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016058
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000015ff4
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000015e0b
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000015c22
- (unsigned long long)count;	// IMP=0x0000000000015c16

@end

