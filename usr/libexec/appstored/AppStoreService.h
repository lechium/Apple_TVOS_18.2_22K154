//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AppStoreService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000c821b
- (void)removeBadgeMetricsForBadgeIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c7ff6
- (void)removeBadgeIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c7db3
- (void)removeAllBadgeIDsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c7bf5
- (void)badgeIDCountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c7a30
- (void)allBadgeMetricsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c77e7
- (void)allBadgeIDsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c75ed
- (void)addBadgeIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c7414
- (void)launchAppStoreWithURL:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c70c7
- (id)init;	// IMP=0x00100000000c6feb

@end

