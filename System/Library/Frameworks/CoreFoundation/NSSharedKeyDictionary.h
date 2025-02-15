//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

@class NSSharedKeySet;

__attribute__((visibility("hidden")))
@interface NSSharedKeyDictionary : NSMutableDictionary
{
    NSSharedKeySet *_keyMap;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    id *_values;	// 24 = 0x18
    CDUnknownFunctionPointerType _ifkIMP;	// 32 = 0x20
    NSMutableDictionary *_sideDic;	// 40 = 0x28
    unsigned long long _mutations;	// 48 = 0x30
    _Bool _doKVO;	// 56 = 0x38
}

+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x006000000017dc0a
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000017dc07
+ (id)sharedKeyDictionaryWithKeySet:(id)arg1;	// IMP=0x006000000017c4d4
- (void)setObservationInfo:(void *)arg1;	// IMP=0x000000000017dc0d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017c99f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017c6d0
- (Class)classForCoder;	// IMP=0x000000000017c6c4
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017c6b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017c5e4
- (void)dealloc;	// IMP=0x000000000017c503
- (id)initWithKeySet:(id)arg1;	// IMP=0x000000000017c3d3
- (id)keySet;	// IMP=0x000000000017c3c7
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000017c1d3
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000017bedc
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000017bb5c
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000017b7a0
- (id)keyEnumerator;	// IMP=0x000000000017b5f7
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000017b37e
- (id)objectForKey:(id)arg1;	// IMP=0x000000000017b305
- (unsigned long long)count;	// IMP=0x000000000017b2c9

@end

