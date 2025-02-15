//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface MPCSharedListeningLiveLinkReusePool : NSObject
{
    NSMapTable *_sessionIDLiveLinkMap;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

+ (id)sharedReusePool;	// IMP=0x004000000030b7eb
- (void).cxx_destruct;	// IMP=0x000000000030b7d5
- (void)storeLiveLink:(id)arg1 forSessionID:(id)arg2;	// IMP=0x000000000030b6ee
- (id)liveLinkForSessionID:(id)arg1;	// IMP=0x000000000030b619
- (id)init;	// IMP=0x000000000030b5ac

@end

