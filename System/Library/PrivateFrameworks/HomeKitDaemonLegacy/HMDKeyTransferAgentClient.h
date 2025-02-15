//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFExponentialBackoffTimer, HMFNetMonitor, HMFNetServiceBrowser, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDKeyTransferAgentClient
{
    _Bool _resolutionInProgress;	// 8 = 0x8
    _Bool _haveCulledPlist;	// 9 = 0x9
    unsigned long long _residentProvisioningStatus;	// 16 = 0x10
    HMFNetServiceBrowser *_serviceBrowser;	// 24 = 0x18
    NSMutableDictionary *_idsKeys;	// 32 = 0x20
    NSMutableDictionary *_bonjourKeys;	// 40 = 0x28
    NSMutableSet *_targetsToProcess;	// 48 = 0x30
    NSString *_pairingWithUUID;	// 56 = 0x38
    HMFExponentialBackoffTimer *_atHomeRetryTimer;	// 64 = 0x40
    HMFNetMonitor *_netMonitor;	// 72 = 0x48
    long long _tfaState;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x0010000000526898
- (void).cxx_destruct;	// IMP=0x0000000000523c18
@property(nonatomic) long long tfaState; // @synthesize tfaState=_tfaState;
@property(nonatomic) _Bool haveCulledPlist; // @synthesize haveCulledPlist=_haveCulledPlist;
@property(retain, nonatomic) HMFNetMonitor *netMonitor; // @synthesize netMonitor=_netMonitor;
@property(retain, nonatomic) HMFExponentialBackoffTimer *atHomeRetryTimer; // @synthesize atHomeRetryTimer=_atHomeRetryTimer;
@property(retain, nonatomic) NSString *pairingWithUUID; // @synthesize pairingWithUUID=_pairingWithUUID;
@property(nonatomic) _Bool resolutionInProgress; // @synthesize resolutionInProgress=_resolutionInProgress;
@property(retain, nonatomic) NSMutableSet *targetsToProcess; // @synthesize targetsToProcess=_targetsToProcess;
@property(retain, nonatomic) NSMutableDictionary *bonjourKeys; // @synthesize bonjourKeys=_bonjourKeys;
@property(retain, nonatomic) NSMutableDictionary *idsKeys; // @synthesize idsKeys=_idsKeys;
@property(retain, nonatomic) HMFNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property(nonatomic) unsigned long long residentProvisioningStatus; // @synthesize residentProvisioningStatus=_residentProvisioningStatus;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;	// IMP=0x00000000005239f8
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;	// IMP=0x0000000000523979
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;	// IMP=0x000000000052377f
- (void)receivedBonjourTXTFrom:(id)arg1 withUUIDData:(id)arg2;	// IMP=0x00000000005236a1
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;	// IMP=0x00000000005233ae
- (void)_handleKeyTransferAgentMessage:(id)arg1;	// IMP=0x0000000000522afa
- (void)_restartKeyTransfer:(id)arg1;	// IMP=0x0000000000522804
- (void)__accountChanged:(id)arg1;	// IMP=0x000000000052274c
- (void)__accessoryIsReachable:(id)arg1;	// IMP=0x000000000052265e
- (void)__deviceRemovedFromAccount:(id)arg1;	// IMP=0x0000000000522570
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;	// IMP=0x0000000000522065
- (void)__deviceUpdated:(id)arg1;	// IMP=0x0000000000521f77
- (void)__deviceAddedToAccount:(id)arg1;	// IMP=0x0000000000521e89
- (void)_device:(id)arg1 addedToAccount:(id)arg2;	// IMP=0x0000000000521bab
- (_Bool)_newDeviceSeen:(id)arg1;	// IMP=0x000000000052177f
- (void)_sendATVPrivateKey:(id)arg1 withDevice:(id)arg2 retry:(unsigned long long)arg3;	// IMP=0x0000000000521088
- (void)_sendIOSPublicKey:(id)arg1 withDevice:(id)arg2;	// IMP=0x0000000000520c5d
- (void)_havePairVerifiedAccessoryWithKeyUUID:(id)arg1 forDevice:(id)arg2;	// IMP=0x00000000005209d5
- (void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg1 forTarget:(id)arg2;	// IMP=0x000000000051f997
- (void)_tryPairingWithAccessories:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000051f826
- (void)_tfaVerificationCompleteForKeyUUID:(id)arg1 forTarget:(id)arg2;	// IMP=0x000000000051f5db
- (void)_startPairingWithKeyUUID:(id)arg1 forTarget:(id)arg2;	// IMP=0x000000000051f1fe
- (void)_endPairingWithError:(id)arg1 suspendingTimer:(_Bool)arg2;	// IMP=0x000000000051ec63
- (void)_beginBonjourResolution:(_Bool)arg1;	// IMP=0x000000000051e908
- (void)_reallyBeginBonjourResolution;	// IMP=0x000000000051e839
- (void)_stopBrowser;	// IMP=0x000000000051e70e
- (void)_startBrowser;	// IMP=0x000000000051e547
- (void)resetConfig;	// IMP=0x000000000051e1f9
- (void)queryPlistDevices;	// IMP=0x000000000051deec
- (id)_deviceWithUUID:(id)arg1;	// IMP=0x000000000051da17
- (void)_saveKeyPlist;	// IMP=0x000000000051d877
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x000000000051d806
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000051d748
- (void)dealloc;	// IMP=0x000000000051d67e
- (id)initWithHomeManager:(id)arg1;	// IMP=0x000000000051ce62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

