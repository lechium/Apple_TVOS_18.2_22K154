//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDPersonDataBatchChange, NAFuture, NSData, NSSet, NSUUID;
@protocol HMDPersonManagerSettings;

@protocol HMDPersonDataSource <NSObject>
@property(readonly, copy) id <HMDPersonManagerSettings> settings;
@property(readonly, getter=isCurrentDeviceAvailableResident) _Bool currentDeviceAvailableResident;
@property(readonly, getter=isDataAvailable) _Bool dataAvailable;
- (void)handleFaceMisclassificationForFaceCropData:(NSData *)arg1 personUUID:(NSUUID *)arg2;
- (HMDPersonDataBatchChange *)createBatchChange;
- (NAFuture *)removeFaceprintsWithUUIDs:(NSSet *)arg1;
- (NAFuture *)removeFaceCropsWithUUIDs:(NSSet *)arg1;
- (NAFuture *)removePersonsWithUUIDs:(NSSet *)arg1;
- (NAFuture *)disassociateFaceCropsWithUUIDs:(NSSet *)arg1;
- (NAFuture *)associateFaceCropsWithUUIDs:(NSSet *)arg1 toPersonWithUUID:(NSUUID *)arg2 forSource:(long long)arg3;
- (NAFuture *)addOrUpdateFaceprints:(NSSet *)arg1;
- (NAFuture *)addOrUpdateFaceCrops:(NSSet *)arg1;
- (NAFuture *)addOrUpdatePersons:(NSSet *)arg1 andRemovePersonsWithUUIDs:(NSSet *)arg2;
- (NAFuture *)addOrUpdatePersons:(NSSet *)arg1;
- (NSSet *)faceprintsForFaceCropsWithUUIDs:(NSSet *)arg1;
- (NSSet *)faceCropsForPersonsWithUUIDs:(NSSet *)arg1;
- (NSSet *)faceCropUUIDsForPersonWithUUID:(NSUUID *)arg1;
- (NSSet *)faceCropsWithUUIDs:(NSSet *)arg1;
- (NSSet *)personsWithUUIDs:(NSSet *)arg1;
- (void)enumerateFaceprintsUsingBlock:(void (^)(HMFaceprint *, _Bool *))arg1;
- (void)enumeratePersonFaceCropsUsingBlock:(void (^)(HMPersonFaceCrop *, _Bool *))arg1;
- (void)enumerateUnassociatedFaceCropsUsingBlock:(void (^)(HMFaceCrop *, _Bool *))arg1;
- (void)enumerateFaceCropsUsingBlock:(void (^)(HMFaceCrop *, _Bool *))arg1;
- (void)enumeratePersonsUsingBlock:(void (^)(HMPerson *, _Bool *))arg1;
- (NAFuture *)performCloudPull;
@end

