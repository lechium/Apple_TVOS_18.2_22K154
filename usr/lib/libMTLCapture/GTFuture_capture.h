//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSCondition, NSError, NSMutableArray, NSTimer;

@interface GTFuture_capture : NSOperation
{
    NSTimer *_timeout;	// 8 = 0x8
    NSCondition *_condition;	// 16 = 0x10
    _Bool _resolved;	// 24 = 0x18
    _Bool _cancelled;	// 25 = 0x19
    id _result;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSMutableArray *_notifyList;	// 48 = 0x30
    NSMutableArray *_inflightDependencies;	// 56 = 0x38
    _Bool _started;	// 64 = 0x40
    CDUnknownBlockType _completion;	// 72 = 0x48
    long long _priority;	// 80 = 0x50
}

+ (_Bool)logPerformance;	// IMP=0x0060000000004c7e
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000004c06
+ (id)futureWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0060000000004bb5
+ (id)future;	// IMP=0x0060000000004b9b
- (id)_dependencies_NOLOCK;	// IMP=0x000000000000475f
- (_Bool)_waitForDependencies_REQUIRESLOCK;	// IMP=0x00000000000046d3
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000004644
- (void)_addDependency_REQUIRESLOCK:(id)arg1;	// IMP=0x0000000000004536
- (void)notifyGroup:(id)arg1;	// IMP=0x0000000000004450
- (void)notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000435a
- (void)resolveWithFuture:(id)arg1;	// IMP=0x000000000000423d
- (void)timeoutAfter:(double)arg1 label:(id)arg2;	// IMP=0x0000000000004161
- (void)setError:(id)arg1;	// IMP=0x0000000000004147
- (void)cancel;	// IMP=0x0000000000004097
- (id)error;	// IMP=0x0000000000004062
- (void)setResult:(id)arg1;	// IMP=0x0000000000004048
- (void)_setResult:(id)arg1 error:(id)arg2 notify_NOLOCK:(_Bool)arg3;	// IMP=0x0000000000003dd7
- (int)intResult;	// IMP=0x0000000000003d8d
- (unsigned int)uint32Result;	// IMP=0x0000000000003d43
- (_Bool)boolResult;	// IMP=0x0000000000003cfb
- (void)requestResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003ccd
- (void)addResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003b70
- (id)result;	// IMP=0x0000000000003b3b
- (void)waitUntilResolved;	// IMP=0x00000000000038b6
- (void)start;	// IMP=0x00000000000038a4
- (id)dependencies;	// IMP=0x0000000000003892
- (void)addDependency:(id)arg1;	// IMP=0x000000000000383d
- (void)waitUntilFinished;	// IMP=0x00000000000037bb
- (void)_start_NOLOCK;	// IMP=0x0000000000003726
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000036c9
- (CDUnknownBlockType)completionBlock;	// IMP=0x0000000000003665
- (void)setQueuePriority:(long long)arg1;	// IMP=0x0000000000003615
- (long long)queuePriority;	// IMP=0x00000000000035c6
- (_Bool)isFinished;	// IMP=0x0000000000003563
- (_Bool)isExecuting;	// IMP=0x00000000000034fe
- (_Bool)isAsynchronous;	// IMP=0x00000000000034f6
- (_Bool)isCancelled;	// IMP=0x00000000000034a7
- (void)dealloc;	// IMP=0x0000000000003348
- (id)init;	// IMP=0x0000000000003286

@end

