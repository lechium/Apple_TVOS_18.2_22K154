//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessCodeDataManager, HMDAccessoryAccessCodeReaderWriter, NSHashTable, NSObject, NSString, NSUUID;
@protocol HMDAccessCodeManagerContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeManager : HMFObject
{
    _Bool _homeAppForegrounded;	// 8 = 0x8
    HMDAccessCodeDataManager *_dataManager;	// 16 = 0x10
    id <HMDAccessCodeManagerContext> _context;	// 24 = 0x18
    Class _utilities;	// 32 = 0x20
    HMDAccessoryAccessCodeReaderWriter *_accessoryReaderWriter;	// 40 = 0x28
    NSHashTable *_subscribedClientConnections;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000007e166
- (void).cxx_destruct;	// IMP=0x0000000000078a76
@property(readonly) NSHashTable *subscribedClientConnections; // @synthesize subscribedClientConnections=_subscribedClientConnections;
@property(getter=isHomeAppForegrounded) _Bool homeAppForegrounded; // @synthesize homeAppForegrounded=_homeAppForegrounded;
@property(readonly) HMDAccessoryAccessCodeReaderWriter *accessoryReaderWriter; // @synthesize accessoryReaderWriter=_accessoryReaderWriter;
@property(readonly) Class utilities; // @synthesize utilities=_utilities;
@property(readonly) id <HMDAccessCodeManagerContext> context; // @synthesize context=_context;
@property(readonly) HMDAccessCodeDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000000788cc
- (void)accessCodeDataManager:(id)arg1 didRemoveAccessoryAccessCodes:(id)arg2;	// IMP=0x000000000007879a
- (void)accessCodeDataManager:(id)arg1 didUpdateAccessoryAccessCodes:(id)arg2;	// IMP=0x0000000000078668
- (void)accessCodeDataManager:(id)arg1 didAddAccessoryAccessCodes:(id)arg2;	// IMP=0x0000000000078536
- (void)accessCodeDataManager:(id)arg1 didRemoveHomeAccessCodes:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x000000000007843c
- (void)accessCodeDataManager:(id)arg1 didUpdateHomeAccessCodes:(id)arg2 changedByUserUUID:(id)arg3;	// IMP=0x0000000000078342
- (void)accessCodeDataManager:(id)arg1 didAddHomeAccessCodes:(id)arg2 addedByUserUUID:(id)arg3;	// IMP=0x0000000000078248
- (id)_waitUntilDataHasSyncedToResidentForAccessoryUUIDs:(id)arg1;	// IMP=0x00000000000780e1
- (id)_waitUntilDataHasSyncedToResidentIfNecessaryForAccessoryUUIDs:(id)arg1;	// IMP=0x0000000000077f89
- (void)_updateAccessoryAccessCodeCache;	// IMP=0x0000000000077df6
- (id)_accessCodeForUserWithUUID:(id)arg1 inHome:(id)arg2;	// IMP=0x0000000000077c65
- (void)_generateNewAccessCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000077ab0
- (id)_addNewAccessCode:(id)arg1 forUserWithUUID:(id)arg2 toAccessoriesWithUUIDs:(id)arg3 withRetries:(_Bool)arg4;	// IMP=0x0000000000077898
- (id)addNewAccessCode:(id)arg1 forUserWithUUID:(id)arg2 toAccessoriesWithUUIDs:(id)arg3 withRetries:(_Bool)arg4;	// IMP=0x0000000000077719
- (id)_updateAccessCode:(id)arg1 toNewValue:(id)arg2 onAccessoriesWithFetchResponses:(id)arg3 withRetries:(_Bool)arg4;	// IMP=0x0000000000077596
- (id)_resetAccessCodesForHomeAccessCode:(id)arg1;	// IMP=0x00000000000773ed
- (id)_createNewAccessCodeForUserWithUUID:(id)arg1;	// IMP=0x0000000000077247
- (void)_notifySubscribersOfMessageWithName:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000076df9
- (void)_generateNewUserAccessCodeForMessage:(id)arg1;	// IMP=0x00000000000769d6
- (void)_resetAccessoryAccessCodesForMessage:(id)arg1;	// IMP=0x000000000007672b
- (id)_removeAccessCode:(id)arg1 forUserBeingRemoved:(id)arg2;	// IMP=0x000000000007654c
- (id)removeAccessCode:(id)arg1 fromHAPAccessory:(id)arg2;	// IMP=0x0000000000076404
- (id)_removeAccessCode:(id)arg1 forUser:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x0000000000076233
- (id)_removeAccessCode:(id)arg1 forUserWithUUID:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x0000000000075f2f
- (void)_setAccessCodeForUserForMessage:(id)arg1;	// IMP=0x0000000000075609
- (id)_removeAccessCodeFromAccessoriesKeepingiCloudDataUponFailure:(id)arg1 forUserUUID:(id)arg2;	// IMP=0x0000000000075440
- (void)_removeSimpleLabelAccessCodeMessage:(id)arg1;	// IMP=0x0000000000074fa0
- (id)_updateModificationRequestsWithUserOrGuestNames:(id)arg1;	// IMP=0x0000000000074f3f
- (void)_submitAccessCodeModificationRequestsForMessage:(id)arg1;	// IMP=0x0000000000074861
- (void)_fetchAccessCodeConstraintsForMessage:(id)arg1;	// IMP=0x0000000000074427
- (void)_fetchAccessCodesForMessage:(id)arg1;	// IMP=0x0000000000073fed
- (_Bool)_redispatchToResidentIfNeccesaryForMessage:(id)arg1 withNewResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000073c07
- (void)_updateCacheWithModificationResponses:(id)arg1;	// IMP=0x0000000000073a64
- (_Bool)hasCurrentUserAccessCodeChangedWithChangedAccessCodes:(id)arg1 home:(id)arg2;	// IMP=0x0000000000073964
- (void)handleHomeDidDisableCharacteristicNotification:(id)arg1;	// IMP=0x00000000000738c9
- (void)handleHomeDidEnableCharacteristicNotification:(id)arg1;	// IMP=0x000000000007382e
- (void)handleAccessorySupportsAccessCodeDidChangeNotification:(id)arg1;	// IMP=0x00000000000735af
- (void)handleHomeUserRemovedNotification:(id)arg1;	// IMP=0x00000000000734dd
- (void)handleUserAccessCodeDidChangeMessage:(id)arg1;	// IMP=0x00000000000732e3
- (void)handleConfirmDataHasSyncedToResidentMessage:(id)arg1;	// IMP=0x0000000000072f4c
- (void)handleGenerateNewUserAccessCodeMessage:(id)arg1;	// IMP=0x0000000000072d40
- (void)handleResetAccessoryAccessCodesMessage:(id)arg1;	// IMP=0x0000000000072b29
- (void)handleFetchCachedAccessCodesMessage:(id)arg1;	// IMP=0x0000000000072802
- (void)handleFetchHomeAccessCodesMessage:(id)arg1;	// IMP=0x000000000007254d
- (void)handleFetchAccessCodeConstraintsMessage:(id)arg1;	// IMP=0x00000000000720be
- (void)handleFetchAccessCodesMessage:(id)arg1;	// IMP=0x0000000000071c2f
- (void)handleRemoveHomeAccessCodeMessage:(id)arg1;	// IMP=0x00000000000718c6
- (void)handleSetUserInformationMessage:(id)arg1;	// IMP=0x00000000000714ac
- (void)handleRemoveSimpleLabelAccessCodeMessage:(id)arg1;	// IMP=0x0000000000071295
- (void)handleSetAccessCodeForUserMessage:(id)arg1;	// IMP=0x000000000007107e
- (void)handleSubmitAccessCodeModificationRequestsMessage:(id)arg1;	// IMP=0x0000000000070e67
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x0000000000070aaa
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x00000000000706ed
- (void)fetchAccessCodeForIdentifier:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007034a
- (void)unconfigure;	// IMP=0x0000000000070231
- (void)configureWithMessageDispatcher:(id)arg1;	// IMP=0x000000000006f5f8
- (id)initWithContext:(id)arg1 utilities:(Class)arg2 accessoryReaderWriter:(id)arg3 dataManager:(id)arg4;	// IMP=0x000000000006f4e7
- (id)initWithContext:(id)arg1;	// IMP=0x000000000006f42c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

