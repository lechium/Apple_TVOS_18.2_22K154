//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDSAgent/NSObject-Protocol.h>

@class NSArray, PDSEntryStore;

@protocol PDSEntryStoreDelegate <NSObject>
- (void)entryStore:(PDSEntryStore *)arg1 didUpdatePendingTopics:(NSArray *)arg2 forceImmediateUpdate:(_Bool)arg3;
@end

