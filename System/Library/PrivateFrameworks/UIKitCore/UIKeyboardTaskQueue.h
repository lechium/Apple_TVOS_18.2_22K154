//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSConditionLock, NSMutableArray, UIKeyboardTaskEntry, UIKeyboardTaskExecutionContext;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskQueue : NSObject
{
    _Bool _executingOnMainThread;	// 8 = 0x8
    NSConditionLock *_lock;	// 16 = 0x10
    NSMutableArray *_tasks;	// 24 = 0x18
    NSMutableArray *_deferredTasks;	// 32 = 0x20
    UIKeyboardTaskExecutionContext *_executionContext;	// 40 = 0x28
    UIKeyboardTaskEntry *_mainThreadContinuation;	// 48 = 0x30
    NSArray *_activeOriginator;	// 56 = 0x38
    CDUnknownBlockType _activeTaskBreadcrumb;	// 64 = 0x40
    CDUnknownBlockType _diagnosticTrampoline;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000e81a6d
@property(copy, nonatomic) CDUnknownBlockType diagnosticTrampoline; // @synthesize diagnosticTrampoline=_diagnosticTrampoline;
@property(copy, nonatomic) CDUnknownBlockType activeTaskBreadcrumb; // @synthesize activeTaskBreadcrumb=_activeTaskBreadcrumb;
@property(retain, nonatomic) NSArray *activeOriginator; // @synthesize activeOriginator=_activeOriginator;
@property(retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
- (_Bool)isMainThreadExecutingTask;	// IMP=0x0000000000e81a0d
- (void)performSingleTask:(CDUnknownBlockType)arg1 breadcrumb:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e818d9
- (void)performSingleTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e8187c
- (void)waitUntilTaskIsFinished:(id)arg1;	// IMP=0x0000000000e81753
- (void)performTask:(CDUnknownBlockType)arg1 breadcrumb:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e81635
- (void)performTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e815d8
- (_Bool)isEmpty;	// IMP=0x0000000000e81566
- (void)waitUntilAllTasksAreFinished;	// IMP=0x0000000000e8142b
- (void)addDeferredTask:(CDUnknownBlockType)arg1 breadcrumb:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e81371
- (void)addDeferredTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e81314
- (id)addAndReturnTask:(CDUnknownBlockType)arg1 breadcrumb:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e81257
- (void)addTask:(CDUnknownBlockType)arg1 breadcrumb:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e8119d
- (void)addTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e81140
- (void)promoteDeferredTaskIfIdle;	// IMP=0x0000000000e810b5
- (void)performDeferredTaskIfIdle;	// IMP=0x0000000000e8106d
- (void)performTaskOnMainThread:(CDUnknownBlockType)arg1 breadcrumb:(CDUnknownBlockType)arg2 waitUntilDone:(_Bool)arg3;	// IMP=0x0000000000e80de6
- (void)finishExecution;	// IMP=0x0000000000e80c16
- (void)continueExecutionOnMainThread;	// IMP=0x0000000000e80a15
- (void)unlock;	// IMP=0x0000000000e809ea
- (_Bool)tryLockWhenReadyForMainThread;	// IMP=0x0000000000e809d2
- (void)_lockWhenReadyForMainThread;	// IMP=0x0000000000e80739
- (void)lockWhenReadyForMainThread;	// IMP=0x0000000000e80665
- (void)lock;	// IMP=0x0000000000e8064f
- (id)init;	// IMP=0x0000000000e805a0
- (id)scheduleTask:(CDUnknownBlockType)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3 breadcrumb:(CDUnknownBlockType)arg4;	// IMP=0x0000000000e81b5b
- (id)scheduleTask:(CDUnknownBlockType)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3;	// IMP=0x0000000000e81ad7

@end

