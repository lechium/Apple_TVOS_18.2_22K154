//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNTasksQueueCache : NSObject
{
    NSMutableDictionary *_queueNameToTasksQueueDictionary;	// 8 = 0x8
    struct os_unfair_lock_s _queueNameToTasksQueueDictionaryLock;	// 16 = 0x10
    long long _maximumTasksCount;	// 24 = 0x18
}

+ (id)queueLabelWithUniqueAppendix:(id)arg1;	// IMP=0x004000000020fa0b
- (void).cxx_destruct;	// IMP=0x000000000020f9db
- (void)releaseAllQueues;	// IMP=0x000000000020f970
- (void)releaseQueueWithUniqueAppendix:(id)arg1;	// IMP=0x000000000020f8a2
@property long long maximumTasksCount;
- (id)_queueWithUniqueAppendix:(id)arg1 queueClass:(Class)arg2;	// IMP=0x000000000020f5b9
- (id)queueWithUniqueAppendix:(id)arg1;	// IMP=0x000000000020f586
- (id)init;	// IMP=0x000000000020f4d7

@end

