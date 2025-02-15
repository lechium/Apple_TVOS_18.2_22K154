//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPersistentStore, HMMDateProvider, NSMutableDictionary, NSObject, NSString;
@protocol HMDTimeBasedFlagsStoring, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTimeBasedFlagsManager : HMFObject
{
    HMDPersistentStore *_persistentStore;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    HMMDateProvider *_dateProvider;	// 24 = 0x18
    NSMutableDictionary *_flags;	// 32 = 0x20
    id <HMDTimeBasedFlagsStoring> _flagsStorage;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)allowedSpecifierClasses;	// IMP=0x00100000001e4ed3
- (void).cxx_destruct;	// IMP=0x00000000001e4c59
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) id <HMDTimeBasedFlagsStoring> flagsStorage; // @synthesize flagsStorage=_flagsStorage;
@property(retain, nonatomic) NSMutableDictionary *flags; // @synthesize flags=_flags;
@property(retain) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
- (id)unarchiveLegacyFlags;	// IMP=0x00000000001e45e3
- (id)unarchiveFlags;	// IMP=0x00000000001e435d
- (void)_save;	// IMP=0x00000000001e428b
- (id)_fetchAllFlags;	// IMP=0x00000000001e41b3
- (void)forceSave;	// IMP=0x00000000001e4166
- (void)flagChanged;	// IMP=0x00000000001e4154
- (id)newFlagForPeriodicity:(long long)arg1;	// IMP=0x00000000001e40e4
- (id)flagForSpecifier:(id)arg1 periodicity:(long long)arg2;	// IMP=0x00000000001e3f0b
- (id)flagForName:(id)arg1 homeUUID:(id)arg2 periodicity:(long long)arg3;	// IMP=0x00000000001e3ea0
- (id)flagForName:(id)arg1 periodicity:(long long)arg2;	// IMP=0x00000000001e3e35
- (id)initWithStorage:(id)arg1 dateProvider:(id)arg2;	// IMP=0x00000000001e3cc5
- (id)initWithDateProvider:(id)arg1;	// IMP=0x00000000001e3c15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

