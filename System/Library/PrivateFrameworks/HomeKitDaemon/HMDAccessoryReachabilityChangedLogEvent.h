//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDAccessoryTransportReachabilityReport, NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryReachabilityChangedLogEvent : HMMLogEvent
{
    _Bool _accessoryBatteryPowered;	// 8 = 0x8
    _Bool _accessoryBridged;	// 9 = 0x9
    _Bool _batteryLow;	// 10 = 0xa
    _Bool _changed;	// 11 = 0xb
    _Bool _reachable;	// 12 = 0xc
    double _duration;	// 16 = 0x10
    NSString *_accessoryCategory;	// 24 = 0x18
    NSString *_accessoryFirmwareVersion;	// 32 = 0x20
    NSString *_accessoryManufacturer;	// 40 = 0x28
    NSString *_accessoryModel;	// 48 = 0x30
    NSNumber *_accessoryNumber;	// 56 = 0x38
    HMDAccessoryTransportReachabilityReport *_transportReport;	// 64 = 0x40
}

+ (id)eventWithReachable:(_Bool)arg1 changed:(_Bool)arg2 duration:(double)arg3 accessory:(id)arg4 transportReport:(id)arg5;	// IMP=0x0010000000508ecc
- (void).cxx_destruct;	// IMP=0x0000000000508e57
@property(readonly, copy, nonatomic) HMDAccessoryTransportReachabilityReport *transportReport; // @synthesize transportReport=_transportReport;
@property(readonly, nonatomic) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly, nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(readonly, nonatomic) _Bool batteryLow; // @synthesize batteryLow=_batteryLow;
@property(readonly, copy, nonatomic) NSNumber *accessoryNumber; // @synthesize accessoryNumber=_accessoryNumber;
@property(readonly, copy, nonatomic) NSString *accessoryModel; // @synthesize accessoryModel=_accessoryModel;
@property(readonly, copy, nonatomic) NSString *accessoryManufacturer; // @synthesize accessoryManufacturer=_accessoryManufacturer;
@property(readonly, copy, nonatomic) NSString *accessoryFirmwareVersion; // @synthesize accessoryFirmwareVersion=_accessoryFirmwareVersion;
@property(readonly, copy, nonatomic) NSString *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(readonly, nonatomic) _Bool accessoryBridged; // @synthesize accessoryBridged=_accessoryBridged;
@property(readonly, nonatomic) _Bool accessoryBatteryPowered; // @synthesize accessoryBatteryPowered=_accessoryBatteryPowered;
- (double)duration;	// IMP=0x0000000000508d8f
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)__initWithReachable:(_Bool)arg1 changed:(_Bool)arg2 duration:(double)arg3 accessory:(id)arg4 transportReport:(id)arg5;	// IMP=0x000000000050863b
- (id)init;	// IMP=0x0000000000508593

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end

