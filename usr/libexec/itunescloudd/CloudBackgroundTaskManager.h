//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface CloudBackgroundTaskManager : NSObject
{
    NSMapTable *_jobNameToSelectorMap;	// 8 = 0x8
}

+ (id)sharedTaskManager;	// IMP=0x0040000000127f3a
- (void).cxx_destruct;	// IMP=0x002000000012772f
- (_Bool)_cellularDataAllowedForJaliscoMedia;	// IMP=0x001000000012769c
- (_Bool)_cellularDataAllowedForJaliscoApps;	// IMP=0x001000000012764d
- (id)_nextJaliscoAppsPollTimeKey;	// IMP=0x0010000000127640
- (id)_nextJaliscoMediaPollTimeKey;	// IMP=0x0010000000127633
- (id)_nextEvaluateSyncRulesThrottleOperationTimeKey;	// IMP=0x0010000000127626
- (id)_nextEvaluateSyncRulesOperationTimeKey;	// IMP=0x0010000000127619
- (double)_throttledDeferredEvaluateKeepLocalTime;	// IMP=0x0010000000127560
- (id)_homeSharingPrefsNumberForKey:(id)arg1;	// IMP=0x0010000000127544
- (void)_setHomeSharingPrefsNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000012751b
- (id)_baseBtaJobForPeriodicPollCellularDataAllowed:(_Bool)arg1;	// IMP=0x0010000000127503
- (id)_baseBtaJobForDeferredPush;	// IMP=0x00100000001274eb
- (void)_handleJobNamed:(const char *)arg1 satisfied:(_Bool)arg2 invalid:(_Bool)arg3;	// IMP=0x00100000001273cb
- (void)_unscheduleJobNamed:(const char *)arg1;	// IMP=0x00100000001273c5
- (void)_scheduleJobNamed:(const char *)arg1 withStartTime:(id)arg2 baseBtaJob:(id)arg3;	// IMP=0x00100000001273bf
- (void)_initializeBTAHandlers;	// IMP=0x00100000001273b9
- (void)_handleJaliscoMediaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x001000000012716f
- (void)_handleJaliscoMediaPeriodicPollJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x0010000000126ee6
- (void)_handleSagaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x0010000000126c9a
- (void)unscheduleJaliscoMediaDeferredPushUpate;	// IMP=0x0010000000126c94
- (void)scheduleJaliscoMediaDeferredPushUpate;	// IMP=0x0010000000126c8e
- (void)unscheduleJaliscoMediaPeriodicPoll;	// IMP=0x0010000000126c88
- (void)scheduleJaliscoMediaPeriodicPoll;	// IMP=0x0010000000126c82
- (void)unscheduleSagaDeferredPushUpate;	// IMP=0x0010000000126c7c
- (void)scheduleSagaDeferredPushUpate;	// IMP=0x0010000000126c76
- (id)init;	// IMP=0x0010000000126c2a

@end

