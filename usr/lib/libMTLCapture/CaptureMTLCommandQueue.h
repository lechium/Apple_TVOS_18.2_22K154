//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol MTLCommandQueue, MTLCommandQueueSPI, MTLDevice, OS_dispatch_queue;

@interface CaptureMTLCommandQueue : NSObject
{
    id <MTLCommandQueueSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMutableArray *_pendingQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_pendingQueueLock;	// 48 = 0x30
    id <MTLCommandQueue> _downloadQueue;	// 56 = 0x38
    id <MTLCommandQueue> _accelerationStructureDescriptorDownloadQueue;	// 64 = 0x40
    NSMutableSet *_currentResidencySets;	// 72 = 0x48
    NSArray *_lastSnapshot;	// 80 = 0x50
    _Bool _snapshotCreated;	// 88 = 0x58
    _Bool _perfSampleHandlerUsed;	// 89 = 0x59
}

- (void).cxx_destruct;	// IMP=0x00000000000c50a2
- (id)subdivideCounterList:(id)arg1;	// IMP=0x00000000000c508c
- (void)setSubmissionQueue:(id)arg1;	// IMP=0x00000000000c4f8d
- (_Bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;	// IMP=0x00000000000c4e76
- (_Bool)setGPUPriority:(unsigned long long)arg1;	// IMP=0x00000000000c4d6b
- (void)setCompletionQueue:(id)arg1;	// IMP=0x00000000000c4c6c
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;	// IMP=0x00000000000c4b55
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1;	// IMP=0x00000000000c4a4a
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;	// IMP=0x00000000000c4a34
- (int)requestCounters:(id)arg1;	// IMP=0x00000000000c4a1e
- (id)getRequestedCounters;	// IMP=0x00000000000c4a08
- (unsigned long long)getGPUPriority;	// IMP=0x00000000000c49f2
- (unsigned long long)getBackgroundGPUPriority;	// IMP=0x00000000000c49dc
- (void)finish;	// IMP=0x00000000000c4903
- (id)counterInfo;	// IMP=0x00000000000c48ed
- (id)commandBufferWithUnretainedReferences;	// IMP=0x00000000000c4710
- (id)commandBufferWithDescriptor:(id)arg1;	// IMP=0x00000000000c44d7
- (id)commandBuffer;	// IMP=0x00000000000c42fa
- (id)availableCountersAndDict;	// IMP=0x00000000000c42e4
- (id)availableCounters;	// IMP=0x00000000000c42ce
@property _Bool skipRender;
@property(readonly) unsigned long long qosLevel;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) unsigned long long maxCommandBufferCount;
@property(copy) NSString *label;
@property(readonly) _Bool isOpenGLQueue;
@property _Bool executionEnabled;
@property(readonly) _Bool disableCrossQueueHazardTracking;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly) _Bool commitsWithQoS;
@property(readonly) _Bool commitSynchronously;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property int backgroundTrackingPID;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N,GgetStatOptions

@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N,GgetStatLocations

@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisStatEnabled

- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000c3d0a
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000c3cf9
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000c3c38
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000c3bd8
- (id)originalObject;	// IMP=0x00000000000c3bca
- (void)removeResidencySets:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000c399e
- (void)removeResidencySet:(id)arg1;	// IMP=0x00000000000c381f
- (void)addResidencySets:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000c3622
- (void)addResidencySet:(id)arg1;	// IMP=0x00000000000c34c7
- (void)addPerfSampleHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3431
@property(readonly) NSArray *enqueuedCommandBuffers;
- (void)commitCommandBuffer:(id)arg1 withIndex:(unsigned long long)arg2;	// IMP=0x00000000000c323b
- (void)enqueueCommandBuffer:(id)arg1;	// IMP=0x00000000000c3195
- (void)dealloc;	// IMP=0x00000000000c3093
- (void)insertDebugCaptureBoundary;	// IMP=0x00000000000c2d35
@property(readonly) id <MTLCommandQueue> baseObject;
@property(readonly) id <MTLCommandQueue> accelerationStructureDescriptorDownloadQueue;
@property(readonly) id <MTLCommandQueue> downloadQueue;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x00000000000c2ae5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

