//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObservationBuffer.h"

@class NSMutableArray, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSConcreteObservationBuffer : NSObservationBuffer
{
    NSObject<OS_dispatch_queue> *_inputQueue;	// 40 = 0x28
    NSOperationQueue *_outputQueue;	// 48 = 0x30
    long long _policy;	// 56 = 0x38
    int _state;	// 64 = 0x40
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;	// 72 = 0x48
    NSMutableArray *_dequeue;	// 136 = 0x88
    unsigned long long _maxCount;	// 144 = 0x90
    CDUnknownBlockType _bufferFullHandler;	// 152 = 0x98
    _Bool _memoryPressureSensitive;	// 160 = 0xa0
    _Bool _automaticallyEmitsObjects;	// 161 = 0xa1
}

- (void)setMemoryPressureSensitive:(_Bool)arg1;	// IMP=0x00000000008a73b4
- (_Bool)isMemoryPressureSensitive;	// IMP=0x00000000008a73a2
- (void)setAutomaticallyEmitsObjects:(_Bool)arg1;	// IMP=0x00000000008a7392
- (_Bool)automaticallyEmitsObjects;	// IMP=0x00000000008a7380
- (void)setBufferFullHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008a736f
- (CDUnknownBlockType)bufferFullHandler;	// IMP=0x00000000008a7359
- (void)_receiveBox:(id)arg1;	// IMP=0x00000000008a7087
- (void)_mergeChanges;	// IMP=0x00000000008a7081
- (void)emitAllObjects;	// IMP=0x00000000008a6fee
- (void)_alreadyOnQueueEmitAllObjects;	// IMP=0x00000000008a6c3d
- (void)emitObject;	// IMP=0x00000000008a6baa
- (void)_alreadyOnQueueEmitObject;	// IMP=0x00000000008a69e5
- (void)dealloc;	// IMP=0x00000000008a6922
- (id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;	// IMP=0x00000000008a6835

@end

