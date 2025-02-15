//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOccasionalTimebaseObserver, AVPlayerItemSegment, NSArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemIntegratedTimelineBoundaryObserver : NSObject
{
    struct OpaqueFigSimpleMutex *_mutex;	// 8 = 0x8
    AVPlayerItemSegment *_segment;	// 16 = 0x10
    NSArray *_offsetTimes;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _block;	// 40 = 0x28
    CDStruct_82206317 _observedTimeMapping;	// 48 = 0x30
    AVOccasionalTimebaseObserver *_boundaryObserver;	// 144 = 0x90
    _Bool _segmentWasRemoved;	// 152 = 0x98
    _Bool _hasBeenScheduled;	// 153 = 0x99
}

- (id)scheduledSegment;	// IMP=0x00000000001681a3
- (_Bool)hasObserverBeenScheduledYet;	// IMP=0x0000000000168178
- (void)ensureBoundaryObserverSegmentStillExistsWithNewSnapshot:(id)arg1;	// IMP=0x0000000000167f14
- (void)rescheduleObserverWithSnapshot:(id)arg1 itemToSchedule:(id)arg2;	// IMP=0x000000000016771a
- (_Bool)_isItemCurrentTimeWithinZeroOffsetBoundaryThreshold:(id)arg1 offset:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000016767e
- (_Bool)_ensureItemTimeOffsetLiesInSegment:(id)arg1 item:(id)arg2;	// IMP=0x00000000001674f0
- (id)_currentInterstitialIDForSnapshot:(id)arg1;	// IMP=0x0000000000167486
- (void)dealloc;	// IMP=0x0000000000167405
- (id)initWithSegment:(id)arg1 offsetTimes:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000167355

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

