//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface __NSArrayI_Transfer : NSArray
{
    unsigned long long _used;	// 8 = 0x8
    id *_list;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000001524ed
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000151f18
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001525f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001525f2
- (void)dealloc;	// IMP=0x000000000015254e
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000152314
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001520d2
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000151f1b
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000151b48
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015196f
- (unsigned long long)count;	// IMP=0x0000000000151963

@end

