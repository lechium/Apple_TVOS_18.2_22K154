//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPersistentStore, HMMCountersManager, HMMDateProvider, NSMutableDictionary, NSObject;
@protocol HMDEventCountersStoring, HMMUptimeProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDEventCountersManager : HMFObject
{
    HMDPersistentStore *_persistentStore;	// 8 = 0x8
    NSMutableDictionary *_counterGroups;	// 16 = 0x10
    double _lastSaveTime;	// 24 = 0x18
    _Bool _pendingSave;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 36 = 0x24
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    id <HMDEventCountersStoring> _counterStorage;	// 48 = 0x30
    double _saveInterval;	// 56 = 0x38
    id <HMMUptimeProvider> _uptimeProvider;	// 64 = 0x40
    HMMCountersManager *_bridgedCountersManager;	// 72 = 0x48
    HMMDateProvider *_bridgedDateProvider;	// 80 = 0x50
}

+ (id)allowedSpecifierClasses;	// IMP=0x0010000000d00054
- (void).cxx_destruct;	// IMP=0x0000000000cff6ec
@property(readonly, nonatomic) HMMDateProvider *bridgedDateProvider; // @synthesize bridgedDateProvider=_bridgedDateProvider;
@property(readonly, nonatomic) HMMCountersManager *bridgedCountersManager; // @synthesize bridgedCountersManager=_bridgedCountersManager;
@property(readonly, nonatomic) id <HMMUptimeProvider> uptimeProvider; // @synthesize uptimeProvider=_uptimeProvider;
@property(readonly, nonatomic) double saveInterval; // @synthesize saveInterval=_saveInterval;
@property(readonly, nonatomic) id <HMDEventCountersStoring> counterStorage; // @synthesize counterStorage=_counterStorage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)unarchiveEventCounters;	// IMP=0x0000000000cff4c3
- (void)_save;	// IMP=0x0000000000cff455
- (void)counterChanged;	// IMP=0x0000000000cff3c6
- (void)forceSave;	// IMP=0x0000000000cff36b
- (id)_fetchAllEventCounters;	// IMP=0x0000000000cff293
- (void)resetAllEventCounters;	// IMP=0x0000000000cff0be
- (void)resetEventCountersForRequestGroup:(id)arg1;	// IMP=0x0000000000cff081
- (id)fetchAllEventCounters;	// IMP=0x0000000000cfefec
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)arg1;	// IMP=0x0000000000cfefa8
- (id)fetchEventCountersForRequestGroup:(id)arg1;	// IMP=0x0000000000cfef58
- (unsigned long long)fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x0000000000cfeedb
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x0000000000cfee63
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(unsigned long long)arg3;	// IMP=0x0000000000cfede9
- (void)addObserver:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3;	// IMP=0x0000000000cfed5b
- (void)_removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x0000000000cfed02
- (void)removeCounterGroupsBasedOnPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cfeb24
- (void)removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x0000000000cfeab6
- (void)removeCounterGroupForName:(id)arg1;	// IMP=0x0000000000cfea63
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000cfea51
- (id)counterGroupsForPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cfe929
- (id)counterGroupForSpecifier:(id)arg1;	// IMP=0x0000000000cfe1b2
- (id)counterGroupForName:(id)arg1;	// IMP=0x0000000000cfe14c
- (id)initWithBridgedCountersManager:(id)arg1 bridgedDateProvider:(id)arg2;	// IMP=0x0000000000cfe132
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2 bridgedDateProvider:(id)arg3 saveInterval:(double)arg4 uptimeProvider:(id)arg5;	// IMP=0x0000000000cfdeb7
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2 bridgedDateProvider:(id)arg3;	// IMP=0x0000000000cfdd55
- (id)init;	// IMP=0x0000000000cfdcc5

@end

