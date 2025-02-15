//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBPeripheralManager, CUCoalescer, CUSystemMonitor, NSArray, NSMutableArray, NSString, NSUUID, RPIdentity, UMUserPersonaContext;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPIdentityDaemon : NSObject
{
    int _homeViewChangeToken;	// 8 = 0x8
    int _homeViewReadyToken;	// 12 = 0xc
    CUCoalescer *_identitiesChangedCoalescer;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    UMUserPersonaContext *_initialUserPersonaContext;	// 32 = 0x20
    unsigned long long _keychainRefetchTicks;	// 40 = 0x28
    NSArray *_pairedDeviceIdentities;	// 48 = 0x30
    int _pairedDevicesNotifier;	// 56 = 0x38
    _Bool _prefFamilyResolve;	// 60 = 0x3c
    _Bool _prefFriendResolve;	// 61 = 0x3d
    _Bool _prefOwnerResolve;	// 62 = 0x3e
    _Bool _prefPairedResolve;	// 63 = 0x3f
    _Bool _prefSharedHomeResolve;	// 64 = 0x40
    NSArray *_sameAccountDeviceIdentities;	// 72 = 0x48
    RPIdentity *_selfIdentityCache;	// 80 = 0x50
    RPIdentity *_temporarySelfIdentityCache;	// 88 = 0x58
    NSMutableArray *_sharedHomeDeviceIdentities;	// 96 = 0x60
    NSMutableArray *_sharedHomeExtraDeviceIdentities;	// 104 = 0x68
    NSArray *_sharedTVUserDeviceIdentities;	// 112 = 0x70
    CUSystemMonitor *_systemMonitor;	// 120 = 0x78
    NSMutableArray *_sessionPairedDeviceIdentities;	// 128 = 0x80
    NSMutableArray *_adHocPairedDeviceIdentities;	// 136 = 0x88
    _Bool _userIdentitiesChanged;	// 144 = 0x90
    CBPeripheralManager *_peripheralManager;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_temporarySelfIdentityTimer;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 168 = 0xa8
    RPIdentity *_homeKitIdentity;	// 176 = 0xb0
    NSUUID *_sessionPairingIdentifier;	// 184 = 0xb8
    NSUUID *_adHocPairingIdentifier;	// 192 = 0xc0
}

