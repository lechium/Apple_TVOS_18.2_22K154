//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSPlaceholderDictionary : NSMutableDictionary
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000199d8e
- (void)dealloc;	// IMP=0x000000000019a643
- (unsigned long long)retainCount;	// IMP=0x000000000019a63b
- (oneway void)release;	// IMP=0x000000000019a63a
- (id)retain;	// IMP=0x000000000019a636
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x000000000019a4ee
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x000000000019a3cc
- (id)init;	// IMP=0x000000000019a381
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000019a246
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x000000000019a13b
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000199d90
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000199cba
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000199bf6
- (id)keyEnumerator;	// IMP=0x0000000000199b32
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000199a6e
- (unsigned long long)count;	// IMP=0x00000000001999aa

@end

