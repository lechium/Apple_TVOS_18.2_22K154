//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface MTLToolsObjectCache : NSObject
{
    NSMapTable *_map;	// 8 = 0x8
    struct recursive_mutex _lock;	// 16 = 0x10
    struct vector<id, std::allocator<id>> _keyRemoveList;	// 80 = 0x50
    struct os_unfair_lock_s _listLock;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x00000000000b1ce6
- (void).cxx_destruct;	// IMP=0x00000000000b1cb9
- (void)dealloc;	// IMP=0x00000000000b1c7e
- (id)getCachedObjectForKey:(id)arg1 onMiss:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b1bcb
- (id)getCachedObjectForKey:(id)arg1;	// IMP=0x00000000000b1b4b
- (void)removeKey:(id)arg1;	// IMP=0x00000000000b1933
- (id)init;	// IMP=0x00000000000b18c0

@end

