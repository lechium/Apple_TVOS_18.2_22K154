//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOTileCacheReserved : NSObject
{
    struct mutex _reservedLock;	// 8 = 0x8
    struct list<CacheItem, std::allocator<CacheItem>> _reservedList;	// 72 = 0x48
    struct unordered_map<_GEOTileKey, std::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<CacheItem, void *>>>> _reservedMap;	// 96 = 0x60
    unsigned long long _reservedMaxCapacity;	// 136 = 0x88
    unsigned long long _reservedMaxCost;	// 144 = 0x90
    unsigned long long _reservedCurrentCost;	// 152 = 0x98
    unsigned long long _reservedCurrentCount;	// 160 = 0xa0
}

- (id).cxx_construct;	// IMP=0x00000000001e581a
- (void).cxx_destruct;	// IMP=0x00000000001e57c8
- (void)dealloc;	// IMP=0x00000000001e5786

@end

