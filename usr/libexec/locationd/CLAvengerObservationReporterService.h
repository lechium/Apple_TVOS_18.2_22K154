//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLAvengerScannerClient, NSString;
@protocol CLAvengerScannerServiceProtocol;

@interface CLAvengerObservationReporterService : CLIntersiloService
{
    struct CLAvengerObservationReporterServiceStateContext _currentContext;	// 8 = 0x8
    long long _currentState;	// 16 = 0x10
    id <CLAvengerScannerServiceProtocol> _avengerScannerProxy;	// 24 = 0x18
    struct unique_ptr<CLAppMonitor_Type::Client, std::default_delete<CLAppMonitor_Type::Client>> _appMonitorClient;	// 32 = 0x20
    CLAvengerScannerClient *_scannerClient;	// 40 = 0x28
}

+ (_Bool)isSupported;	// IMP=0x0020000000a63506
+ (id)getSilo;	// IMP=0x0010000000a634aa
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a63491
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a63434
- (id).cxx_construct;	// IMP=0x0020000000a641dd
- (void).cxx_destruct;	// IMP=0x0010000000a641b5
- (void)onAppMonitorNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000a63ebc
- (void)unregisterForAppMonitorNotification;	// IMP=0x0010000000a63e0c
- (void)registerForAppMonitorNotification;	// IMP=0x0010000000a63c71
- (void)onAvengerAdvertisement:(id)arg1 reconciledInformation:(id)arg2;	// IMP=0x0010000000a63b5c
- (void)onAggressiveScanStarted;	// IMP=0x0010000000a63b56
- (void)onAggressiveScanEnded;	// IMP=0x0010000000a63b50
- (void)onAdvertisementBufferEmptied;	// IMP=0x0000000000a63b4a
- (void)unregisterForAvengerScanner;	// IMP=0x0010000000a63a40
- (void)registerForAvengerScanner;	// IMP=0x0010000000a63858
- (id)clientIdentifier;	// IMP=0x0010000000a6384b
- (long long)determineStateWithContext:(struct CLAvengerObservationReporterServiceStateContext)arg1;	// IMP=0x0010000000a6383d
- (void)updateContext:(struct CLAvengerObservationReporterServiceStateContext)arg1;	// IMP=0x0010000000a63712
- (void)endService;	// IMP=0x0010000000a636e4
- (void)beginService;	// IMP=0x0010000000a635f9
- (id)init;	// IMP=0x0010000000a635bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

