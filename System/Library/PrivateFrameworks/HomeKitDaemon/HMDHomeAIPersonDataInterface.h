//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIExternalPersonManager, HMIHomePersonManager, HMIPersonManager, NSObject, NSString;
@protocol HMDPersonDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeAIPersonDataInterface : HMFObject
{
    HMIPersonManager *_personManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <HMDPersonDataSource> _dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e1fda
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMIPersonManager *personManager; // @synthesize personManager=_personManager;
- (void)handleUpdatedIsDataSyncInProgress:(_Bool)arg1;	// IMP=0x00000000001e1d59
- (void)handleUpdatedIsCurrentDeviceAvailableResident:(_Bool)arg1;	// IMP=0x00000000001e1b4f
- (void)handleRemovedFaceprintWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000001e1ab7
- (void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000001e1a1f
- (void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000001e1987
- (void)handleUpdatedFaceprint:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000001e18d1
- (void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000001e181b
- (void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000001e1765
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;	// IMP=0x00000000001e15cc
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e1459
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e12a9
- (void)fetchAllFaceprintsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e1136
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e0f86
- (void)fetchAllPersonFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e0e13
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e0c63
- (void)fetchAllPersonsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e0af0
- (id)initWithPersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000001e0a4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMIHomePersonManager *homePersonManager;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"HMIHomePersonManager",?,R

@property(readonly) HMIExternalPersonManager *photosPersonManager;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"HMIExternalPersonManager",?,R

@property(readonly) Class superclass;

@end

