//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMAccessoryCategory, HMDAccessoryNetworkAccessViolation, HMDAccessoryVersion, HMDApplicationData, HMDHome, HMDNetworkRouterFirewallRuleAccessoryIdentifier, HMDRoom, HMDSoftwareUpdate, HMDUserManagementOperationTimestamp, HMDVendorModelEntry, HMFMessageDispatcher, HMFVersion, NSArray, NSData, NSDate, NSDictionary, NSMutableSet, NSNotificationCenter, NSNumber, NSObject, NSString, NSUUID;
@protocol HMDFeaturesDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessory : HMFObject
{
    struct os_unfair_recursive_lock_s _lock;	// 8 = 0x8
    _Bool _primary;	// 16 = 0x10
    _Bool _reachable;	// 17 = 0x11
    _Bool _remotelyReachable;	// 18 = 0x12
    NSMutableSet *_accessoryProfiles;	// 24 = 0x18
    _Bool _connected;	// 32 = 0x20
    _Bool _suspended;	// 33 = 0x21
    _Bool _lowBattery;	// 34 = 0x22
    _Bool _reachabilityPingEnabled;	// 35 = 0x23
    _Bool _reachabilityPingNotificationEnabled;	// 36 = 0x24
    _Bool _resetOnBackoffExpiry;	// 37 = 0x25
    _Bool _supportsDoorbellChime;	// 38 = 0x26
    _Bool _supportsUserMediaSettings;	// 39 = 0x27
    _Bool _supportsCoordinationDoorbellChime;	// 40 = 0x28
    _Bool _supportsCoordinationFreeDoorbellChime;	// 41 = 0x29
    _Bool _supportsTVOSUpdateManualUpdateAvailableNotification;	// 42 = 0x2a
    _Bool _suspendCapable;	// 43 = 0x2b
    _Bool _shouldProcessTransactionRemoval;	// 44 = 0x2c
    _Bool _supportsManagedConfigurationProfile;	// 45 = 0x2d
    _Bool _remoteAccessEnabled;	// 46 = 0x2e
    NSString *_identifier;	// 48 = 0x30
    HMDRoom *_room;	// 56 = 0x38
    NSString *_model;	// 64 = 0x40
    NSString *_initialModel;	// 72 = 0x48
    NSString *_manufacturer;	// 80 = 0x50
    NSString *_initialManufacturer;	// 88 = 0x58
    HMDAccessoryVersion *_firmwareVersion;	// 96 = 0x60
    NSString *_displayableFirmwareVersion;	// 104 = 0x68
    NSString *_serialNumber;	// 112 = 0x70
    HMDApplicationData *_appData;	// 120 = 0x78
    NSString *_productData;	// 128 = 0x80
    NSString *_providedName;	// 136 = 0x88
    NSDate *_lastSeenDate;	// 144 = 0x90
    unsigned long long _configNumber;	// 152 = 0x98
    NSNumber *_networkClientIdentifier;	// 160 = 0xa0
    NSUUID *_networkRouterUUID;	// 168 = 0xa8
    long long _currentNetworkProtectionMode;	// 176 = 0xb0
    long long _networkClientLAN;	// 184 = 0xb8
    NSUUID *_networkClientProfileFingerprint;	// 192 = 0xc0
    long long _wiFiCredentialType;	// 200 = 0xc8
    NSArray *_allowedHosts;	// 208 = 0xd0
    NSData *_wiFiUniquePreSharedKey;	// 216 = 0xd8
    NSUUID *_configuredNetworkProtectionGroupUUID;	// 224 = 0xe0
    NSUUID *_defaultNetworkProtectionGroupUUID;	// 232 = 0xe8
    HMFVersion *_primaryProfileVersion;	// 240 = 0xf0
    NSNumber *_initialCategoryIdentifier;	// 248 = 0xf8
    HMDSoftwareUpdate *_softwareUpdate;	// 256 = 0x100
    HMDUserManagementOperationTimestamp *_sharedAdminAddedTimestamp;	// 264 = 0x108
    HMDUserManagementOperationTimestamp *_pairingsAuditedTimestamp;	// 272 = 0x110
    NSDate *_timeBecameUnreachable;	// 280 = 0x118
    NSDate *_timeBecameReachable;	// 288 = 0x120
    NSString *_pendingConfigurationIdentifier;	// 296 = 0x128
    double _lastPairingFailureTime;	// 304 = 0x130
    unsigned long long _consecutivePairingFailures;	// 312 = 0x138
    NSUUID *_preferredMediaUserUUID;	// 320 = 0x140
    NSNumber *_preferredMediaUserSelectionTypeNumber;	// 328 = 0x148
    NSString *_hashRouteID;	// 336 = 0x150
    HMDAccessory *_hostAccessory;	// 344 = 0x158
    NSUUID *_uuid;	// 352 = 0x160
    HMAccessoryCategory *_category;	// 360 = 0x168
    HMDHome *_home;	// 368 = 0x170
    NSArray *_transportReports;	// 376 = 0x178
    NSNotificationCenter *_notificationCenter;	// 384 = 0x180
    HMDAccessoryNetworkAccessViolation *_networkAccessViolation;	// 392 = 0x188
    id <HMDFeaturesDataSource> _featuresDataSource;	// 400 = 0x190
    CDUnknownBlockType _hashedRouteFactory;	// 408 = 0x198
    NSObject<OS_dispatch_queue> *_workQueue;	// 416 = 0x1a0
    HMFMessageDispatcher *_msgDispatcher;	// 424 = 0x1a8
    NSNumber *_categoryIdentifier;	// 432 = 0x1b0
    NSString *_configuredName;	// 440 = 0x1b8
    unsigned long long _accessoryReprovisionState;	// 448 = 0x1c0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003d935f
+ (id)logCategory;	// IMP=0x00100000003d932f
+ (_Bool)splitProductDataIntoProductGroupAndProductNumber:(id)arg1 productGroup:(id *)arg2 productNumber:(id *)arg3;	// IMP=0x00100000003d9276
+ (_Bool)validateProductData:(id)arg1;	// IMP=0x00100000003d91b0
- (void).cxx_destruct;	// IMP=0x00000000003d3f1e
@property(nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic, getter=isRemoteAccessEnabled) _Bool remoteAccessEnabled; // @synthesize remoteAccessEnabled=_remoteAccessEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy) CDUnknownBlockType hashedRouteFactory; // @synthesize hashedRouteFactory=_hashedRouteFactory;
@property(retain) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(retain, nonatomic) HMDAccessoryNetworkAccessViolation *networkAccessViolation; // @synthesize networkAccessViolation=_networkAccessViolation;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) _Bool supportsManagedConfigurationProfile; // @synthesize supportsManagedConfigurationProfile=_supportsManagedConfigurationProfile;
@property(copy, nonatomic) NSArray *transportReports; // @synthesize transportReports=_transportReports;
@property _Bool shouldProcessTransactionRemoval; // @synthesize shouldProcessTransactionRemoval=_shouldProcessTransactionRemoval;
@property(nonatomic, getter=isSuspendCapable) _Bool suspendCapable; // @synthesize suspendCapable=_suspendCapable;
@property(readonly, nonatomic) _Bool supportsTVOSUpdateManualUpdateAvailableNotification; // @synthesize supportsTVOSUpdateManualUpdateAvailableNotification=_supportsTVOSUpdateManualUpdateAvailableNotification;
@property(readonly, nonatomic) _Bool supportsCoordinationFreeDoorbellChime; // @synthesize supportsCoordinationFreeDoorbellChime=_supportsCoordinationFreeDoorbellChime;
@property(readonly, nonatomic) _Bool supportsCoordinationDoorbellChime; // @synthesize supportsCoordinationDoorbellChime=_supportsCoordinationDoorbellChime;
@property(readonly, nonatomic) _Bool supportsUserMediaSettings; // @synthesize supportsUserMediaSettings=_supportsUserMediaSettings;
@property(readonly, nonatomic) _Bool supportsDoorbellChime; // @synthesize supportsDoorbellChime=_supportsDoorbellChime;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *hashRouteID; // @synthesize hashRouteID=_hashRouteID;
@property(copy, nonatomic) NSNumber *preferredMediaUserSelectionTypeNumber; // @synthesize preferredMediaUserSelectionTypeNumber=_preferredMediaUserSelectionTypeNumber;
@property(copy, nonatomic) NSUUID *preferredMediaUserUUID; // @synthesize preferredMediaUserUUID=_preferredMediaUserUUID;
@property(nonatomic) unsigned long long consecutivePairingFailures; // @synthesize consecutivePairingFailures=_consecutivePairingFailures;
@property(nonatomic) _Bool reachabilityPingNotificationEnabled; // @synthesize reachabilityPingNotificationEnabled=_reachabilityPingNotificationEnabled;
@property(retain, nonatomic) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
@property(nonatomic) long long wiFiCredentialType; // @synthesize wiFiCredentialType=_wiFiCredentialType;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000000003d3b4b
- (void)submitLogEvent:(id)arg1;	// IMP=0x00000000003d3ac2
- (void)notifyClientsOfUpdatedAccessoryControllableValue:(_Bool)arg1;	// IMP=0x00000000003d3773
- (_Bool)supportsUnreachablePing;	// IMP=0x00000000003d376b
- (void)stopReachabilityCheck;	// IMP=0x00000000003d36c3
- (void)startReachabilityCheck;	// IMP=0x00000000003d361b
- (void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000003d32f0
- (void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000003d2fac
- (void)handleUpdatedSoftwareUpdateModel:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000003d2d66
- (_Bool)_allowSoftwareUpdateChangeFromSource:(unsigned long long)arg1;	// IMP=0x00000000003d2cf5
- (void)_applySoftwareUpdateModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d2b7a
- (void)updateSoftwareUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d2a9c
@property(readonly, nonatomic) _Bool supportsFirmwareUpdate;
@property(readonly, nonatomic) _Bool requiresRemovalOnPrimaryResident;
@property(readonly, nonatomic) _Bool supportsMessagedHomePodSettings;
@property(readonly) _Bool supportsSoftwareUpdateV2;
- (_Bool)supportsSoftwareUpdate;	// IMP=0x00000000003d2a74
- (void)updateGenerationCounterWithReason:(id)arg1 sourceUUID:(id)arg2 shouldNotifyClients:(_Bool)arg3;	// IMP=0x00000000003d29cc
- (id)notificationCenterForSoftwareUpdate:(id)arg1;	// IMP=0x00000000003d29b3
@property(retain, nonatomic) HMDSoftwareUpdate *softwareUpdate; // @synthesize softwareUpdate=_softwareUpdate;
- (void)setSoftwareUpdateForTesting:(id)arg1;	// IMP=0x00000000003d27be
- (void)__handlePairingIdentityRequest:(id)arg1;	// IMP=0x00000000003d2137
- (_Bool)supportsMinimumUserPrivilege;	// IMP=0x00000000003d212f
- (void)_updateHost:(id)arg1;	// IMP=0x00000000003d1d80
@property(nonatomic) __weak HMDAccessory *hostAccessory; // @synthesize hostAccessory=_hostAccessory;
- (void)removeHostedAccessory:(id)arg1;	// IMP=0x00000000003d1c2e
- (void)addHostedAccessory:(id)arg1;	// IMP=0x00000000003d1b7a
- (void)resetHashedRoute;	// IMP=0x00000000003d17cd
- (_Bool)providesHashRouteID;	// IMP=0x00000000003d17c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003d059d
- (_Bool)supportsDiagnosticsTransfer;	// IMP=0x00000000003d0595
@property(readonly, nonatomic) _Bool supportsMediaActions;
@property(readonly, nonatomic) _Bool supportsAnnounce;
@property(readonly, nonatomic) _Bool supportsJustSiri;
@property(readonly, nonatomic) _Bool supportsDropIn;
@property(readonly, nonatomic) _Bool supportsAudioAnalysis;
@property(readonly, nonatomic) _Bool supportsThirdPartyMusic;
@property(readonly, nonatomic) _Bool supportsMusicAlarm;
- (_Bool)_shouldFilterAccessoryProfileForEntitledClients:(id)arg1;	// IMP=0x00000000003d0555
- (_Bool)_shouldFilterAccessoryProfileForUnentitledClients:(id)arg1;	// IMP=0x00000000003d054d
@property(readonly, nonatomic) _Bool supportsCompanionInitiatedObliterate;
@property(readonly, nonatomic) _Bool supportsCompanionInitiatedRestart;
@property(readonly, nonatomic) _Bool supportsAudioReturnChannel;
@property(readonly, nonatomic) _Bool supportsMultiUser;
@property(readonly, nonatomic) _Bool supportsTargetControl;
@property(readonly, nonatomic) _Bool supportsTargetController;
- (void)autoConfigureTargetControllers;	// IMP=0x00000000003d0517
- (void)handleIdentifyAccessoryMessage:(id)arg1;	// IMP=0x00000000003d04a5
@property(readonly) _Bool supportsIdentify;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003cf4fd
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

- (id)messageDestination;	// IMP=0x00000000003cf482
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000003cf390
- (id)dumpNetworkState;	// IMP=0x00000000003cf207
- (id)dumpSimpleState;	// IMP=0x00000000003ceffe
- (id)dumpState;	// IMP=0x00000000003ce190
- (void)didUpdateCurrentNetworkProtection;	// IMP=0x00000000003ce18a
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000003cdf7a
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000003cdb1c
@property(readonly) _Bool supportsUserManagement;
- (void)__handleAuditPairings:(id)arg1;	// IMP=0x00000000003cd5e1
- (void)__handleListPairings:(id)arg1;	// IMP=0x00000000003cd402
- (_Bool)shouldEnableDaemonRelaunch;	// IMP=0x00000000003cd3fa
- (void)didEncounterError:(id)arg1;	// IMP=0x00000000003cd09e
- (void)__handleUpdatePendingConfigurationIdentifierMessage:(id)arg1;	// IMP=0x00000000003ccd31
@property(copy, nonatomic) NSString *pendingConfigurationIdentifier; // @synthesize pendingConfigurationIdentifier=_pendingConfigurationIdentifier;
@property(retain, nonatomic) NSUUID *configuredNetworkProtectionGroupUUID; // @synthesize configuredNetworkProtectionGroupUUID=_configuredNetworkProtectionGroupUUID;
@property(readonly, nonatomic) NSUUID *defaultNetworkProtectionGroupUUID; // @synthesize defaultNetworkProtectionGroupUUID=_defaultNetworkProtectionGroupUUID;
- (id)networkProtectionGroupUUID;	// IMP=0x00000000003cca91
- (void)saveNetworkAccessViolation:(id)arg1;	// IMP=0x00000000003cc9d9
- (void)_handleWiFiReconfiguration:(id)arg1;	// IMP=0x00000000003cc6fb
- (void)saveWiFiUniquePreSharedKey:(id)arg1 credentialType:(long long)arg2;	// IMP=0x00000000003cc643
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey; // @synthesize wiFiUniquePreSharedKey=_wiFiUniquePreSharedKey;
- (void)setWifiCredentialType:(long long)arg1;	// IMP=0x00000000003cc568
- (_Bool)supportsWiFiReconfiguration;	// IMP=0x00000000003cc527
- (void)saveCurrentNetworkProtectionMode:(long long)arg1 assignedLAN:(long long)arg2 allowedWANHosts:(id)arg3 profileFingerprint:(id)arg4;	// IMP=0x00000000003cc431
@property(retain, nonatomic) NSUUID *networkClientProfileFingerprint; // @synthesize networkClientProfileFingerprint=_networkClientProfileFingerprint;
@property(nonatomic) long long networkClientLAN; // @synthesize networkClientLAN=_networkClientLAN;
@property(nonatomic) long long currentNetworkProtectionMode; // @synthesize currentNetworkProtectionMode=_currentNetworkProtectionMode;
- (long long)targetNetworkProtectionMode;	// IMP=0x00000000003cc208
- (void)saveNetworkClientIdentifier:(id)arg1 networkRouterUUID:(id)arg2 clearProfileFingerprint:(_Bool)arg3;	// IMP=0x00000000003cc120
@property(retain, nonatomic) NSUUID *networkRouterUUID; // @synthesize networkRouterUUID=_networkRouterUUID;
@property(retain, nonatomic) NSNumber *networkClientIdentifier; // @synthesize networkClientIdentifier=_networkClientIdentifier;
- (_Bool)needsAirplayAccess;	// IMP=0x00000000003cbfe4
- (_Bool)supportsNetworkProtection;	// IMP=0x00000000003cbfdc
@property(retain, nonatomic) HMFVersion *primaryProfileVersion; // @synthesize primaryProfileVersion=_primaryProfileVersion;
- (void)setAccessoryProfiles:(id)arg1;	// IMP=0x00000000003cbe94
- (void)removeAccessoryProfile:(id)arg1;	// IMP=0x00000000003cbe19
- (void)handleAddedSiriEndpointProfile:(id)arg1;	// IMP=0x00000000003cbd16
- (void)handleAddedMediaProfile:(id)arg1;	// IMP=0x00000000003cbc13
- (void)handleAddedAccessoryProfile:(id)arg1;	// IMP=0x00000000003cbb2b
- (void)addAccessoryProfile:(id)arg1;	// IMP=0x00000000003cba38
@property(readonly, copy) NSArray *accessoryProfiles;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000003cb94c
- (void)appDataUpdated:(id)arg1 message:(id)arg2;	// IMP=0x00000000003cb6d6
- (void)__handleSetAppData:(id)arg1;	// IMP=0x00000000003cb1a1
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
- (void)_configNumberUpdated;	// IMP=0x00000000003cb0d2
@property(nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
- (id)runtimeState;	// IMP=0x00000000003cada7
- (void)_remoteAccessEnabled:(_Bool)arg1;	// IMP=0x00000000003cabc2
- (void)remoteAccessEnabled:(_Bool)arg1;	// IMP=0x00000000003cab48
- (void)_notifyConnectivityChangedWithRemoteAccessChanged:(_Bool)arg1;	// IMP=0x00000000003ca9f6
- (id)messageSendPolicy;	// IMP=0x00000000003ca9c3
@property(nonatomic, getter=hasActiveSession) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) long long reachableTransports;
- (_Bool)isReachableForXPCClients;	// IMP=0x00000000003ca83a
@property(nonatomic, getter=isLowBattery) _Bool lowBattery; // @synthesize lowBattery=_lowBattery;
@property(retain, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property(nonatomic, getter=isRemotelyReachable) _Bool remotelyReachable; // @synthesize remotelyReachable=_remotelyReachable;
- (_Bool)_getLastKnownLowBatteryStatus;	// IMP=0x00000000003ca3e5
- (void)saveLastSeenToLocalStore;	// IMP=0x00000000003ca275
- (void)_checkForLastSeenUpdateOnBecomingUnreachable;	// IMP=0x00000000003c9efa
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(copy, nonatomic) NSDate *timeBecameReachable; // @synthesize timeBecameReachable=_timeBecameReachable;
@property(copy, nonatomic) NSDate *timeBecameUnreachable; // @synthesize timeBecameUnreachable=_timeBecameUnreachable;
- (void)setreachabilityPingNotificationEnabled:(_Bool)arg1;	// IMP=0x00000000003c9987
@property(nonatomic) _Bool reachabilityPingEnabled; // @synthesize reachabilityPingEnabled=_reachabilityPingEnabled;
- (void)setSuspendedCapable:(_Bool)arg1;	// IMP=0x00000000003c9845
@property(readonly, nonatomic) _Bool supportsHomeLevelLocationServiceSetting;
@property(readonly, nonatomic) _Bool supportsPersonalRequests;
@property(readonly, nonatomic) _Bool supportsMediaContentProfile;
@property(readonly) _Bool requiresHomeAppForManagement;
- (void)removeAdvertisement:(id)arg1;	// IMP=0x00000000003c97e8
- (void)addAdvertisement:(id)arg1;	// IMP=0x00000000003c97e2
@property(retain, nonatomic) HMDUserManagementOperationTimestamp *pairingsAuditedTimestamp; // @synthesize pairingsAuditedTimestamp=_pairingsAuditedTimestamp;
@property(retain, nonatomic) HMDUserManagementOperationTimestamp *sharedAdminAddedTimestamp; // @synthesize sharedAdminAddedTimestamp=_sharedAdminAddedTimestamp;
- (void)notifyAccessoryNameChanged:(_Bool)arg1;	// IMP=0x00000000003c92b9
- (void)updateMediaSession:(id)arg1;	// IMP=0x00000000003c9201
@property(readonly, copy, nonatomic) HMDVendorModelEntry *vendorInfo;
@property(readonly, nonatomic) NSString *productGroup;
- (void)setProductData:(id)arg1;	// IMP=0x00000000003c8d9a
@property(readonly, nonatomic) NSString *productData; // @synthesize productData=_productData;
- (void)setSerialNumber:(id)arg1;	// IMP=0x00000000003c8cd1
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)setDisplayableFirmwareVersion:(id)arg1;	// IMP=0x00000000003c8afb
@property(readonly, copy, nonatomic) NSString *displayableFirmwareVersion; // @synthesize displayableFirmwareVersion=_displayableFirmwareVersion;
@property(copy, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
- (void)setInitialManufacturer:(id)arg1;	// IMP=0x00000000003c8884
@property(readonly, copy, nonatomic) NSString *initialManufacturer; // @synthesize initialManufacturer=_initialManufacturer;
- (void)setManufacturer:(id)arg1;	// IMP=0x00000000003c87bb
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void)setInitialModel:(id)arg1;	// IMP=0x00000000003c86f2
@property(readonly, copy, nonatomic) NSString *initialModel; // @synthesize initialModel=_initialModel;
- (void)setModel:(id)arg1;	// IMP=0x00000000003c8629
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void)__handleRename:(id)arg1;	// IMP=0x00000000003c8222
- (void)_renameAccessory:(id)arg1 resetName:(_Bool)arg2 message:(id)arg3;	// IMP=0x00000000003c8024
@property(copy, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
- (id)getConfiguredName;	// IMP=0x00000000003c7e82
- (void)_handleUpdatedName:(id)arg1;	// IMP=0x00000000003c7da4
@property(readonly, copy, nonatomic) NSString *name;
- (void)__handleGetAccessoryAdvertisingParams:(id)arg1;	// IMP=0x00000000003c7c41
- (void)setInitialCategoryIdentifier:(id)arg1;	// IMP=0x00000000003c7bed
@property(readonly, nonatomic) NSNumber *initialCategoryIdentifier; // @synthesize initialCategoryIdentifier=_initialCategoryIdentifier;
- (id)_updateCategory:(id)arg1 notifyClients:(_Bool)arg2;	// IMP=0x00000000003c784e
- (void)updateCategory:(id)arg1;	// IMP=0x00000000003c75c8
- (_Bool)_updateRoom:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x00000000003c6fc5
- (void)__handleUpdateRoom:(id)arg1;	// IMP=0x00000000003c68e7
- (id)modelWithUpdatedRoom:(id)arg1;	// IMP=0x00000000003c671f
- (void)updateRoom:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x00000000003c6667
@property(retain, nonatomic) HMDRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) _Bool hasBattery;
@property(readonly, copy) NSUUID *endpointIdentifier;
@property(readonly, copy) NSUUID *spiClientIdentifier;
@property(nonatomic) _Bool resetOnBackoffExpiry; // @synthesize resetOnBackoffExpiry=_resetOnBackoffExpiry;
- (void)setConsecutivePairingFailure:(unsigned long long)arg1;	// IMP=0x00000000003c6468
- (unsigned long long)consecutivePairingFailure;	// IMP=0x00000000003c642f
@property(nonatomic) double lastPairingFailureTime; // @synthesize lastPairingFailureTime=_lastPairingFailureTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)removeCloudData;	// IMP=0x00000000003c61a4
- (void)unconfigure;	// IMP=0x00000000003c605a
@property(readonly) _Bool hasSiriEndpointProfile;
@property(readonly) _Bool hasMediaProfile;
- (_Bool)isFirstPartyAccessory;	// IMP=0x00000000003c5f82
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x00000000003c5e45
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;	// IMP=0x00000000003c5cf2
- (void)__handleIdentify:(id)arg1;	// IMP=0x00000000003c59a0
- (void)handleAccessoryUpdateShouldProcessTransactionRemovalValueRequestMessage:(id)arg1;	// IMP=0x00000000003c56fa
- (void)_handleLinkQualityRequestMessage:(id)arg1;	// IMP=0x00000000003c5302
- (void)sendLastSeenStatusResponseMessage:(id)arg1;	// IMP=0x00000000003c4e6c
- (void)_handleLastSeenStatusRequestMessage:(id)arg1;	// IMP=0x00000000003c4bb4
- (void)_registerForMessages;	// IMP=0x00000000003c3e12
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000003c3c45
- (void)populateModelObject:(id)arg1 version:(long long)arg2;	// IMP=0x00000000003c2f9a
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x00000000003c2edf
- (id)shortDescription;	// IMP=0x00000000003c2cae
- (unsigned long long)supportedTransports;	// IMP=0x00000000003c2bc6
@property(readonly, getter=isCurrentAccessory) _Bool currentAccessory;
- (id)attributeDescriptions;	// IMP=0x00000000003c259e
- (id)privateDescription;	// IMP=0x00000000003c24dc
- (void)dealloc;	// IMP=0x00000000003c2416
- (void)sendRemovalRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003c22aa
- (void)sendRemovalRequest;	// IMP=0x00000000003c2296
- (void)runTransactionWithPreferredMediaUserUUID:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003c2290
- (void)setDefaultPreferredMediaUserIfRemoved:(id)arg1 defaultUser:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003c1f7e
- (void)setPreferredMediaUser:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003c1e86
- (void)encodePreferredMediaUser:(id)arg1;	// IMP=0x00000000003c1da8
- (void)decodePreferredMediaUser:(id)arg1;	// IMP=0x00000000003c1cd0
- (void)transactionAccessoryUpdatedForPreferredMediaUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003c18f5
- (void)runTransactionWithModels:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003c1676
- (void)runTransactionWithModel:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003c15a4
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x00000000003c09c3
- (id)initWithNotificationCenter:(id)arg1;	// IMP=0x00000000003c074f
- (id)init;	// IMP=0x00000000003c06f5
- (id)accessoryBulletinContext;	// IMP=0x0000000000050c8a
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (void)_handlePreviewAllowedHosts:(id)arg1;	// IMP=0x000000000027c02d
- (id)metricLoggingTransportDetails;	// IMP=0x000000000051c9bf
- (void)populateVendorDetailsForCoreAnalytics:(id)arg1 keyPrefix:(id)arg2;	// IMP=0x000000000051c6e3
- (id)metricLoggingVendorDetails;	// IMP=0x000000000051c6ad
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;
@property(readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *metadataIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

