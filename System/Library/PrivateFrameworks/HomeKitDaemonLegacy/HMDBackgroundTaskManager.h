//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackgroundTaskLogger, NSMutableDictionary, NSNotificationCenter, NSString;
@protocol HMDDateProvider;

__attribute__((visibility("hidden")))
@interface HMDBackgroundTaskManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_tasksByIdentifier;	// 16 = 0x10
    NSMutableDictionary *_pendingTaskDateByIdentifier;	// 24 = 0x18
    HMDBackgroundTaskLogger *_logger;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    id <HMDDateProvider> _dateProvider;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000003a1487
+ (id)sharedManager;	// IMP=0x00100000003a1457
- (void).cxx_destruct;	// IMP=0x00000000003a1315
@property(readonly, nonatomic) id <HMDDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) HMDBackgroundTaskLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableDictionary *pendingTaskDateByIdentifier; // @synthesize pendingTaskDateByIdentifier=_pendingTaskDateByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *tasksByIdentifier; // @synthesize tasksByIdentifier=_tasksByIdentifier;
- (id)_taskForIdentifier:(id)arg1;	// IMP=0x00000000003a1212
- (void)_setTask:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000003a115c
- (void)_unregisterEventWithIdentifier:(id)arg1;	// IMP=0x00000000003a112e
- (void)_registerEventWithIdentifier:(id)arg1 fireDate:(id)arg2;	// IMP=0x00000000003a103e
- (void)_postNotificationWithIdentifier:(id)arg1;	// IMP=0x00000000003a0f8d
- (void)_handlePendingTaskWithIdentifier:(id)arg1 date:(id)arg2;	// IMP=0x00000000003a0ce0
- (void)_handleEvent:(id)arg1;	// IMP=0x00000000003a06e9
- (void)configure;	// IMP=0x00000000003a069c
- (id)expectedFireDateForTaskWithIdentifier:(id)arg1;	// IMP=0x00000000003a0643
- (_Bool)hasOutstandingTaskWithIdentifier:(id)arg1;	// IMP=0x00000000003a0610
- (void)cancelTaskWithIdentifier:(id)arg1 onObserver:(id)arg2;	// IMP=0x00000000003a0370
- (_Bool)scheduleTaskWithIdentifier:(id)arg1 fireDate:(id)arg2 onObserver:(id)arg3 selector:(SEL)arg4 error:(id *)arg5;	// IMP=0x000000000039fee4
- (id)initWithNotificationCenter:(id)arg1 dateProvider:(id)arg2 logger:(id)arg3;	// IMP=0x000000000039fd9a
- (id)init;	// IMP=0x000000000039fd04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

