//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSProgress.h"

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _NSOperationQueueProgress : NSProgress
{
    NSOperationQueue *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _queueLock;	// 16 = 0x10
}

- (void)setTotalUnitCount:(long long)arg1;	// IMP=0x0000000000812166

@end

