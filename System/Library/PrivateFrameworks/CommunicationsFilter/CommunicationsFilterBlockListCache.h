//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMFNotificationObserver, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockListCache : NSObject
{
    NSMutableArray *_recentItems;	// 8 = 0x8
    int _notifyEmptyListToken;	// 16 = 0x10
    _Bool _listIsEmpty;	// 20 = 0x14
    CMFNotificationObserver *_blockListUpdateObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000035e6
@property(readonly, nonatomic) CMFNotificationObserver *blockListUpdateObserver; // @synthesize blockListUpdateObserver=_blockListUpdateObserver;
- (void)_blockListChanged;	// IMP=0x00000000000034d9
- (void)syncListEmptyState;	// IMP=0x0000000000003430
- (void)setResponse:(_Bool)arg1 forItem:(id)arg2;	// IMP=0x0000000000003135
- (void)removeItemFromCache:(id)arg1;	// IMP=0x0000000000002edf
- (long long)cachedResponseForItem:(id)arg1;	// IMP=0x0000000000002c79
- (id)init;	// IMP=0x000000000000294e

@end

