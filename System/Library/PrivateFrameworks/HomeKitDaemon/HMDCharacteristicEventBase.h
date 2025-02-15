//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCharacteristic, NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicEventBase
{
    HMDCharacteristic *_characteristic;	// 8 = 0x8
    NSUUID *_accessoryUUID;	// 16 = 0x10
    NSNumber *_serviceID;	// 24 = 0x18
    NSNumber *_characteristicInstanceID;	// 32 = 0x20
    id _previousValue;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000a79a5b
+ (id)lookForCharacteristicByAccessoryUUID:(id)arg1 serviceID:(id)arg2 characteristicID:(id)arg3 inHome:(id)arg4 checkForSupport:(_Bool)arg5 outError:(id *)arg6 shouldLog:(_Bool)arg7;	// IMP=0x0060000000a7938a
+ (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;	// IMP=0x0060000000a7927a
+ (id)logCategory;	// IMP=0x0060000000a7924a
- (void).cxx_destruct;	// IMP=0x0000000000a79195
@property(retain, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, nonatomic) NSNumber *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(retain, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a78b12
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a788b4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a7863e
- (void)fixCharacteristicInHome:(id)arg1;	// IMP=0x0000000000a78341
- (void)replaceCharacteristic:(id)arg1;	// IMP=0x0000000000a7829b
- (id)createPayload;	// IMP=0x0000000000a78133
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x0000000000a7812b
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x0000000000a78073
- (void)__handleCharacteristicsChangedPayload:(id)arg1;	// IMP=0x0000000000a7792e
- (void)_registerForMessages;	// IMP=0x0000000000a7782d
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x0000000000a7776c
- (_Bool)isActive;	// IMP=0x0000000000a7774e
- (id)description;	// IMP=0x0000000000a7769f
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000a77586

@end

