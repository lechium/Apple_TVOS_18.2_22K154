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

+ (id)allowedSpecifierClasses;	// IMP=0x0010000000a18685
- (void).cxx_destruct;	// IMP=0x0000000000a17d1d
@property(readonly, nonatomic) HMMDateProvider *bridgedDateProvider; // @synthesize bridgedDateProvider=_bridgedDateProvider;
@property(readonly, nonatomic) HMMCountersManager *bridgedCountersManager; // @synthesize bridgedCountersManager=_bridgedCountersManager;
@property(readonly, nonatomic) id <HMMUptimeProvider> uptimeProvider; // @synthesize uptimeProvider=_uptimeProvider;
@property(readonly, nonatomic) double saveInterval; // @synthesize saveInterval=_saveInterval;
@property(readonly, nonatomic) id <HMDEventCountersStoring> counterStorage; // @synthesize counterStorage=_counterStorage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)unarchiveEventCounters;	// IMP=0x0000000000a17af4
- (void)_save;	// IMP=0x0000000000a17a86
- (void)counterChanged;	// IMP=0x0000000000a179f7
- (void)forceSave;	// IMP=0x0000000000a1799c
- (id)_fetchAllEventCounters;	// IMP=0x0000000000a178c4
- (void)resetAllEventCounters;	// IMP=0x0000000000a176ef
- (void)resetEventCountersForRequestGroup:(id)arg1;	// IMP=0x0000000000a176b2
- (id)fetchAllEventCounters;	// IMP=0x0000000000a1761d
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)arg1;	// IMP=0x0000000000a175d9
- (id)fetchEventCountersForRequestGroup:(id)arg1;	// IMP=0x0000000000a17589
- (unsigned long long)fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x0000000000a1750c
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x0000000000a17494
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(unsigned long long)arg3;	// IMP=0x0000000000a1741a
- (void)addObserver:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3;	// IMP=0x0000000000a1738c
- (void)_removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x0000000000a17333
- (void)removeCounterGroupsBasedOnPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a17155
- (void)removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x0000000000a170e7
- (void)removeCounterGroupForName:(id)arg1;	// IMP=0x0000000000a17094
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000a17082
- (id)counterGroupsForPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a16f5a
- (id)counterGroupForSpecifier:(id)arg1;	// IMP=0x0000000000a167e3
- (id)counterGroupForName:(id)arg1;	// IMP=0x0000000000a1677d
- (id)initWithBridgedCountersManager:(id)arg1 bridgedDateProvider:(id)arg2;	// IMP=0x0000000000a16763
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2 bridgedDateProvider:(id)arg3 saveInterval:(double)arg4 uptimeProvider:(id)arg5;	// IMP=0x0000000000a164e8
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2 bridgedDateProvider:(id)arg3;	// IMP=0x0000000000a16386
- (id)init;	// IMP=0x0000000000a162f6

@end

