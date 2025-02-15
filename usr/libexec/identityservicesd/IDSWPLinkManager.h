//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSWPLinkManagerDelegate, WPContinuity;

@interface IDSWPLinkManager : NSObject
{
    id <WPContinuity> _continuity;	// 8 = 0x8
    _Bool _systemIsFastUserSwitched;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSMutableSet *_advertisingTypes;	// 32 = 0x20
    NSMutableSet *_scanningTypes;	// 40 = 0x28
    NSMutableDictionary *_linkIDToLink;	// 48 = 0x30
    NSMutableDictionary *_linkIDsConnecting;	// 56 = 0x38
    NSMutableDictionary *_linkIDsDisconnecting;	// 64 = 0x40
    NSMutableSet *_linkIDsAlwaysConnected;	// 72 = 0x48
    id <IDSWPLinkManagerDelegate> _delegate;	// 80 = 0x50
    NSHashTable *_connectivityDelegates;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x0020000000196814
- (void).cxx_destruct;	// IMP=0x002000000019a8c7
- (void)sendReset;	// IMP=0x001000000019a8c1
- (unsigned long long)sendData:(id)arg1 peerID:(id)arg2;	// IMP=0x001000000019a671
- (void)removeLink:(id)arg1;	// IMP=0x001000000019a440
- (void)disconnectFromPeer:(id)arg1;	// IMP=0x001000000019a376
- (void)disconnectOnMainQueueFromPeer:(id)arg1;	// IMP=0x0010000000199e9a
- (void)connectToPeer:(id)arg1;	// IMP=0x0010000000199dd0
- (void)connectOnMainQueueToPeer:(id)arg1;	// IMP=0x0010000000199501
- (void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x00100000001994fb
- (void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x00100000001994f5
- (void)stopScanningForType:(long long)arg1;	// IMP=0x00100000001992aa
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;	// IMP=0x0010000000198e86
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;	// IMP=0x0010000000198985
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;	// IMP=0x00100000001985d8
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;	// IMP=0x0010000000198167
- (void)stopAdvertisingOfType:(long long)arg1;	// IMP=0x0010000000197f1c
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;	// IMP=0x0010000000197b93
- (void)clientInstancesRemoved;	// IMP=0x0010000000197567
- (void)clientInstanceCreatedWithMessageContext:(id)arg1;	// IMP=0x001000000019729e
- (void)setAlwaysConnectedForCBUUID:(id)arg1;	// IMP=0x0010000000197067
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x0010000000197051
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x0010000000196e25
- (_Bool)isScanningOrAdvertising;	// IMP=0x0010000000196dca
- (void)setDelegateOnMainQueue:(id)arg1;	// IMP=0x0010000000196d9f
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000196cd5
- (void)_checkWPContinuitySetup;	// IMP=0x0010000000196a73
- (id)init;	// IMP=0x0010000000196869

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

