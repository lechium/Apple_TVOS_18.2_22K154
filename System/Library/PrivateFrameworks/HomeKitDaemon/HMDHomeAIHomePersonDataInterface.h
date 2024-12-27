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

+ (id)logCategory;	// IMP=0x001000000099551e
- (void).cxx_destruct;	// IMP=0x000000000099445b
@property(readonly) HMIHomePersonManager *homePersonManager; // @synthesize homePersonManager=_homePersonManager;
- (void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;	// IMP=0x0000000000994228
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x000000000099407c
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000993fc6
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000993ee8
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000993e0a
- (void)removePersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000993d2c
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000993c4e
- (void)addPersonFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000993c3c
- (void)addFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000993b5e
- (void)addPersons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000993a80
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009939c8
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000993910
- (id)logIdentifier;	// IMP=0x0000000000993896
- (id)initWithHomePersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000099381b
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000993769

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

