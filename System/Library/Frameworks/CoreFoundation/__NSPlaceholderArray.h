//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableArray.h"

__attribute__((visibility("hidden")))
@interface __NSPlaceholderArray : NSMutableArray
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017a89
- (void)dealloc;	// IMP=0x0000000000018333
- (unsigned long long)retainCount;	// IMP=0x000000000001832b
- (oneway void)release;	// IMP=0x000000000001832a
- (id)retain;	// IMP=0x0000000000018326
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x00000000000181de
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000000000180bc
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000017f86
- (id)_initByAdoptingBuffer:(id *)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x0000000000017f4f
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000017c52
- (id)initWithArray:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x0000000000017bd5
- (id)initWithArray:(id)arg1;	// IMP=0x0000000000017ad3
- (id)init;	// IMP=0x0000000000017a8b
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000179b5
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000178f1
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000001782d
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000017769
- (unsigned long long)count;	// IMP=0x00000000000176a5

@end

