//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreBluetooth/CBPeripheral.h>

@interface CBPeripheral (TVSettings)
+ (long long)tvs_previousRemoteType;	// IMP=0x0080000000088d16
- (id)_tvs_previouslyAdvertisedOrConnectedPeripheralInfo;	// IMP=0x0010000000089014
- (id)_getFirmwarePropertyFromIOReg:(id)arg1;	// IMP=0x001000000008900c
- (id)_tvs_previouslyConnectedPeripheralInfo;	// IMP=0x0010000000088f40
- (void)tvs_rememberAdvertisingBluetoothGamepad;	// IMP=0x0010000000088b99
- (void)tvs_rememberAdvertisingBluetoothRemoteWithRemoteType:(long long)arg1;	// IMP=0x0010000000088979
- (_Bool)tvs_supportsDevFW;	// IMP=0x0010000000088924
- (id)tvs_hardwareVersion;	// IMP=0x001000000008890b
- (id)tvs_multiTouchFirmwareVersion;	// IMP=0x00100000000888f2
- (id)tvs_firmwareVersion;	// IMP=0x0010000000088733
- (unsigned long long)tvs_vendorIdentifierAndProductIdentifier:(unsigned long long *)arg1;	// IMP=0x00100000000886cb
- (unsigned long long)tvs_vendorIdentifier;	// IMP=0x00100000000886b7
- (_Bool)tvs_isBluetoothGamepad;	// IMP=0x001000000008866e
- (long long)tvs_bluetoothRemoteType;	// IMP=0x00100000000885e4
- (_Bool)tvs_isGenericBluetoothRemote;	// IMP=0x00100000000885ca
- (_Bool)tvs_isBluetoothRemote;	// IMP=0x0010000000088581
- (_Bool)tvs_wasPreviouslyConnected;	// IMP=0x001000000008854e
@end

