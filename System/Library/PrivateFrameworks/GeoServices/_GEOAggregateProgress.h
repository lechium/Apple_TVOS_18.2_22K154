//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _GEOAggregateProgress : NSProgress
{
    NSMutableArray *_observedChildren;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000cd2f76
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000cd2f2c
- (void)_update;	// IMP=0x0000000000cd2437
- (_Bool)isIndeterminate;	// IMP=0x0000000000cd2296
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;	// IMP=0x0000000000cd209e
- (void)dealloc;	// IMP=0x0000000000cd1e42
- (id)initWithTotalUnitCount:(long long)arg1;	// IMP=0x0000000000cd1dc7
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000cd1d6b

@end

