//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCharacteristicReadWriteNetworkInformation, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicReadWriteLogEventManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDCharacteristicReadWriteNetworkInformation *_networkInformationCache;	// 16 = 0x10
    NSMutableDictionary *_accessoryStatisticsByHMDAccessoryUUID;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000b35dca
- (void).cxx_destruct;	// IMP=0x0000000000b35da2
@property(readonly, nonatomic) NSMutableDictionary *accessoryStatisticsByHMDAccessoryUUID; // @synthesize accessoryStatisticsByHMDAccessoryUUID=_accessoryStatisticsByHMDAccessoryUUID;
@property(retain) HMDCharacteristicReadWriteNetworkInformation *networkInformationCache; // @synthesize networkInformationCache=_networkInformationCache;
- (void)updateStatisticsForLogEvent:(id)arg1;	// IMP=0x0000000000b359b1
- (void)_updateNetworkStatisticsForLogEvent:(id)arg1;	// IMP=0x0000000000b35355
- (_Bool)_compareIPSignatures:(id)arg1 secondSignature:(id)arg2;	// IMP=0x0000000000b352e2
- (void)_updateBluetoothStatisticsForLogEvent:(id)arg1;	// IMP=0x0000000000b3526c
- (void)_updateWiFiStatisticsForLogEvent:(id)arg1;	// IMP=0x0000000000b34e16
- (void)_setupNetworkCacheWithWifiManager:(id)arg1;	// IMP=0x0000000000b34d83
- (double)elapsedTimeInterval:(double)arg1;	// IMP=0x0000000000b34d59
- (id)init;	// IMP=0x0000000000b34d03

@end

