//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBulletinBoardNotification, NSArray, NSHashTable, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBulletinBoardNotificationServiceGroup : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSSet *_cameraProfileUUIDs;	// 16 = 0x10
    NSSet *_associatedServiceUUIDs;	// 24 = 0x18
    NSHashTable *_cameraProfilesTable;	// 32 = 0x20
    NSHashTable *_associatedServicesTable;	// 40 = 0x28
    HMDBulletinBoardNotification *_bulletinBoardNotification;	// 48 = 0x30
    NSArray *_associatedServices;	// 56 = 0x38
    NSArray *_cameraProfiles;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d9935
+ (id)logCategory;	// IMP=0x00100000000d9905
- (void).cxx_destruct;	// IMP=0x00000000000d95bf
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(retain, nonatomic) NSArray *associatedServices; // @synthesize associatedServices=_associatedServices;
@property __weak HMDBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d9418
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d90ba
- (id)logIdentifier;	// IMP=0x00000000000d906a
- (id)actionContextForCameraProfileID:(id)arg1;	// IMP=0x00000000000d82ec
- (id)_cameraProfileWithID:(id)arg1;	// IMP=0x00000000000d811e
- (id)dumpState;	// IMP=0x00000000000d7d8c
- (void)setAssociatedServicesTable:(id)arg1;	// IMP=0x00000000000d7c68
@property(readonly, copy, nonatomic) NSHashTable *associatedServicesTable; // @synthesize associatedServicesTable=_associatedServicesTable;
- (void)setCameraProfilesTable:(id)arg1;	// IMP=0x00000000000d7bce
@property(readonly, copy, nonatomic) NSHashTable *cameraProfilesTable; // @synthesize cameraProfilesTable=_cameraProfilesTable;
@property(retain, nonatomic) NSSet *associatedServiceUUIDs; // @synthesize associatedServiceUUIDs=_associatedServiceUUIDs;
@property(retain, nonatomic) NSSet *cameraProfileUUIDs; // @synthesize cameraProfileUUIDs=_cameraProfileUUIDs;
- (id)_prepareServiceGroupPayload;	// IMP=0x00000000000d78e0
- (void)_updateAssociatedServicesTable:(id)arg1;	// IMP=0x00000000000d7748
- (void)_updateAssociatedServices:(id)arg1 associatedCameras:(id)arg2;	// IMP=0x00000000000d7041
- (void)_configureServices;	// IMP=0x00000000000d61d6
- (id)_cameraNotificationGeneratingServicesForAccessory:(id)arg1;	// IMP=0x00000000000d5d34
- (id)_accessoriesInRoom:(id)arg1 ofHome:(id)arg2;	// IMP=0x00000000000d5a8c
- (_Bool)_isDefaultRoom:(id)arg1 ofHome:(id)arg2;	// IMP=0x00000000000d59d4
- (void)configureBulletinNotification;	// IMP=0x00000000000d586d
- (_Bool)_isNotificationGeneratingService:(id)arg1;	// IMP=0x00000000000d5787
- (_Bool)_isAlarmService:(id)arg1;	// IMP=0x00000000000d5746
- (_Bool)_isSupportedAssociationService:(id)arg1;	// IMP=0x00000000000d5644
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)arg1;	// IMP=0x00000000000d54c3
- (void)configureWithWorkQueue:(id)arg1;	// IMP=0x00000000000d547c
- (id)initWithBulletinBoardNotification:(id)arg1;	// IMP=0x00000000000d534d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

