//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDServiceController, IDSDaemon, IDSPairingManager, IDSQuickSwitchHelper, IDSUTunController, IDSUTunDeliveryController;
@protocol OS_dispatch_queue;

@interface IDSDXPCPairing : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSDaemon *_idsDaemon;	// 16 = 0x10
    IDSDServiceController *_serviceController;	// 24 = 0x18
    IDSQuickSwitchHelper *_quickSwitchHelper;	// 32 = 0x20
    IDSPairingManager *_pairingManager;	// 40 = 0x28
    IDSDAccountController *_accountController;	// 48 = 0x30
    IDSUTunController *_utunController;	// 56 = 0x38
    IDSUTunDeliveryController *_utunDeliveryController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000004846d7
@property(retain, nonatomic) IDSUTunDeliveryController *utunDeliveryController; // @synthesize utunDeliveryController=_utunDeliveryController;
@property(retain, nonatomic) IDSUTunController *utunController; // @synthesize utunController=_utunController;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(retain, nonatomic) IDSQuickSwitchHelper *quickSwitchHelper; // @synthesize quickSwitchHelper=_quickSwitchHelper;
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSDaemon *idsDaemon; // @synthesize idsDaemon=_idsDaemon;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_addPairedDevice:(id)arg1 withInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000483b4a
- (void)_updatePairedDevice:(id)arg1 pairingType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000483a4d
- (id)_sortedArrayFromCBUUIDSet:(id)arg1;	// IMP=0x0010000000483962
- (id)_pairedDeviceCBUUIDs;	// IMP=0x00100000004838d2
- (id)_pairingDeviceCBUUIDs;	// IMP=0x0010000000483842
- (void)dropAllMessagesWithoutAnyAllowedClassifierForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000483620
- (void)setAllowedTrafficClassifiersForDevice:(id)arg1 classifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004834e2
- (void)redeliverMessagesForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000483345
- (void)disconnectActivePairedDevice:(CDUnknownBlockType)arg1;	// IMP=0x00100000004831b7
- (void)switchActivePairedDeviceWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000048307a
- (void)forgetDeviceWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000482f3d
- (void)unpairDeviceWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000482c69
- (void)stopLocalPairingForDeviceWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000482a7b
- (void)unpairStartForDeviceWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000482963
- (void)deletePairedDeviceWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004827a2
- (void)updatePairedDeviceWithID:(id)arg1 supportIPsec:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000482437
- (void)pairedDevicesInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000048220a
- (void)getPairingRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000048213b
- (void)getPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000481ff3
- (void)getPairingDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000481eab
- (void)setupCompletedForPairedDeviceWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000481d93
- (void)connectPairedDeviceWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000481c56
- (void)updatePairedDevice:(id)arg1 pairingType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000481c44
- (void)addPairedDeviceWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000481bb6
- (void)addPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000481b9f
- (id)initWithQueue:(id)arg1 idsDaemon:(id)arg2 serviceController:(id)arg3 pairingManager:(id)arg4 quickSwitchHelper:(id)arg5 accountController:(id)arg6 utunController:(id)arg7 utunDeliveryController:(id)arg8;	// IMP=0x0010000000481a40

@end

