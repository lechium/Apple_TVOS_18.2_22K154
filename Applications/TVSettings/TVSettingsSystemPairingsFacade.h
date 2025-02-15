//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUPairingManager, NSArray, NSMutableDictionary, SFService, _TtC10TVSettings27RemotePairingPairingManager;

@interface TVSettingsSystemPairingsFacade : NSObject
{
    _Bool _didRegisterForRemotePairingDarwinNotifications;	// 8 = 0x8
    NSArray *_pairedDevicesInDisplayOrder;	// 16 = 0x10
    NSMutableDictionary *_identifierToDeviceMap;	// 24 = 0x18
    CUPairingManager *_pairingManager;	// 32 = 0x20
    _TtC10TVSettings27RemotePairingPairingManager *_remotePairingPairingManager;	// 40 = 0x28
    SFService *_pairingAdvertisingService;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x004000000000ab83
- (void).cxx_destruct;	// IMP=0x002000000000c340
@property(nonatomic) _Bool didRegisterForRemotePairingDarwinNotifications; // @synthesize didRegisterForRemotePairingDarwinNotifications=_didRegisterForRemotePairingDarwinNotifications;
@property(retain, nonatomic) SFService *pairingAdvertisingService; // @synthesize pairingAdvertisingService=_pairingAdvertisingService;
@property(retain, nonatomic) _TtC10TVSettings27RemotePairingPairingManager *remotePairingPairingManager; // @synthesize remotePairingPairingManager=_remotePairingPairingManager;
@property(retain, nonatomic) CUPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(retain, nonatomic) NSMutableDictionary *identifierToDeviceMap; // @synthesize identifierToDeviceMap=_identifierToDeviceMap;
@property(copy, nonatomic) NSArray *pairedDevicesInDisplayOrder; // @synthesize pairedDevicesInDisplayOrder=_pairedDevicesInDisplayOrder;
- (void)dealloc;	// IMP=0x001000000000c27a
- (_Bool)removeDeviceWithPairedPeer:(id)arg1;	// IMP=0x001000000000c198
- (id)deviceWithRemotePairingPairedHost:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x001000000000c099
- (id)deviceWithPairedPeer:(id)arg1 isDevicePairing:(_Bool)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x001000000000bf92
- (void)_clearDevices:(_Bool)arg1;	// IMP=0x001000000000bf40
- (void)_peerChanged:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000beb3
- (void)_peerRemoved:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000be85
- (void)_peerAdded:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000be44
- (void)_updateDeviceDisplayFromDeviceMap;	// IMP=0x001000000000bd3a
- (void)_updateFromCoreUtilsPairedPeers:(id)arg1 isDevice:(_Bool)arg2;	// IMP=0x001000000000bbd9
- (void)_updateFromRemotePairingPairedHosts:(id)arg1;	// IMP=0x001000000000ba92
- (void)removeCoreUtilsPairingWithIdentifier:(id)arg1 isDevice:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b8e8
- (void)unpairDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b5b0
- (_Bool)deviceStillPaired:(id)arg1;	// IMP=0x001000000000b545
- (void)_queryPairedPeers;	// IMP=0x001000000000b1af
- (void)_configurePairingManager;	// IMP=0x001000000000add0
- (void)_destroyPairingManager;	// IMP=0x001000000000ad9e
- (void)stopAdvertising;	// IMP=0x001000000000ad6c
- (void)startAdvertising;	// IMP=0x001000000000ace2
- (void)remotePairingPairedHostsChanged;	// IMP=0x001000000000acd0
- (void)startScanningIfNeeded;	// IMP=0x001000000000ac9f
- (id)init;	// IMP=0x001000000000ac08

@end

