//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HKRetryableOperation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    long long _retryCount;	// 16 = 0x10
    NSMutableArray *_pendingOperations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007901b
@property(readonly, copy, nonatomic) NSMutableArray *pendingOperations;
- (void)_queue_performPendingOperation:(id)arg1;	// IMP=0x0000000000078a94
- (void)_queue_performRetryableOperation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000789c9
- (id)initWithQueue:(id)arg1 retryCount:(int)arg2;	// IMP=0x0000000000078936

@end

