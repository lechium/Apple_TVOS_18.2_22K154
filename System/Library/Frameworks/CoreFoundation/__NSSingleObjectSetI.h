//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSet.h"

__attribute__((visibility("hidden")))
@interface __NSSingleObjectSetI : NSSet
{
    id element;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000040ccc
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000040776
- (void)dealloc;	// IMP=0x0000000000040cd7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040cd1
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000040adf
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000409b7
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000407f7
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x00000000000407b7
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000040779
- (id)objectEnumerator;	// IMP=0x0000000000040735
- (id)member:(id)arg1;	// IMP=0x00000000000406fc
- (unsigned long long)count;	// IMP=0x00000000000406f6

@end

