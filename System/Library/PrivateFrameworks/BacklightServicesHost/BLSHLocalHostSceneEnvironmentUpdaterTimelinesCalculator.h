//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHEngineRequestDatesOperation, NSArray, NSDate, NSDateInterval, NSMutableDictionary, NSMutableSet, NSString;
@protocol BLSBacklightSceneEnvironment, BLSHOSTimerProviding;

__attribute__((visibility("hidden")))
@interface BLSHLocalHostSceneEnvironmentUpdaterTimelinesCalculator : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_lock_timelines;	// 16 = 0x10
    NSMutableDictionary *_lock_incompleteTimelineEntriesForDateInterval;	// 24 = 0x18
    BLSHEngineRequestDatesOperation *_lock_requestDatesOperation;	// 32 = 0x20
    _Bool _lock_requestDatesOperationComplete;	// 40 = 0x28
    _Bool _lock_localHostEnvTimelinesComplete;	// 41 = 0x29
    NSDateInterval *_dateInterval;	// 48 = 0x30
    NSDate *_previousPresentationDate;	// 56 = 0x38
    id <BLSBacklightSceneEnvironment> _localHostEnvironment;	// 64 = 0x40
    NSArray *_subHostedHostEnvironments;	// 72 = 0x48
    id <BLSHOSTimerProviding> _osTimerProvider;	// 80 = 0x50
    _Bool _shouldReset;	// 88 = 0x58
    CDUnknownBlockType _lock_completion;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000006c645
- (void)requestDatesOperation:(id)arg1 didTimeoutPendingEnvironments:(id)arg2;	// IMP=0x000000000006c5d4
- (void)requestDatesOperation:(id)arg1 environment:(id)arg2 didProvideSpecifiers:(id)arg3 forPresentationInterval:(id)arg4 isComplete:(_Bool)arg5;	// IMP=0x000000000006c347
- (void)lock_completeAllTimelineEntries;	// IMP=0x000000000006c16a
- (void)callCompletionIfDone;	// IMP=0x000000000006c09c
- (void)calculateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006bc31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

