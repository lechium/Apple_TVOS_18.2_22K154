//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCHIPThreadNetworkEventListener, HMDHomeManager, HMDUIDialogPresenter, HMFTimer, HMMTRAttestationDataStore, HMMTRResidentStateManager, HMMTRStorage, HMMTRUIDialogPresenter, NSNotificationCenter, NSNumber, NSSet, NSString;
@protocol HMDFileManager, HMMTRVendorMetadataStore;

__attribute__((visibility("hidden")))
@interface HMDCHIPDataSource : HMFObject
{
    _Bool _pnExistsOnCurrentNetwork;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    id <HMMTRVendorMetadataStore> _vendorMetadataStore;	// 24 = 0x18
    HMMTRAttestationDataStore *_attestationDataStore;	// 32 = 0x20
    HMMTRUIDialogPresenter *_uiDialogPresenter;	// 40 = 0x28
    id <HMDFileManager> _fileManager;	// 48 = 0x30
    NSNotificationCenter *_notificationCenter;	// 56 = 0x38
    HMFTimer *_vendorMetadataRefreshTimer;	// 64 = 0x40
    HMFTimer *_attestationDataRefreshTimer;	// 72 = 0x48
    HMDUIDialogPresenter *_dialogPresenter;	// 80 = 0x50
    HMMTRResidentStateManager *_chipResidentStateManager;	// 88 = 0x58
    HMMTRStorage *_chipStorage;	// 96 = 0x60
    HMDCHIPThreadNetworkEventListener *_userPreferredThreadNetworkEventListener;	// 104 = 0x68
    unsigned long long _networkChangedLastUpdatedTime;	// 112 = 0x70
}

+ (id)logCategory;	// IMP=0x00100000008e0179
- (void).cxx_destruct;	// IMP=0x00000000008df58d
@property(nonatomic) unsigned long long networkChangedLastUpdatedTime; // @synthesize networkChangedLastUpdatedTime=_networkChangedLastUpdatedTime;
@property _Bool pnExistsOnCurrentNetwork; // @synthesize pnExistsOnCurrentNetwork=_pnExistsOnCurrentNetwork;
@property(retain) HMDCHIPThreadNetworkEventListener *userPreferredThreadNetworkEventListener; // @synthesize userPreferredThreadNetworkEventListener=_userPreferredThreadNetworkEventListener;
@property(retain) HMMTRStorage *chipStorage; // @synthesize chipStorage=_chipStorage;
@property(retain) HMMTRResidentStateManager *chipResidentStateManager; // @synthesize chipResidentStateManager=_chipResidentStateManager;
@property(readonly) HMDUIDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(readonly) HMFTimer *attestationDataRefreshTimer; // @synthesize attestationDataRefreshTimer=_attestationDataRefreshTimer;
@property(readonly) HMFTimer *vendorMetadataRefreshTimer; // @synthesize vendorMetadataRefreshTimer=_vendorMetadataRefreshTimer;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(retain) HMMTRUIDialogPresenter *uiDialogPresenter; // @synthesize uiDialogPresenter=_uiDialogPresenter;
@property(retain) HMMTRAttestationDataStore *attestationDataStore; // @synthesize attestationDataStore=_attestationDataStore;
@property(retain) id <HMMTRVendorMetadataStore> vendorMetadataStore; // @synthesize vendorMetadataStore=_vendorMetadataStore;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)browser:(id)arg1 didRemoveAccessoryPairingWithNodeID:(id)arg2;	// IMP=0x00000000008dedfb
- (void)requestUserPermissionForBridgeAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000008dece0
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000008debc5
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000008de969
- (void)forAllPairedMatterServersFetchVidPid:(CDUnknownBlockType)arg1;	// IMP=0x00000000008de595
- (void)forAllStorageDataSourcesDo:(CDUnknownBlockType)arg1;	// IMP=0x00000000008de293
- (id)storageDataSourceForFabricWithID:(id)arg1;	// IMP=0x00000000008ddf1d
- (id)appleHomeTargetFabricUUIDWithID:(id)arg1;	// IMP=0x00000000008ddb24
- (id)appleHomeFabricWithUUID:(id)arg1;	// IMP=0x00000000008dd85d
- (id)appleHomeFabricWithID:(id)arg1;	// IMP=0x00000000008dd555
@property(readonly, copy) NSNumber *currentFabricID;
@property(readonly, copy, nonatomic) NSSet *allTargetFabricUUIDs;
@property(readonly, copy, nonatomic) NSSet *allFabricIDs;
@property(readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x00000000008dc9c0
- (void)handleAccessoryCHIPStorageChangedNotification:(id)arg1;	// IMP=0x00000000008dc7f5
- (void)handleHomeCHIPStorageChangedNotification:(id)arg1;	// IMP=0x00000000008dc62a
- (void)handleDataReadyAfterBecomingPrimaryNotification:(id)arg1;	// IMP=0x00000000008dc500
- (void)handlePrimaryResidentUpdatedNotification:(id)arg1;	// IMP=0x00000000008dc3ab
- (void)handleUpdatedDataWithIsLocalChange:(_Bool)arg1;	// IMP=0x00000000008dc263
- (id)homeWithCHIPFabric:(id)arg1;	// IMP=0x00000000008dc098
- (id)home;	// IMP=0x00000000008dbd60
- (void)configureWithUIDialogPresenter:(id)arg1;	// IMP=0x00000000008dbbc4
- (void)configureWithAttestationDataStore:(id)arg1;	// IMP=0x00000000008db9cd
- (void)configureWithVendorMetadataStore:(id)arg1;	// IMP=0x00000000008db7a7
- (void)configureWithStorage:(id)arg1;	// IMP=0x00000000008db529
- (void)configureWithResidentStateManager:(id)arg1;	// IMP=0x00000000008db2cc
- (void)configureWithAccessoryServerBrowser:(id)arg1;	// IMP=0x00000000008db192
- (id)initWithHomeManager:(id)arg1 notificationCenter:(id)arg2 vendorMetadataRefreshTimer:(id)arg3 attestationDataRefreshTimer:(id)arg4 dialogPresenter:(id)arg5;	// IMP=0x00000000008db046
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000008daf22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

