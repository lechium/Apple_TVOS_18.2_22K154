//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class IDSService, NSString;

@interface CLNearbydInterfaceManagerAdapter : CLIntersiloService
{
    struct unique_ptr<CLNearbydInterfaceManager, std::default_delete<CLNearbydInterfaceManager>> fNearbydIfMgrInstance;	// 8 = 0x8
    _Bool _pairSupportsRegulatorySync;	// 16 = 0x10
    IDSService *_service;	// 24 = 0x18
    NSString *_nearbyPairUniqueID;	// 32 = 0x20
}

+ (_Bool)isSupported;	// IMP=0x00200000011f1904
+ (id)getSilo;	// IMP=0x00100000011f18a8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000011f188f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000011f1832
- (id).cxx_construct;	// IMP=0x00200000011f2585
- (void).cxx_destruct;	// IMP=0x00100000011f2572
@property(nonatomic) _Bool pairSupportsRegulatorySync; // @synthesize pairSupportsRegulatorySync=_pairSupportsRegulatorySync;
@property(retain, nonatomic) NSString *nearbyPairUniqueID; // @synthesize nearbyPairUniqueID=_nearbyPairUniqueID;
@property(retain) IDSService *service; // @synthesize service=_service;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000011f236e
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000011f228a
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000011f225f
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000011f2234
- (void)updateNearbyStatusWithDevices:(id)arg1;	// IMP=0x00100000011f1fbc
- (void)stopMonitoringRelayLocation:(byref id)arg1;	// IMP=0x00100000011f1fb6
- (void)startMonitoringRelayLocation:(byref id)arg1;	// IMP=0x00100000011f1fb0
- (void)endService;	// IMP=0x00100000011f1f3d
- (void)beginService;	// IMP=0x00100000011f1d0b
- (void)setSilo:(id)arg1;	// IMP=0x00100000011f1962
- (id)init;	// IMP=0x00100000011f1925

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

