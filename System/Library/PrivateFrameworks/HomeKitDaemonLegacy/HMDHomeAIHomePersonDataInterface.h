//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMIHomePersonManager, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAIHomePersonDataInterface
{
    HMIHomePersonManager *_homePersonManager;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000075a170
- (void).cxx_destruct;	// IMP=0x00000000007590ad
@property(readonly) HMIHomePersonManager *homePersonManager; // @synthesize homePersonManager=_homePersonManager;
- (void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;	// IMP=0x0000000000758e7a
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000758cce
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000758c18
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000758b3a
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000758a5c
- (void)removePersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000075897e
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007588a0
- (void)addPersonFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000075888e
- (void)addFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007587b0
- (void)addPersons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007586d2
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000075861a
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000758562
- (id)logIdentifier;	// IMP=0x00000000007584e8
- (id)initWithHomePersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000075846d
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000007583bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

