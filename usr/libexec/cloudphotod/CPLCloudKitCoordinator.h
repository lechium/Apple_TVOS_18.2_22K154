//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, NSMutableDictionary, NSMutableSet;
@protocol CPLCloudKitClient, CPLCloudKitPushNotificationCenter, OS_dispatch_queue;

@interface CPLCloudKitCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _waitingForClientsGeneration;	// 16 = 0x10
    NSMutableSet *_clients;	// 24 = 0x18
    NSMutableSet *_foregroundClients;	// 32 = 0x20
    NSMutableSet *_clientsInterestedInAllZones;	// 40 = 0x28
    NSMutableDictionary *_clientsInterestedInSomeSharedZones;	// 48 = 0x30
    NSMutableDictionary *_clientsInterestedInSomePrivateZones;	// 56 = 0x38
    id <CPLCloudKitClient> _lastClientServedWithAPushNotification;	// 64 = 0x40
    _Bool _shouldForceDroppingPushNotifications;	// 72 = 0x48
    _Bool _hasActivatedCoordinator;	// 73 = 0x49
    id <CPLCloudKitPushNotificationCenter> _pushNotificationCenter;	// 80 = 0x50
    CKDatabase *_database;	// 88 = 0x58
    CKDatabase *_sharedDatabase;	// 96 = 0x60
    CKContainer *_container;	// 104 = 0x68
    CKContainer *_zoneishContainer;	// 112 = 0x70
}

+ (_Bool)networkBehaviorShouldBeDiscretionaryForForegroundOperation:(_Bool)arg1 upload:(_Bool)arg2 metadata:(_Bool)arg3;	// IMP=0x002000000005c08c
+ (void)setShouldRegisterClient:(_Bool)arg1;	// IMP=0x001000000005c079
+ (_Bool)shouldRegisterClient;	// IMP=0x001000000005c050
+ (void)setEnableTurboMode:(_Bool)arg1;	// IMP=0x001000000005c03d
+ (_Bool)enableTurboMode;	// IMP=0x001000000005bfd5
+ (id)newOperationConfiguration;	// IMP=0x001000000005bc58
+ (void)setExecutionIdentifier:(id)arg1;	// IMP=0x001000000005bc2f
+ (id)executionIdentifier;	// IMP=0x001000000005bc1e
+ (id)_zoneishContainer;	// IMP=0x001000000005a47e
+ (id)_container;	// IMP=0x001000000005a46a
+ (id)containerIsZoneish:(_Bool)arg1;	// IMP=0x001000000005a3b5
+ (id)_containerOptionsIsZoneish:(_Bool)arg1;	// IMP=0x001000000005a31f
+ (_Bool)usesSandboxEnvironment;	// IMP=0x001000000005a2a3
+ (id)sharedCoordinator;	// IMP=0x001000000005a070
- (void).cxx_destruct;	// IMP=0x002000000005dbee
@property(readonly, nonatomic) CKContainer *zoneishContainer; // @synthesize zoneishContainer=_zoneishContainer;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) CKDatabase *sharedDatabase; // @synthesize sharedDatabase=_sharedDatabase;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) id <CPLCloudKitPushNotificationCenter> pushNotificationCenter; // @synthesize pushNotificationCenter=_pushNotificationCenter;
- (void)fetchAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005d808
- (void)center:(id)arg1 didReceivePushNotification:(id)arg2;	// IMP=0x001000000005d594
- (void)noteClient:(id)arg1 isIgnoringChangeInZoneID:(id)arg2;	// IMP=0x001000000005d1f3
- (void)_stopWaitingForPushNotifications;	// IMP=0x001000000005d1b8
- (void)_startWaitingForPushNotifications;	// IMP=0x001000000005d164
- (id)_bestClientToReceivePushNotification:(id)arg1;	// IMP=0x001000000005cd5f
- (id)_clientsInterestedToReceiveAPushNotificationForZoneID:(id)arg1;	// IMP=0x001000000005ccb4
- (void)provideCKAssetWithRecordID:(id)arg1 fieldName:(id)arg2 recordType:(id)arg3 signature:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000005c9c0
- (void)_askNextClient:(id)arg1 toProvideCKAssetWithRecordID:(id)arg2 fieldName:(id)arg3 recordType:(id)arg4 signature:(id)arg5 bestResponseYet:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000005c6c1
- (void)getLastClientServedWithAPushNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c5ae
- (void)getStatusForClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005c321
- (id)databaseForOperationType:(long long)arg1 relativeToOperationType:(long long)arg2 forClient:(id)arg3;	// IMP=0x001000000005c203
- (id)createGroupAllowsCellular:(_Bool)arg1 allowsExpensiveNetwork:(_Bool)arg2 foreground:(_Bool)arg3 upload:(_Bool)arg4 metadata:(_Bool)arg5 forClient:(id)arg6;	// IMP=0x001000000005c0a8
- (void)associateMetric:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000005bf6c
- (void)launchOperation:(id)arg1 type:(long long)arg2 forClient:(id)arg3;	// IMP=0x001000000005bd21
- (id)newOperationConfiguration;	// IMP=0x001000000005bd08
- (void)noteClient:(id)arg1 isInForeground:(_Bool)arg2;	// IMP=0x001000000005ba6a
- (void)_moveToForeground;	// IMP=0x001000000005ba64
- (void)_moveToBackgroundIfNecessary;	// IMP=0x001000000005ba5e
- (void)unregisterClient:(id)arg1;	// IMP=0x001000000005b822
- (void)registerClient:(id)arg1;	// IMP=0x001000000005b6a8
- (void)_addClientToInterestingZones:(id)arg1;	// IMP=0x001000000005b61f
- (void)_removeClientFromInterestingZones:(id)arg1;	// IMP=0x001000000005b5a6
- (void)_removeClient:(id)arg1 interestedInSomeZones:(id)arg2;	// IMP=0x001000000005b309
- (void)_addClient:(id)arg1 interestedInZoneIDs:(id)arg2;	// IMP=0x001000000005b05c
- (void)_addClientInterestedInAllZones:(id)arg1;	// IMP=0x001000000005b002
- (id)_defaultClient;	// IMP=0x001000000005add4
- (void)coordinatorWontBeUsed;	// IMP=0x001000000005ad45
- (void)_waitForClients;	// IMP=0x001000000005ac69
- (void)_waitForClientsIfNecessaryLocked;	// IMP=0x001000000005ab2b
- (void)_coordinatorWillBeUsed;	// IMP=0x001000000005a65e
- (void)_coordinatorWontBeUsed;	// IMP=0x001000000005a495
- (id)init;	// IMP=0x001000000005a0c5

@end

