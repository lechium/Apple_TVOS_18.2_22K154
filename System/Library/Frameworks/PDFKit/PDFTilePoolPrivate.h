//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface PDFTilePoolPrivate : NSObject
{
    NSObject<OS_dispatch_queue> *workQueue;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *workQueueThrottle;	// 16 = 0x10
    struct os_unfair_lock_s surfacesLock;	// 24 = 0x18
    NSMutableDictionary *surfaces;	// 32 = 0x20
    int surfaceType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000030062

@end

