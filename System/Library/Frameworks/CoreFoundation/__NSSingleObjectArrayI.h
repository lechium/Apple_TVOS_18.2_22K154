//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface __NSSingleObjectArrayI : NSArray
{
    id _object;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000174995
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000174508
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000174a62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000174a5c
- (void)dealloc;	// IMP=0x00000000001749f3
- (id)objectEnumerator;	// IMP=0x0000000000174954
- (id)lastObject;	// IMP=0x0000000000174948
- (_Bool)isEqualToArray:(id)arg1;	// IMP=0x00000000001747ee
- (id)firstObject;	// IMP=0x00000000001747e2
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001746b8
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000017450b
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000174303
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001741f1
- (unsigned long long)count;	// IMP=0x00000000001741eb

@end

