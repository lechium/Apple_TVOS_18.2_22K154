//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCloudKitOperationCounter, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLCloudKitOperationsTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_tasks;	// 16 = 0x10
    CPLCloudKitOperationCounter *_operationCounter;	// 24 = 0x18
    NSMutableArray *_allTasksCompletionHandlers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000615c3
- (void)waitForAllTasksToFinishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000061439
- (id)statusDictionary;	// IMP=0x00100000000610d0
- (id)status;	// IMP=0x0010000000060eec
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;	// IMP=0x0010000000060ba5
- (void)cancelAllOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006083f
- (void)taskDidFinish:(id)arg1;	// IMP=0x00100000000604f2
- (void)taskHasBeenCancelled:(id)arg1;	// IMP=0x001000000006036a
- (void)operationHasBeenCancelled:(id)arg1;	// IMP=0x00100000000601d8
- (void)operationDidFinish:(id)arg1;	// IMP=0x001000000005ff0d
- (void)operation:(id)arg1 updateContextWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005fe5b
- (void)operation:(id)arg1 updateProgress:(double)arg2;	// IMP=0x001000000005fccc
- (_Bool)isOperationBlocked:(id)arg1;	// IMP=0x001000000005fb86
- (void)operationDidProgressOneBatch:(id)arg1;	// IMP=0x001000000005f9d0
- (id)_contextForOperation:(id)arg1;	// IMP=0x001000000005f908
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3 bundleIdentifiers:(id)arg4;	// IMP=0x001000000005f518
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000005f472
- (id)_bundleIdentifiersFromCKOperation:(id)arg1;	// IMP=0x001000000005f33d
- (void)taskWillStart:(id)arg1;	// IMP=0x001000000005f117
- (void)_emitLogForCurrentTasks;	// IMP=0x001000000005efed
- (id)_pendingTaskStatus;	// IMP=0x001000000005ebc2
- (id)init;	// IMP=0x001000000005eb19

@end

