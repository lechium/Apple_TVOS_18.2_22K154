//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol ICDAccountManaging, ICDHandlerCoordinating;

@interface ICDBackgroundTaskManager : NSObject
{
    id <ICDAccountManaging> _accountManager;	// 8 = 0x8
    id <ICDHandlerCoordinating> _handlerCoordinator;	// 16 = 0x10
    NSMutableSet *_currentTasks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000015588b
@property(readonly, nonatomic) NSMutableSet *currentTasks; // @synthesize currentTasks=_currentTasks;
@property(readonly, nonatomic) id <ICDHandlerCoordinating> handlerCoordinator; // @synthesize handlerCoordinator=_handlerCoordinator;
@property(readonly, nonatomic) id <ICDAccountManaging> accountManager; // @synthesize accountManager=_accountManager;
- (void)_handleJaliscoDeferredPushUpdateTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000155674
- (void)_handleSagaDeferredPushUpdateTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000155463
- (id)_deferredPushActivityCriteriaForTask:(id)arg1 startTime:(long long)arg2 gracePeriod:(long long)arg3;	// IMP=0x00100000001552de
- (long long);	// IMP=0x00100000001552ce
- (id)_periodicPollingActivityCriteriaWithRefreshInterval:(long long)arg1 gracePeriod:(long long)arg2;	// IMP=0x001000000015522d
- (long long)_pollingGracePeriodSecondsForRefreshInterval:(long long)arg1;	// IMP=0x0010000000155208
- (long long)_pollingRefreshIntervalSecondsUsingBag:(id)arg1;	// IMP=0x0010000000155009
- (_Bool)_cellularDataAllowed;	// IMP=0x0010000000154f76
- (id)activityCriteriaForTask:(id)arg1 startTimeInSeconds:(long long)arg2;	// IMP=0x0010000000154ef0
- (void)_handleTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000154e6c
- (id)_taskWithName:(id)arg1;	// IMP=0x0010000000154cbe
- (void)_unscheduleTask:(id)arg1;	// IMP=0x0010000000154b8a
- (void)_scheduleTask:(id)arg1 withStartTime:(long long)arg2;	// IMP=0x0010000000154988
- (void)_stopTask:(id)arg1;	// IMP=0x00100000001548b0
- (void)_startTask:(id)arg1;	// IMP=0x00100000001547bb
- (void)_saveCurrentTasks;	// IMP=0x0010000000154578
- (void)_restoreCurrentTasks;	// IMP=0x00100000001542e5
- (void)scheduleTaskOfType:(long long)arg1 forConfiguration:(id)arg2;	// IMP=0x00100000001540b6
- (void)startPeriodicPolling;	// IMP=0x0010000000153f05
- (id)initWithAccountManager:(id)arg1 handlerCoordinator:(id)arg2;	// IMP=0x0010000000153e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

