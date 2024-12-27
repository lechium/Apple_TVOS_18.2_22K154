//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, VCWeakObjectHolder;
@protocol OS_dispatch_queue, VCCannedVideoFrameFeeder;

__attribute__((visibility("hidden")))
@interface VCCannedVideoCaptureSource
{
    struct _tagVCCannedVideoCaptureSourceContext {
        struct _opaque_pthread_mutex_t attributeMutex;
        _Atomic int frameRate;
        struct OpaqueCMClock *hostClock;
        struct OpaqueFigThread *producerThread;
        _Bool producerThreadCanceled;
        struct _opaque_pthread_mutex_t producerMutex;
        struct _opaque_pthread_cond_t producerConditional;
        struct OpaqueFigThread *consumerThread;
        _Bool consumerThreadCanceled;
        struct _opaque_pthread_mutex_t consumerMutex;
        struct _opaque_pthread_cond_t consumerConditional;
        struct _opaque_pthread_mutex_t frameRingBufferMutex;
        struct Frame *frameRingBuffer;
        int frameRingBufferIndex;
        NSObject<OS_dispatch_queue> *helperQueue;
    } _context;	// 88 = 0x58
    id <VCCannedVideoFrameFeeder> _frameFeeder;	// 512 = 0x200
    NSObject<OS_dispatch_queue> *_captureSessionQueue;	// 520 = 0x208
    VCWeakObjectHolder *_weakCallbackContext;	// 528 = 0x210
    CDUnknownFunctionPointerType _frameCallback;	// 536 = 0x218
    _Bool _enableTxTimestampAlignmentLogs;	// 544 = 0x220
    struct os_unfair_lock_s _stateLock;	// 548 = 0x224
}

- (void)setWidth:(int)arg1 height:(int)arg2;	// IMP=0x00000000003857d9
- (int)frameRate;	// IMP=0x00000000003857c8
- (void)setFrameRate:(int)arg1;	// IMP=0x00000000003857b7
- (int)stop;	// IMP=0x000000000038559f
- (int)start;	// IMP=0x0000000000384af8
- (void)dealloc;	// IMP=0x00000000003849e0
- (id)initWithVideo:(id)arg1 callbackContext:(id)arg2 frameCallback:(CDUnknownFunctionPointerType)arg3;	// IMP=0x000000000038460d

@end

