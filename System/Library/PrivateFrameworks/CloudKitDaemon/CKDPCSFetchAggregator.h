//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKCoalescer, CKDContainer, NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CKDPCSFetchAggregator : NSObject
{
    _Bool _skipQueuedFetchCycleDetection;	// 8 = 0x8
    CKDContainer *_container;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_opQueue;	// 24 = 0x18
    NSOperationQueue *_queue;	// 32 = 0x20
    NSMutableArray *_queuedFetches;	// 40 = 0x28
    NSMutableArray *_runningFetches;	// 48 = 0x30
    CKCoalescer *_fetchCoalescer;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_timerSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003cb9d3
@property(nonatomic) _Bool skipQueuedFetchCycleDetection; // @synthesize skipQueuedFetchCycleDetection=_skipQueuedFetchCycleDetection;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) CKCoalescer *fetchCoalescer; // @synthesize fetchCoalescer=_fetchCoalescer;
@property(retain, nonatomic) NSMutableArray *runningFetches; // @synthesize runningFetches=_runningFetches;
@property(retain, nonatomic) NSMutableArray *queuedFetches; // @synthesize queuedFetches=_queuedFetches;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *opQueue; // @synthesize opQueue=_opQueue;
@property(nonatomic) __weak CKDContainer *container; // @synthesize container=_container;
- (void)cancelAllOperations;	// IMP=0x00000000003cb5fc
- (void)requestFetchOfZoneWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003cb15b
- (void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003cac39
- (void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003ca5b0
- (_Bool)fetchRequestForExistingOperation:(id)arg1 isDependentOnOperation:(id)arg2;	// IMP=0x00000000003ca025
- (id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00000000003c99b3
- (void)_lockedRescheduleFetchTimer;	// IMP=0x00000000003c96b1
- (void)_lockedTearDownFetchTimer;	// IMP=0x00000000003c9629
- (void)_lockedFetchesAreReady;	// IMP=0x00000000003c88ff
- (void)dealloc;	// IMP=0x00000000003c88c0
- (id)initWithContainer:(id)arg1;	// IMP=0x00000000003c85fe
- (id)init;	// IMP=0x00000000003c859e

@end

