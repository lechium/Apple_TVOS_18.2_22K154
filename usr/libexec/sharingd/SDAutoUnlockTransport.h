//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSService, NSDate, NSMapTable, NSMutableDictionary, NSNumber, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue, SDAutoUnlockTransportClient;

@interface SDAutoUnlockTransport
{
    NSDate *_lastSeenWatchDate;	// 8 = 0x8
    NSNumber *_watchExistedInUnlockList;	// 16 = 0x10
    NSNumber *_watchCurrentlyInList;	// 24 = 0x18
    IDSService *_autoUnlockService;	// 32 = 0x20
    id <SDAutoUnlockTransportClient> _primaryClient;	// 40 = 0x28
    IDSService *_idsService;	// 48 = 0x30
    IDSService *_activityService;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_transportQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_clientQueue;	// 72 = 0x48
    NSMapTable *_clientMap;	// 80 = 0x50
    NSMutableDictionary *_completionHandlers;	// 88 = 0x58
    NSMutableDictionary *_sendIdentifierToSessionID;	// 96 = 0x60
    NSMutableDictionary *_sendDates;	// 104 = 0x68
    NSDate *_lastSendDate;	// 112 = 0x70
    NSMutableDictionary *_autoUnlockDeviceCache;	// 120 = 0x78
    NSMutableDictionary *_cloudPairRetryRecords;	// 128 = 0x80
    NSMutableDictionary *_cachedBluetoothIDToUniqueIDs;	// 136 = 0x88
    NSSet *_cachedApproveBluetoothIDs;	// 144 = 0x90
}

