//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAccount, IDSAccountController, IDSDevice, IDSIDQueryController, IDSService, NSArray, NSSet, NSString;
@protocol IDSServicePseudonymDelegate, OS_dispatch_queue, TUFeatureFlags;

@interface CSDIDSService : NSObject
{
    _Bool _telephonyCapableDeviceExists;	// 8 = 0x8
    _Bool _relayCapableDeviceExists;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    IDSAccountController *_accountController;	// 32 = 0x20
    IDSService *_idsService;	// 40 = 0x28
    IDSIDQueryController *_idsQueryController;	// 48 = 0x30
    id <IDSServicePseudonymDelegate> _delegate;	// 56 = 0x38
    NSArray *_devices;	// 64 = 0x40
    IDSDevice *_pairedDevice;	// 72 = 0x48
    IDSDevice *_defaultPairedDevice;	// 80 = 0x50
    NSSet *_availableOutgoingRelayCallerIDs;	// 88 = 0x58
    id <TUFeatureFlags> _featureFlags;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x00200000001df6a6
- (void).cxx_destruct;	// IMP=0x00200000001e3eb1
@property(retain, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) NSSet *availableOutgoingRelayCallerIDs; // @synthesize availableOutgoingRelayCallerIDs=_availableOutgoingRelayCallerIDs;
@property(retain, nonatomic) IDSDevice *defaultPairedDevice; // @synthesize defaultPairedDevice=_defaultPairedDevice;
@property(retain, nonatomic) IDSDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(nonatomic) _Bool relayCapableDeviceExists; // @synthesize relayCapableDeviceExists=_relayCapableDeviceExists;
@property(nonatomic) _Bool telephonyCapableDeviceExists; // @synthesize telephonyCapableDeviceExists=_telephonyCapableDeviceExists;
@property(retain, nonatomic) id <IDSServicePseudonymDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSIDQueryController *idsQueryController; // @synthesize idsQueryController=_idsQueryController;
@property(readonly, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(readonly, nonatomic) IDSAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_handlePairedDeviceChangedFrom:(id)arg1 to:(id)arg2;	// IMP=0x00100000001e3ddc
- (void)_update;	// IMP=0x00100000001e37d6
- (void)update;	// IMP=0x00100000001e374f
@property(readonly, nonatomic) unsigned long long registrationRestrictionReason;
- (void)service:(id)arg1 didUpdatePseudonymsWithChanges:(id)arg2;	// IMP=0x00100000001e3442
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000001e33a4
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00100000001e3306
- (void)handleActiveAccountsChanged:(id)arg1;	// IMP=0x00100000001e322a
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000001e3215
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;	// IMP=0x00100000001e31fd
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;	// IMP=0x00100000001e31e5
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;	// IMP=0x00100000001e317a
- (void)accountController:(id)arg1 accountAdded:(id)arg2;	// IMP=0x00100000001e310f
- (void)_noteAction:(long long)arg1 onHandle:(id)arg2 completionHandle:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e2f6d
- (void)noteDismissedHandle:(id)arg1 completionHandle:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2f50
- (void)noteApprovedHandle:(id)arg1 completionHandle:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2f33
- (id)pseudonymForPseudonymString:(id)arg1;	// IMP=0x00100000001e2e8b
- (_Bool)checkValidityForSelfPseudonymString:(id)arg1;	// IMP=0x00100000001e2e3a
- (void)checkValidityForPseudonymString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2ca9
- (void)renewPseudonym:(id)arg1 expirationDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e2a9d
- (void)renewPseudonymString:(id)arg1 expirationDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e2971
- (void)revokePseudonym:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2873
- (void)revokePseudonymString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e26fc
- (void)provisionPseudonymForHandle:(id)arg1 featureID:(id)arg2 scopeID:(id)arg3 expiryDuration:(double)arg4 allowedServices:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000001e2373
@property(readonly, nonatomic) NSString *localDeviceUniqueID;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) _Bool pairedDeviceExists;
@property(readonly, nonatomic) _Bool defaultPairedDeviceExists;
- (id)deviceDestinationsWithCapability:(id)arg1 localHandle:(id)arg2;	// IMP=0x00100000001e14e5
- (id)devicesWithCapability:(id)arg1;	// IMP=0x00100000001e12b2
- (id)deviceForFromID:(id)arg1;	// IMP=0x00100000001e1238
- (id)deviceWithUniqueID:(id)arg1;	// IMP=0x00100000001e103d
- (_Bool)isServiceEnabledForTelephonySubscriptionLabelIdentifier:(id)arg1;	// IMP=0x00100000001e0ecc
- (id)accountForTelephonySubscriptionLabelIdentifier:(id)arg1;	// IMP=0x00100000001e0e52
- (id)createGroupSessionProviderWithGroupID:(id)arg1 participantDestinationIDs:(id)arg2 callerID:(id)arg3 account:(id)arg4 queue:(id)arg5 isOneToOneModeEnabled:(_Bool)arg6 localMember:(id)arg7 avLess:(_Bool)arg8 isScreenSharingRequest:(_Bool)arg9 ABTestConfiguration:(id)arg10 isInitiator:(_Bool)arg11;	// IMP=0x00100000001e0cf0
@property(readonly, copy, nonatomic) NSSet *aliases;
- (_Bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00100000001e0a19
- (void)removeServiceDelegate:(id)arg1;	// IMP=0x00100000001e09b0
- (void)addServiceDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000001e0925
@property(readonly, nonatomic) IDSService *service;
- (id)idsDeviceID;	// IMP=0x00100000001e0899
@property(readonly, nonatomic) IDSAccount *account;
- (id)accountWithCallerID:(id)arg1;	// IMP=0x00100000001e025a
@property(readonly, nonatomic) _Bool hasActiveAccounts;
- (id)anyActiveAccount;	// IMP=0x00100000001e0045
@property(readonly, copy, nonatomic) NSArray *allAliases;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)dealloc;	// IMP=0x00100000001dfc49
@property(readonly, copy, nonatomic) NSString *callerID;
- (id)initWithName:(id)arg1 service:(id)arg2 queryController:(id)arg3;	// IMP=0x00100000001df832
- (id)initWithName:(id)arg1 service:(id)arg2;	// IMP=0x00100000001df79b
- (id)initWithName:(id)arg1;	// IMP=0x00100000001df723

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

