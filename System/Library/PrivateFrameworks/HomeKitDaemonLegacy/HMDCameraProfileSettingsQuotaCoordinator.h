//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraClipsQuotaManager, HMDHAPAccessory, NSObject, NSOperationQueue, NSString;
@protocol HMDCameraProfileSettingsQuotaCoordinatorDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraProfileSettingsQuotaCoordinator : HMFObject
{
    id <HMDCameraProfileSettingsQuotaCoordinatorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDCameraClipsQuotaManager *_quotaManager;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    HMDHAPAccessory *_accessory;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x001000000049e736
+ (id)clientErrorFromCanUpdateAccessModeError:(id)arg1;	// IMP=0x001000000049e672
- (void).cxx_destruct;	// IMP=0x000000000049c9e4
@property __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly) HMDCameraClipsQuotaManager *quotaManager; // @synthesize quotaManager=_quotaManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraProfileSettingsQuotaCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x000000000049c8f8
- (void)_disableRecordingAccessModesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000049c82d
- (void)_synchronizeCloudStorageWithCurrentCamerasWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000049c439
- (void)_synchronizeCloudStorageWithRecordingAccessModesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000049be94
- (_Bool)_requiresEnablingCloudStorageForAccessMode:(unsigned long long)arg1;	// IMP=0x000000000049bdb6
- (void)_performOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000049bc5c
- (id)cameraClipsZoneName;	// IMP=0x000000000049bb9f
- (void)disableRecordingAccessModes;	// IMP=0x000000000049bb19
- (void)synchronizeCloudStorageWithRecordingAccessModes;	// IMP=0x000000000049ba93
- (_Bool)_requiresDisablingCloudStorageForAccessMode:(unsigned long long)arg1 cameraHomePresence:(unsigned long long)arg2;	// IMP=0x000000000049b964
- (void)_updateCloudStorageAndSettingsWithAccessMode:(unsigned long long)arg1 forCameraHomePresence:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000049b3cc
- (void)updateCloudStorageAndSettingsWithAccessMode:(unsigned long long)arg1 forCameraHomePresence:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000049b2f5
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 quotaManager:(id)arg3;	// IMP=0x000000000049b1d7
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000049b140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

