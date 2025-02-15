//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDUIDialogPresenter : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _selectedByPeerDevice;	// 12 = 0xc
    _Bool _peerDeviceAcceptedSelection;	// 13 = 0xd
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    struct __CFUserNotification *_currentNotification;	// 24 = 0x18
    id _currentContext;	// 32 = 0x20
    NSMutableArray *_pendingContexts;	// 40 = 0x28
}

+ (id)sharedUIDialogPresenter;	// IMP=0x0060000000396c79
- (void).cxx_destruct;	// IMP=0x0000000000395c9e
@property(nonatomic) _Bool peerDeviceAcceptedSelection; // @synthesize peerDeviceAcceptedSelection=_peerDeviceAcceptedSelection;
@property(nonatomic) _Bool selectedByPeerDevice; // @synthesize selectedByPeerDevice=_selectedByPeerDevice;
@property(retain, nonatomic) NSMutableArray *pendingContexts; // @synthesize pendingContexts=_pendingContexts;
@property(retain, nonatomic) id currentContext; // @synthesize currentContext=_currentContext;
@property(nonatomic) struct __CFUserNotification *currentNotification; // @synthesize currentNotification=_currentNotification;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (_Bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id *)arg4 withContext:(id)arg5;	// IMP=0x0000000000395bbf
- (_Bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 textField:(id *)arg3 withContext:(id)arg4;	// IMP=0x0000000000395b99
- (_Bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id *)arg4 withContext:(id)arg5 selectedByPeerDevice:(_Bool *)arg6 timeout:(double)arg7;	// IMP=0x0000000000395a3f
- (void)displayRestrictedBluetoothCharacteristicsWarningWithDeviceName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000395961
@property(readonly, nonatomic) _Bool shouldSkipAuthPromptDialog;
- (void)displayExecutionErrorOfTrigger:(id)arg1 partialSuccess:(_Bool)arg2 context:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000395815
- (void)confirmReportAccessory:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000395653
- (void)_displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000039548c
- (void)displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000039531d
- (void)_displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003950fe
- (void)displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000394f8f
- (void)_displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000394bf7
- (void)displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000394a62
- (void)_requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000039466f
- (void)_showUserDialogForIncompatibleAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000003944a6
- (void)showUserDialogForIncompatibleAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000003942d2
- (void)_requestUserPermissionForRemovalOfSpecificWiFiCredentialedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000393f08
- (void)requestUserPermissionForRemovalOfSpecificWiFiCredentialedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000393dc1
- (void)_requestUserPermissionForRemovalOfRouter:(id)arg1 accessoriesRequiringManualReconfiguration:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000393776
- (void)requestUserPermissionForRemovalOfRouter:(id)arg1 accessoriesRequiringManualReconfiguration:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000393602
- (void)_requestUserPermissionForDeletionOfHomeWithName:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000393133
- (void)requestUserPermissionForDeletionOfHomeWithName:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000392f9e
- (void)_requestUserPermissionWithAccessoryPPIDInfo:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000392849
- (void)requestUserPermissionWithAccessoryPPIDInfo:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000392675
- (void)requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003924e0
- (void)_requestUserPermissionForBridgeAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003922c1
- (void)requestUserPermissionForBridgeAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000039212c
- (void)_requestUserPermissionForUnauthenticatedAliroLockWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000391ed6
- (void)requestUserPermissionForUnauthenticatedAliroLockWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000391d67
- (void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000391b48
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003919b3
- (_Bool)_removeCurrentNotification:(struct __CFUserNotification *)arg1 currentSelection:(_Bool)arg2 selectedByPeerDevice:(_Bool *)arg3 andContext:(id)arg4;	// IMP=0x000000000039185a
- (_Bool)_addCurrentNotification:(struct __CFUserNotification *)arg1 withContext:(id)arg2;	// IMP=0x0000000000391789
- (_Bool)_addToPendingContext:(id)arg1;	// IMP=0x0000000000391692
- (_Bool)_isPendingContext:(id)arg1;	// IMP=0x00000000003915f0
- (void)dismissPendingDialogDueToPeerDeviceSelection:(_Bool)arg1 context:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000039148b
- (void)dismissPendingDialogWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000391352
- (void)dealloc;	// IMP=0x00000000003912c2
- (id)init;	// IMP=0x000000000039120b

@end

