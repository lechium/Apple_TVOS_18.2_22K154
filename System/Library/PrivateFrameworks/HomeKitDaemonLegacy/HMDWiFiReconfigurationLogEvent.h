//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDAccessory, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDWiFiReconfigurationLogEvent : HMMLogEvent
{
    _Bool _usingFailSafeUpdate;	// 8 = 0x8
    HMDAccessory *_accessory;	// 16 = 0x10
    long long _credentialType;	// 24 = 0x18
    HMDAccessory *_routerAccessory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b67ea0
@property(retain, nonatomic) HMDAccessory *routerAccessory; // @synthesize routerAccessory=_routerAccessory;
@property(nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
@property(nonatomic, getter=isUsingFailSafeUpdate) _Bool usingFailSafeUpdate; // @synthesize usingFailSafeUpdate=_usingFailSafeUpdate;
@property(retain, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;

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

