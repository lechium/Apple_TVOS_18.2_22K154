//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOrderedSetChanges.h"

__attribute__((visibility("hidden")))
@interface NSConcreteOrderedSetChanges : NSOrderedSetChanges
{
    CDStruct_29daef6c _changes;	// 8 = 0x8
}

- (void)addChange:(id)arg1;	// IMP=0x0000000000848ba8
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000848b53
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000848b06
- (void)_enumerateChanges:(unsigned long long)arg1 stop:(_Bool *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000848a0d
- (unsigned long long)changeCount;	// IMP=0x00000000008489fb
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x00000000008489de
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000008489c4
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000008489aa
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000848996
- (unsigned long long)count;	// IMP=0x0000000000848985
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000848947
- (void)dealloc;	// IMP=0x00000000008488e4
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000084884c
- (id)init;	// IMP=0x00000000008487ba

@end