+ (id)sharedTransport;	// IMP=0x002000000011061a
- (void).cxx_destruct;	// IMP=0x0020000000118688
@property(retain, nonatomic) NSSet *cachedApproveBluetoothIDs; // @synthesize cachedApproveBluetoothIDs=_cachedApproveBluetoothIDs;
@property(retain, nonatomic) NSMutableDictionary *cachedBluetoothIDToUniqueIDs; // @synthesize cachedBluetoothIDToUniqueIDs=_cachedBluetoothIDToUniqueIDs;
@property(retain, nonatomic) NSMutableDictionary *cloudPairRetryRecords; // @synthesize cloudPairRetryRecords=_cloudPairRetryRecords;
@property(retain, nonatomic) NSMutableDictionary *autoUnlockDeviceCache; // @synthesize autoUnlockDeviceCache=_autoUnlockDeviceCache;
@property(retain, nonatomic) NSDate *lastSendDate; // @synthesize lastSendDate=_lastSendDate;
@property(retain) NSMutableDictionary *sendDates; // @synthesize sendDates=_sendDates;
@property(retain, nonatomic) NSMutableDictionary *sendIdentifierToSessionID; // @synthesize sendIdentifierToSessionID=_sendIdentifierToSessionID;
@property(retain) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSMapTable *clientMap; // @synthesize clientMap=_clientMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transportQueue; // @synthesize transportQueue=_transportQueue;
@property(retain, nonatomic) IDSService *activityService; // @synthesize activityService=_activityService;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void)setPrimaryClient:(id)arg1;	// IMP=0x001000000011848f
- (id)primaryClient;	// IMP=0x0010000000118476
- (id)autoUnlockService;	// IMP=0x0010000000118465
- (id)state;	// IMP=0x0010000000118016
- (_Bool)pairingRequestIsValidForDeviceID:(id)arg1 messageContext:(id)arg2;	// IMP=0x0010000000117d9e
- (_Bool)disableEncryption;	// IMP=0x0010000000117d85
- (_Bool)showOtherDevices;	// IMP=0x0010000000117d6c
- (_Bool)showIDInName;	// IMP=0x0010000000117d53
@property(retain, nonatomic) NSNumber *watchCurrentlyInList; // @synthesize watchCurrentlyInList=_watchCurrentlyInList;
@property(retain, nonatomic) NSNumber *watchExistedInUnlockList; // @synthesize watchExistedInUnlockList=_watchExistedInUnlockList;
@property(retain, nonatomic) NSDate *lastSeenWatchDate; // @synthesize lastSeenWatchDate=_lastSeenWatchDate;
@property(readonly, nonatomic) _Bool watchSeenRecently;
- (void)resetAppleWatchExisted;	// IMP=0x0010000000117685
@property(readonly, nonatomic) _Bool appleWatchExisted;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x001000000011733a
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000011695f
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000001167b6
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000116691
- (id)dataFromUUID:(id)arg1;	// IMP=0x0010000000116611
- (id)transferDataFromPayload:(id)arg1 sessionID:(id)arg2;	// IMP=0x0010000000116529
- (id)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 wantsACK:(_Bool)arg6 timeout:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000001164d0
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000116494
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000001163c0
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 timeout:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000116394
- (void)loadCloudPairRetries;	// IMP=0x00100000001162cd
- (_Bool)canRetryCloudPairingForDeviceID:(id)arg1 useShortDate:(_Bool)arg2;	// IMP=0x001000000011606e
- (void)updateRetryDatesForDeviceIDs:(id)arg1;	// IMP=0x0010000000115c9b
- (void)triggerCloudPairRetryWithShortRetryDeviceIDs:(id)arg1;	// IMP=0x0010000000115c95
- (void)handleSuccessfulMessageSentWithIdentifier:(id)arg1 sessionID:(id)arg2;	// IMP=0x0010000000115b65
- (id)stableBluetoothIdentifierForIDSDevice:(id)arg1;	// IMP=0x0010000000115b50
- (id)connectionCacheDevices;	// IMP=0x00100000001159cb
- (_Bool)localDeviceIDSRegistered;	// IMP=0x00100000001157a5
- (_Bool)activityServiceHasWatch;	// IMP=0x001000000011554e
- (id)placeholderDevice;	// IMP=0x0010000000115428
- (void)updateBluetoothIDCache;	// IMP=0x001000000011502c
- (void)logBluetoothIDCache;	// IMP=0x0010000000114f7a
- (id)cachedIDSDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x0010000000114f00
- (id)idsDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x0010000000114ca9
- (id)idsDeviceForBluetoothID:(id)arg1;	// IMP=0x0010000000114ab0
- (id)idsDeviceForUniqueID:(id)arg1;	// IMP=0x00100000001148b7
- (id)proxyBluetoothDeviceIDForDeviceID:(id)arg1;	// IMP=0x00100000001147c5
- (id)nameForDevice:(id)arg1;	// IMP=0x00100000001146d9
- (_Bool)macVersionEligibleForDeviceID:(id)arg1;	// IMP=0x0010000000114383
- (_Bool)watchVersionEligibleForDevice:(id)arg1;	// IMP=0x0010000000114274
- (id)modelNameForDevice:(id)arg1;	// IMP=0x0010000000114242
- (void)updateApproveBluetoothIDs;	// IMP=0x0010000000113edb
- (id)approveBluetoothIDs;	// IMP=0x0010000000113e37
- (id)autoUnlockDeviceForIDSDevice:(id)arg1 cloudPaired:(_Bool)arg2 cached:(_Bool)arg3;	// IMP=0x0010000000113715
- (id)autoUnlockDeviceForIDSDevice:(id)arg1;	// IMP=0x00100000001136fb
- (id)enabledAutoUnlockLockDevices;	// IMP=0x00100000001133b5
- (id)onqueue_enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x0010000000112fcb
- (id)enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x0010000000112e71
- (id)enabledAutoUnlockDevices;	// IMP=0x0010000000112e5d
- (id)onqueue_autoUnlockEligibleDevices:(_Bool)arg1 deviceType:(long long)arg2;	// IMP=0x001000000011255a
- (id)autoUnlockEligibleDevicesWithCloudPairing:(_Bool)arg1 deviceType:(long long)arg2;	// IMP=0x00100000001123f1
- (id)autoUnlockEligibleWatchesWithCloudPairing:(_Bool)arg1;	// IMP=0x00100000001123da
- (id)autoUnlockEligibleWatches;	// IMP=0x00100000001123c3
- (id)onqueue_devicesWithLTKs;	// IMP=0x0010000000112160
- (id)devicesWithLTKs;	// IMP=0x0010000000112014
- (id)autoUnlockDeviceForBluetoothID:(id)arg1 cached:(_Bool)arg2;	// IMP=0x0010000000111fa3
- (id)autoUnlockDeviceForBluetoothID:(id)arg1;	// IMP=0x0010000000111f8f
- (id)autoUnlockDeviceForDeviceID:(id)arg1;	// IMP=0x0010000000111f30
- (id)modelIdentifierForDeviceID:(id)arg1;	// IMP=0x0010000000111ee0
- (long long)deviceTypeForDevice:(id)arg1;	// IMP=0x0010000000111d64
- (long long)deviceTypeForDeviceID:(id)arg1;	// IMP=0x0010000000111d11
- (id)deviceNameForDeviceID:(id)arg1;	// IMP=0x0010000000111cc1
- (id)idsMacDeviceIDs;	// IMP=0x0010000000111a50
- (id)idsDevicesIDs;	// IMP=0x0010000000111887
- (_Bool)deviceNearby;	// IMP=0x0010000000111843
- (_Bool)isDeviceSatellitePaired;	// IMP=0x001000000011183b
- (id)activeDevice;	// IMP=0x00100000001116be
- (id)pairedAutoUnlockDevice;	// IMP=0x001000000011165f
- (id)pairedDeviceID;	// IMP=0x001000000011160f
- (id)onqueue_bluetoothDeviceIdentifiers;	// IMP=0x001000000011140d
- (id)bluetoothDeviceIdentifiers;	// IMP=0x00100000001112cb
- (id)onqueue_bluetoothIDForIDSID:(id)arg1;	// IMP=0x0010000000111082
- (id)bluetoothIDForIDSID:(id)arg1;	// IMP=0x0010000000110edc
- (void)clearAutoUnlockDeviceCache;	// IMP=0x0010000000110e3f
- (void)refreshAutoUnlockDeviceCache;	// IMP=0x0010000000110e08
- (void)logDevices;	// IMP=0x0010000000110d28
- (void)removeClientForIdentifier:(id)arg1;	// IMP=0x00100000001109c0
- (void)addClient:(id)arg1 forIdentifer:(id)arg2;	// IMP=0x001000000011088d
- (id)init;	// IMP=0x001000000011066f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

