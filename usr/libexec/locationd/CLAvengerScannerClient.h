//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, CLAvengerReconciler, CLAvengerScannerClientController, NSString;
@protocol CLAvengerScannerClientDelegateProtocol, OS_dispatch_queue;

@interface CLAvengerScannerClient : NSObject
{
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertion;	// 8 = 0x8
    id <CLAvengerScannerClientDelegateProtocol> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CBCentralManager *_centralManager;	// 32 = 0x20
    CLAvengerScannerClientController *_controller;	// 40 = 0x28
    CLAvengerReconciler *_reconciler;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0020000001093fb1
- (void).cxx_destruct;	// IMP=0x0010000001093f7b
@property(nonatomic) CLAvengerReconciler *reconciler; // @synthesize reconciler=_reconciler;
@property(nonatomic) CLAvengerScannerClientController *controller; // @synthesize controller=_controller;
@property(nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CLAvengerScannerClientDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)releasePowerAssertion;	// IMP=0x0010000001093ece
- (void)takePowerAssertion;	// IMP=0x0010000001093de3
- (_Bool)hasPowerAssertion;	// IMP=0x0010000001093dd5
- (id)getPowerAssertionIdentifier;	// IMP=0x0010000001093d97
- (void)onNotOptedInBOMScanEnded;	// IMP=0x0010000001093d37
- (void)onUpdatedPowerState;	// IMP=0x0010000001093cd7
- (void)onAdvertisementBufferEmptied;	// IMP=0x0010000001093c77
- (void)onAggressiveScanEnded;	// IMP=0x0010000001093c17
- (void)onAggressiveScanStarted;	// IMP=0x0010000001093bb7
- (id)clientIdentifier;	// IMP=0x0010000001093b8c
- (void)onAvengerAdvertisement:(id)arg1 reconciledInformation:(id)arg2;	// IMP=0x0010000001093b4c
- (void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2;	// IMP=0x0010000001093b0c
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0010000001093adb
- (void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2;	// IMP=0x0010000001093a9b
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x0010000001093a37
- (_Bool)performNotOptedInBOMScan;	// IMP=0x0010000001093a0c
- (_Bool)poweredOn;	// IMP=0x00100000010939e1
- (void)setOptedIn:(_Bool)arg1;	// IMP=0x00100000010939b2
- (_Bool)getOptedIn;	// IMP=0x0010000001093987
- (_Bool)isScanning;	// IMP=0x001000000109395c
- (_Bool)stopBTFindingScan;	// IMP=0x0010000001093931
- (_Bool)startBTFindingScan;	// IMP=0x0010000001093906
- (_Bool)performTemporaryHawkeyeLowEnergyScan;	// IMP=0x00100000010938db
- (_Bool)stopTemporaryLongAggressiveScan;	// IMP=0x00100000010938b0
- (_Bool)performTemporaryLongAggressiveScan;	// IMP=0x0010000001093885
- (_Bool)performTemporaryAggressiveScan;	// IMP=0x001000000109385a
- (void)dealloc;	// IMP=0x00100000010937f6
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 optedIn:(_Bool)arg3;	// IMP=0x0010000001093681
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x001000000109366c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

