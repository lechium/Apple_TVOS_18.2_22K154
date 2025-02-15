//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSContinuity, NSMutableDictionary, NSObject, NSString, SDStatusMonitor;
@protocol OS_dispatch_source, OS_os_transaction;

@interface SDActivityScanner
{
    unsigned long long _stateHandle;	// 8 = 0x8
    unsigned char _versionByte;	// 16 = 0x10
    SDStatusMonitor *_monitor;	// 24 = 0x18
    IDSContinuity *_continuity;	// 32 = 0x20
    unsigned long long _scanTypes;	// 40 = 0x28
    _Bool _scannerEnabled;	// 48 = 0x30
    _Bool _isScanning;	// 49 = 0x31
    NSObject<OS_os_transaction> *_scanningTransaction;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_stopScanLostDeviceTimer;	// 64 = 0x40
    NSMutableDictionary *_deviceIdentifierToDeviceRecord;	// 72 = 0x48
    NSMutableDictionary *_deviceIdentifierToLostDeviceTimers;	// 80 = 0x50
}

+ (id)sharedScanner;	// IMP=0x0020000000144318
- (void).cxx_destruct;	// IMP=0x0020000000147b06
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001478e8
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x00100000001477c3
- (void)didLosePeerTimer:(id)arg1;	// IMP=0x001000000014771c
- (void)lostAllDevices;	// IMP=0x0010000000147532
- (void)didLosePeer:(id)arg1;	// IMP=0x0010000000147246
- (void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;	// IMP=0x0010000000147161
- (void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 withError:(id)arg3;	// IMP=0x0010000000146ff2
- (void)continuity:(id)arg1 didStopScanningForType:(long long)arg2;	// IMP=0x0010000000146f04
- (void)continuity:(id)arg1 didStartScanningForType:(long long)arg2;	// IMP=0x0010000000146e30
- (void)continuityDidUpdateState:(id)arg1;	// IMP=0x0010000000146ba3
- (void)consoleUserChanged:(id)arg1;	// IMP=0x0010000000146aa4
- (void)systemHasPoweredOn:(id)arg1;	// IMP=0x00100000001469df
- (void)systemWillSleep:(id)arg1;	// IMP=0x0010000000146936
- (void)resetStateRequested:(id)arg1;	// IMP=0x0010000000146924
- (void)removeObservers;	// IMP=0x00100000001468d1
- (void)addObservers;	// IMP=0x0010000000146808
- (id)state;	// IMP=0x00100000001465de
- (struct os_state_data_s *)dumpState;	// IMP=0x0010000000146246
- (void)initializeStateCaptureBlock;	// IMP=0x00100000001461d5
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000014613c
- (void)connectionEstablished:(id)arg1;	// IMP=0x0010000000145ebb
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000145eb3
- (id)remoteObjectInterface;	// IMP=0x0010000000145d38
- (id)exportedInterface;	// IMP=0x0010000000145d18
- (id)machServiceName;	// IMP=0x0010000000145d0b
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000145cf9
- (void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000145ce7
- (void)handleNewAdvertisementDevice:(id)arg1 data:(id)arg2 receivedViaScanning:(_Bool)arg3 withSuccessHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001455ed
- (void)nearbyServiceDevicesChanged:(id)arg1;	// IMP=0x00100000001453b5
- (void)activityServiceDevicesChanged:(id)arg1;	// IMP=0x0010000000144e5d
- (void)_createOSTransactionIfNeeded;	// IMP=0x0010000000144e22
- (_Bool)restart;	// IMP=0x00100000001445b0
- (void)stop;	// IMP=0x001000000014456d
- (void)start;	// IMP=0x0010000000144550
- (_Bool)shouldBoostScan;	// IMP=0x001000000014453b
- (_Bool)shouldScanForCopyPaste;	// IMP=0x0010000000144527
- (_Bool)shouldScanForHandoff;	// IMP=0x0010000000144515
- (id)init;	// IMP=0x00100000001443b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

