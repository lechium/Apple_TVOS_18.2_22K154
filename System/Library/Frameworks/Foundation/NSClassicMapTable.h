//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMapTable.h"

__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable
{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
        void *notAKeyMarker;
    } _keyCallBacks;	// 8 = 0x8
    struct {
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _valueCallBacks;	// 56 = 0x38
    struct __CFBasicHash *_ht;	// 80 = 0x50
}

- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;	// IMP=0x00000000007f8452
- (id)allValues;	// IMP=0x00000000007f8255
- (id)allKeys;	// IMP=0x00000000007f8058
- (id)description;	// IMP=0x00000000007f7e18
- (void)_reclaim;	// IMP=0x00000000007f7e12
- (unsigned long long)count;	// IMP=0x00000000007f7dfd
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000007f7da7
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;	// IMP=0x00000000007f7ce4
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;	// IMP=0x00000000007f7bdf
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000007f7b89
- (id)objectForKey:(id)arg1;	// IMP=0x00000000007f7b32
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;	// IMP=0x00000000007f7ab3
- (id)copy;	// IMP=0x00000000007f79c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007f7976
- (void)removeAllItems;	// IMP=0x00000000007f7957
- (void)dealloc;	// IMP=0x00000000007f78f3
- (id)init;	// IMP=0x00000000007f78ea

@end

