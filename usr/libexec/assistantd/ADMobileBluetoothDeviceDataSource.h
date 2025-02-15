//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothWirelessSplitterSessionProxy, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADMobileBluetoothDeviceDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct BTSessionImpl *_session;	// 16 = 0x10
    struct BTLocalDeviceImpl *_localDevice;	// 24 = 0x18
    struct BTAccessoryManagerImpl *_accessoryManager;	// 32 = 0x20
    _Bool _attachingToSession;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_sessionSetupGroup;	// 48 = 0x30
    struct os_unfair_lock_s _deviceProxiesLock;	// 56 = 0x38
    NSMutableDictionary *_deviceProxiesByAddress;	// 64 = 0x40
    NSMutableDictionary *_deviceProxiesByDeviceUID;	// 72 = 0x48
    struct os_unfair_lock_s _wirelessSplitterSessionProxyLock;	// 80 = 0x50
    ADMobileBluetoothWirelessSplitterSessionProxy *_wirelessSplitterSessionProxy;	// 88 = 0x58
    NSArray *_connectedDeviceAddresses;	// 96 = 0x60
    NSArray *_pairedDeviceAddresses;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000001229a8
- (id)_pairedDeviceProxies;	// IMP=0x0010000000122777
- (id)_fetchPairedDeviceAddresses;	// IMP=0x0010000000122421
- (void)_resetPairedDeviceAddresses;	// IMP=0x0010000000122374
- (id)_connectedDeviceProxies;	// IMP=0x0010000000122143
- (id)_fetchConnectedDeviceAddresses;	// IMP=0x0010000000121ded
- (void)_resetConnectedDeviceAddresses;	// IMP=0x0010000000121d4f
- (id)_deviceProxyWithUID:(id)arg1 createsIfAbsent:(_Bool)arg2;	// IMP=0x0010000000121ca7
- (id)_deviceProxyWithAddress:(id)arg1 createsIfAbsent:(_Bool)arg2;	// IMP=0x0010000000121bed
- (id)wirelessSplitterSession;	// IMP=0x0010000000121aef
- (void)getPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000121a58
- (void)getConnectedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001219c1
- (id)deviceWithUID:(id)arg1;	// IMP=0x0010000000121956
- (id)deviceWithAddress:(id)arg1;	// IMP=0x00100000001218eb
- (void)getBTLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000012184c
- (void)getBTDeviceWithDeviceUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000121789
- (void)getBTDeviceWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001216c6
- (id)_deviceProxies;	// IMP=0x00100000001215e5
- (void)_handleListeningModeChangedForBTDevice:(struct BTDeviceImpl *)arg1 fromAccessoryManager:(struct BTAccessoryManagerImpl *)arg2;	// IMP=0x001000000012135b
- (void)_handleInEarStatusChangedForBTDevice:(struct BTDeviceImpl *)arg1 fromAccessoryManager:(struct BTAccessoryManagerImpl *)arg2;	// IMP=0x001000000012109e
- (void)_reloadForDevice:(struct BTDeviceImpl *)arg1;	// IMP=0x0010000000120ec6
- (void)accessoryManager:(struct BTAccessoryManagerImpl *)arg1 event:(int)arg2 device:(struct BTDeviceImpl *)arg3 state:(int)arg4;	// IMP=0x0010000000120da8
- (void)_tearDownAccessoryManager;	// IMP=0x0010000000120d7b
- (void)_setUpAccessoryManager;	// IMP=0x0010000000120bb4
- (void)localDevice:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x0010000000120aaf
- (void)_tearDownLocalDevice;	// IMP=0x0010000000120a82
- (void)_setUpLocalDevice;	// IMP=0x00100000001208bb
- (void)device:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;	// IMP=0x001000000012086c
- (void)_sessionTerminated:(struct BTSessionImpl *)arg1;	// IMP=0x001000000012077a
- (void)_sessionDetached:(struct BTSessionImpl *)arg1;	// IMP=0x001000000012067e
- (void)_sessionAttached:(struct BTSessionImpl *)arg1 result:(int)arg2;	// IMP=0x0010000000120457
- (void)_attachToSession;	// IMP=0x00100000001202d9
- (void)_detachFromSession;	// IMP=0x00100000001201f9
- (void)_cleanUpWirelessSplitterProxy;	// IMP=0x0010000000120110
- (void)_cleanUpDeviceProxies;	// IMP=0x001000000011fe3c
- (void)invalidate;	// IMP=0x001000000011fdf1
- (id)init;	// IMP=0x001000000011fbf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

