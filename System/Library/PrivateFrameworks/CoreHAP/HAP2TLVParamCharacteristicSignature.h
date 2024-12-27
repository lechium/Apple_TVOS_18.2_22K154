//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAP2TLVCharacteristicPropertiesWrapper, HAPTLVUnsignedNumberValue, NSData, NSString;

__attribute__((visibility("hidden")))
@interface HAP2TLVParamCharacteristicSignature : NSObject
{
    HAPTLVUnsignedNumberValue *_instanceID;	// 8 = 0x8
    NSData *_characteristicType;	// 16 = 0x10
    HAP2TLVCharacteristicPropertiesWrapper *_characteristicProperties;	// 24 = 0x18
    NSString *_userDescription;	// 32 = 0x20
    NSData *_bluetoothFormat;	// 40 = 0x28
    NSData *_validRange;	// 48 = 0x30
    NSData *_stepValue;	// 56 = 0x38
    NSData *_validValues;	// 64 = 0x40
    NSData *_validValuesRange;	// 72 = 0x48
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000687d2
- (void).cxx_destruct;	// IMP=0x000000000006875d
@property(retain, nonatomic) NSData *validValuesRange; // @synthesize validValuesRange=_validValuesRange;
@property(retain, nonatomic) NSData *validValues; // @synthesize validValues=_validValues;
@property(retain, nonatomic) NSData *stepValue; // @synthesize stepValue=_stepValue;
@property(retain, nonatomic) NSData *validRange; // @synthesize validRange=_validRange;
@property(retain, nonatomic) NSData *bluetoothFormat; // @synthesize bluetoothFormat=_bluetoothFormat;
@property(retain, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(retain, nonatomic) HAP2TLVCharacteristicPropertiesWrapper *characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(retain, nonatomic) NSData *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000067c2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067aa3
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000066f70
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000066618
- (id)initWithInstanceID:(id)arg1 characteristicType:(id)arg2 characteristicProperties:(id)arg3 userDescription:(id)arg4 bluetoothFormat:(id)arg5 validRange:(id)arg6 stepValue:(id)arg7 validValues:(id)arg8 validValuesRange:(id)arg9;	// IMP=0x0000000000066493
- (id)init;	// IMP=0x0000000000066464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

