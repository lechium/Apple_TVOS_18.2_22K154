//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOrderedSet.h"

__attribute__((visibility("hidden")))
@interface __NSOrderedSetI : NSOrderedSet
{
    unsigned int _used:56;	// 8 = 0x8
    unsigned int _stride:2;	// 15 = 0xf
    unsigned int _szidx:6;	// 15 = 0xf
    id _list[0];	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000007701
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000006ecb
- (void)dealloc;	// IMP=0x0000000000007ae0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000076fb
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000073f1
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000007226
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000006ece
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000006cc1
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000006b5d
- (unsigned long long)count;	// IMP=0x0000000000006b3c

@end

