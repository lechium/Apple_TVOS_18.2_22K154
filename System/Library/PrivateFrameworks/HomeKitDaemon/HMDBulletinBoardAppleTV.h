//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSMutableArray, NSMutableDictionary, NSString;
@protocol HMDDoorbellBulletinUtilities, PBSSystemHomeUIControllerBulletinServiceInterface;

__attribute__((visibility("hidden")))
@interface HMDBulletinBoardAppleTV : HMFObject
{
    struct hmf_unfair_data_lock_s _lock;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    NSMutableDictionary *_bulletinsByIdentifier;	// 24 = 0x18
    NSMutableArray *_bulletinRequestsSortedByDate;	// 32 = 0x20
    id <PBSSystemHomeUIControllerBulletinServiceInterface> _systemHomeUIController;	// 40 = 0x28
    NSMutableDictionary *_characteristicTuplesByContextID;	// 48 = 0x30
    id <HMDDoorbellBulletinUtilities> _doorbellBulletinUtilities;	// 56 = 0x38
    CDUnknownBlockType _cameraSignificantEventFaceClassificationResolverFactory;	// 64 = 0x40
}

+ (_Bool)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2;	// IMP=0x001000000063cdd0
+ (id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2;	// IMP=0x001000000063cda8
+ (id)bulletinSupportedCharacteristicsForService:(id)arg1;	// IMP=0x001000000063ca02
+ (_Bool)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x001000000063c939
+ (_Bool)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x001000000063c85c
+ (id)_supportedNonSecureServices;	// IMP=0x001000000063c82c
+ (id)_supportedSecureServices;	// IMP=0x001000000063c7fc
+ (id)logCategory;	// IMP=0x001000000063c7cc
+ (id)sharedBulletinBoard;	// IMP=0x001000000063c79c
- (void).cxx_destruct;	// IMP=0x000000000063b145
@property(copy) CDUnknownBlockType cameraSignificantEventFaceClassificationResolverFactory; // @synthesize cameraSignificantEventFaceClassificationResolverFactory=_cameraSignificantEventFaceClassificationResolverFactory;
@property(retain) id <HMDDoorbellBulletinUtilities> doorbellBulletinUtilities; // @synthesize doorbellBulletinUtilities=_doorbellBulletinUtilities;
@property(readonly, nonatomic) NSMutableDictionary *characteristicTuplesByContextID; // @synthesize characteristicTuplesByContextID=_characteristicTuplesByContextID;
@property(readonly, nonatomic) id <PBSSystemHomeUIControllerBulletinServiceInterface> systemHomeUIController; // @synthesize systemHomeUIController=_systemHomeUIController;
@property(readonly, nonatomic) NSMutableArray *bulletinRequestsSortedByDate; // @synthesize bulletinRequestsSortedByDate=_bulletinRequestsSortedByDate;
@property(readonly, nonatomic) NSMutableDictionary *bulletinsByIdentifier; // @synthesize bulletinsByIdentifier=_bulletinsByIdentifier;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)_cullBulletinsToCount:(unsigned long long)arg1;	// IMP=0x000000000063af63
- (void)_presentPBSBulletin:(id)arg1 forHomeKitObjectUniqueIdentifier:(id)arg2;	// IMP=0x000000000063accc
- (id)_doorbellPressNotificationsNearDate:(id)arg1 forCameraProfile:(id)arg2;	// IMP=0x000000000063ab76
- (void)insertBulletinForLockUserChange:(id)arg1 lockDataType:(unsigned char)arg2 dataOperationType:(unsigned char)arg3 ecosystemName:(id)arg4 isAffectedUser:(_Bool)arg5 flow:(id)arg6;	// IMP=0x0000000000639727
- (void)insertBulletinForLockOperation:(id)arg1 userDisplayName:(id)arg2 lockOperationType:(unsigned char)arg3 ecosystemName:(id)arg4 flow:(id)arg5;	// IMP=0x0000000000638c09
- (void)insertBulletinForDoorLockAlarm:(id)arg1 alarmCode:(unsigned char)arg2 flow:(id)arg3;	// IMP=0x00000000006385bf
- (void)insertBulletinForChangedSecureClassCharacteristic:(id)arg1 attributedUser:(id)arg2;	// IMP=0x0000000000637a91
- (_Bool)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1 includeChangeFromNil:(_Bool)arg2;	// IMP=0x0000000000636e03
- (_Bool)_shouldSkipBulletinForChangedCharacteristic:(id)arg1;	// IMP=0x0000000000636a2f
- (void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(_Bool)arg3;	// IMP=0x00000000006364ae
- (_Bool)_hasDuplicateBulletinForSnapshotCharacteristic:(id)arg1;	// IMP=0x00000000006361b7
- (_Bool)_hasDuplicateBulletinForCharacteristic:(id)arg1;	// IMP=0x0000000000635d20
- (void)_updateBulletin:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000000635b70
- (id)_bulletinFaceImageDataForCameraProfile:(id)arg1 significantEvents:(id)arg2;	// IMP=0x0000000000635563
- (id)_bulletinUserInfoForSignificantEventBulletin:(id)arg1;	// IMP=0x00000000006351b0
- (id)_bulletinUserInfoForCharacteristic:(id)arg1 snapshotData:(id)arg2 significantEvents:(id)arg3 date:(id)arg4;	// IMP=0x0000000000634979
- (id)_bulletinTitleForChangedCharacteristic:(id)arg1 withSignificantEvents:(id)arg2;	// IMP=0x00000000006345c7
- (void)homeUIService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000000634404
- (void)updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000633ea7
- (void)insertCameraClipSignificantEventBulletin:(id)arg1;	// IMP=0x0000000000633847
- (void)updateBulletinWithRecordID:(id)arg1 forChangedCharacteristics:(id)arg2 snapshotData:(id)arg3;	// IMP=0x0000000000633264
- (void)removeCameraClipBulletinsForCameraProfile:(id)arg1;	// IMP=0x000000000063325e
- (void)removeBulletinWithRecordID:(id)arg1;	// IMP=0x000000000063304b
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 attributedUsers:(id)arg2 snapshotData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000631806
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006317ec
- (void)removeAllBulletins;	// IMP=0x00000000006317d8
- (void)insertBulletinsForChangedCharacteristics:(id)arg1 modifiedCharacteristics:(id)arg2 changedByThisDevice:(_Bool)arg3 changeNotificationFromPrimary:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000630cfc
- (void)configureWithHomeManager:(id)arg1;	// IMP=0x0000000000630cea
- (id)initWithSystemHomeUIController:(id)arg1;	// IMP=0x0000000000630bc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

