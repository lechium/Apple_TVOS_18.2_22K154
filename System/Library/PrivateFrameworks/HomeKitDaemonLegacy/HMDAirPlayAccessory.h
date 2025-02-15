//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFExponentialBackoffTimer, HMFPairingIdentity, NSString;

__attribute__((visibility("hidden")))
@interface HMDAirPlayAccessory
{
    HMFPairingIdentity *_pairingIdentity;	// 32 = 0x20
    NSString *_password;	// 40 = 0x28
    long long _minimumUserPriviledge;	// 48 = 0x30
    HMFExponentialBackoffTimer *_configurationRetryTimer;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000062b6d2
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000062b6ca
+ (void)initialize;	// IMP=0x001000000062b65e
- (void).cxx_destruct;	// IMP=0x00000000006277c3
@property(readonly, nonatomic) HMFExponentialBackoffTimer *configurationRetryTimer; // @synthesize configurationRetryTimer=_configurationRetryTimer;
- (id)logIdentifier;	// IMP=0x0000000000627762
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006275cd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006274b0
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000062743f
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x000000000062742a
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000626e3f
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006269f5
- (void)removeUserPairingIdentity:(id)arg1 isOwner:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000626602
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006263ae
- (void)addUserPairingIdentity:(id)arg1 isOwner:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000625df5
- (void)addUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000625a9a
@property(readonly) _Bool supportsUserManagement;
- (void)disassociatePairingIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006256f8
- (void)disassociateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000062568f
@property(readonly) _Bool supportsDisassociation;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x00000000006255cc
- (void)populateModelObject:(id)arg1 version:(long long)arg2;	// IMP=0x0000000000625494
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x000000000062533f
- (void)setMinimumUserPriviledge:(long long)arg1;	// IMP=0x00000000006252fe
@property(readonly) long long minimumUserPriviledge; // @synthesize minimumUserPriviledge=_minimumUserPriviledge;
- (void)setPassword:(id)arg1;	// IMP=0x0000000000625242
@property(readonly, copy) NSString *password; // @synthesize password=_password;
- (void)setPairingIdentity:(id)arg1;	// IMP=0x0000000000625179
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)handleUpdatedPassword:(id)arg1;	// IMP=0x0000000000625028
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;	// IMP=0x0000000000624f76
- (_Bool)supportsMinimumUserPrivilege;	// IMP=0x0000000000624f6e
- (id)messageSendPolicy;	// IMP=0x0000000000624f3b
- (void)setReachable:(_Bool)arg1;	// IMP=0x0000000000624df1
- (void)_handleUpdatedName:(id)arg1;	// IMP=0x0000000000624af5
- (void)handleUpdatedAdvertisement:(id)arg1;	// IMP=0x0000000000624009
- (void)setAdvertisement:(id)arg1;	// IMP=0x0000000000623ed3
- (id)advertisement;	// IMP=0x0000000000623da6
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x0000000000623c32
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x0000000000623a22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