+ (id)sharedIdentityDaemon;	// IMP=0x0020000000068930
- (void).cxx_destruct;	// IMP=0x00200000000785b1
@property(readonly, nonatomic) NSUUID *adHocPairingIdentifier; // @synthesize adHocPairingIdentifier=_adHocPairingIdentifier;
@property(readonly, nonatomic) NSUUID *sessionPairingIdentifier; // @synthesize sessionPairingIdentifier=_sessionPairingIdentifier;
@property(retain, nonatomic) RPIdentity *homeKitIdentity; // @synthesize homeKitIdentity=_homeKitIdentity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_enumerateIdentitiesWithFlag:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000077c24
- (void)updateSharedTVIdentities;	// IMP=0x0010000000077b56
- (void)_loadSharedTVUserDeviceIdentities;	// IMP=0x00100000000768ef
- (_Bool)_shouldLoadSharedTVUserDeviceIdentities;	// IMP=0x00100000000768d1
- (unsigned int)_updateSelfIdentityPublic:(id)arg1 privateIdentity:(id)arg2;	// IMP=0x0010000000075fde
- (unsigned int)_updateSelfIdentityPrivate:(id)arg1 create:(_Bool)arg2;	// IMP=0x0010000000075862
- (_Bool)_stationaryDevice;	// IMP=0x0010000000075851
- (void)_loadTemporarySelfIdentity;	// IMP=0x0010000000075840
- (void)_removeSelfIdentityPublicWithPrivateIdentity:(id)arg1;	// IMP=0x00100000000755f2
- (void)_saveSelfIdentityPublicWithPrivateIdentity:(id)arg1 force:(_Bool)arg2;	// IMP=0x0010000000074f32
- (void)_saveSelfIdentityPrivate:(id)arg1;	// IMP=0x0010000000074cb7
- (void)_loadSelfIdentity:(_Bool)arg1;	// IMP=0x001000000007482e
- (_Bool)_removeSameAccountIdentityWithIDSIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000074402
- (void)_updateSameAccountIdentities;	// IMP=0x0010000000073af5
- (void)_updatePairedDeviceIdentities;	// IMP=0x001000000007362c
- (void)_triggerKeychainRefetch;	// IMP=0x0010000000073420
- (void)_postIdentitiesChangedNotification;	// IMP=0x0010000000073321
- (void)_ensureStopped;	// IMP=0x001000000007315f
- (void)_ensureStarted;	// IMP=0x0010000000072ce1
- (void)addOrUpdateAdHocPairedIdentity:(id)arg1;	// IMP=0x001000000007285e
- (void)updateSessionPairedIdentity:(id)arg1;	// IMP=0x0010000000072396
- (void)removeSessionPairedIdentityWithIdentifier:(id)arg1;	// IMP=0x0010000000072086
- (void)addSessionPairedIdentity:(id)arg1;	// IMP=0x0010000000071ce5
- (_Bool)saveIdentityWithIDSDeviceID:(id)arg1 message:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000071951
- (_Bool)saveIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000715c5
- (_Bool)removeIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000071286
- (void)addSharedHomeIdentityWithRPMessage:(id)arg1;	// IMP=0x0010000000070c95
- (void)addSelfIdentityInfoToMessage:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x001000000007087a
- (void)getPairingIdentityFromHomeWithAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007079c
- (void)getPairedIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000704d9
- (id)loadFriendDeviceIdentitiesWithError:(id *)arg1;	// IMP=0x00100000000704bf
- (id)loadFamilyDeviceIdentitiesWithError:(id *)arg1;	// IMP=0x00100000000704a5
- (void)regenerateTemporarySelfIdentity;	// IMP=0x00100000000703ef
- (unsigned long long)featureFlagsForIdentityMatchingIDSDeviceIdentifier:(id)arg1;	// IMP=0x001000000007012c
- (id)identityOfTemporarySelfAndReturnError:(id *)arg1;	// IMP=0x00100000000700b6
- (id)identityOfSelfAndReturnError:(id *)arg1;	// IMP=0x001000000006ff7d
- (id)getIdentitiesFromKeychain:(int)arg1 outError:(id *)arg2;	// IMP=0x001000000006ff6b
- (id)_identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x001000000006f344
- (id)identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x001000000006f1cd
- (void)isContactValidForIdentity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000006e769
- (unsigned long long)resolveIdentityforSignature:(id)arg1 data:(id)arg2 flags:(unsigned int)arg3 accountaltDSID:(id)arg4;	// IMP=0x001000000006e45b
- (id)resolveIdentityForNearFieldMessagePayload:(id)arg1;	// IMP=0x001000000006e0e2
- (id)resolveIdentityForTempAuthTagData:(id)arg1 bluetoothAddressData:(id)arg2;	// IMP=0x001000000006df27
- (unsigned int)resolveIdentityTypesForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3;	// IMP=0x001000000006d816
- (id)resolveIdentityForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x001000000006cc35
- (id)resolveIdentityForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x001000000006b906
- (id)resolveIdentitiesForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x001000000006b83e
- (void)resolvableAccessoriesUpdated:(id)arg1;	// IMP=0x001000000006ae46
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x001000000006ae04
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006adfc
- (void)_update;	// IMP=0x001000000006adea
- (void)regenerateSelfIdentity:(id)arg1;	// IMP=0x001000000006ad5b
- (void)prefsChanged;	// IMP=0x001000000006aa37
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x001000000006a59c
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x001000000006a3e4
- (void)_invalidated;	// IMP=0x001000000006a36c
- (void)_invalidate;	// IMP=0x001000000006a2a4
- (void)invalidate;	// IMP=0x001000000006a240
- (void)_activate;	// IMP=0x001000000006a0ec
- (void)activate;	// IMP=0x001000000006a088
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000068b34
- (id)init;	// IMP=0x0010000000068985

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

