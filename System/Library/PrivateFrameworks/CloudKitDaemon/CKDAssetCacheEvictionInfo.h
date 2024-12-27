//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject
{
    _Bool _forced;	// 8 = 0x8
    _Bool _clearRegisteredItems;	// 9 = 0x9
    NSMutableOrderedSet *_itemIDsToUnregister;	// 16 = 0x10
    NSMutableOrderedSet *_assetHandleItemIDsToDelete;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000256924
@property(readonly, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete; // @synthesize assetHandleItemIDsToDelete=_assetHandleItemIDsToDelete;
@property(readonly, nonatomic) NSMutableOrderedSet *itemIDsToUnregister; // @synthesize itemIDsToUnregister=_itemIDsToUnregister;
@property _Bool clearRegisteredItems; // @synthesize clearRegisteredItems=_clearRegisteredItems;
@property(readonly, nonatomic) _Bool forced; // @synthesize forced=_forced;
- (id)initWithForced:(_Bool)arg1;	// IMP=0x0000000000256877

@end

