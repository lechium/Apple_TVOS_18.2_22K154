//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject
{
    double _lastSeen;	// 8 = 0x8
    _Bool _notifyingCharacteristicUpdated;	// 16 = 0x10
    _Bool _monitorState;	// 17 = 0x11
    NSString *_identifier;	// 24 = 0x18
    unsigned long long _connectionPriority;	// 32 = 0x20
    unsigned long long _advertisementFormat;	// 40 = 0x28
    NSNumber *_stateNumber;	// 48 = 0x30
    NSNumber *_configNumber;	// 56 = 0x38
    NSNumber *_category;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000093e2f
@property(retain, nonatomic) NSNumber *category; // @synthesize category=_category;
@property(retain, nonatomic) NSNumber *configNumber; // @synthesize configNumber=_configNumber;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(nonatomic) unsigned long long advertisementFormat; // @synthesize advertisementFormat=_advertisementFormat;
@property(nonatomic) unsigned long long connectionPriority; // @synthesize connectionPriority=_connectionPriority;
@property(nonatomic) _Bool monitorState; // @synthesize monitorState=_monitorState;
@property(nonatomic) _Bool notifyingCharacteristicUpdated; // @synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000093b77
- (void)updatePairedPeripheralConfiguration:(_Bool)arg1 connectionPriority:(unsigned long long)arg2;	// IMP=0x00000000000939bc
- (void)updateWithPeripheral:(id)arg1;	// IMP=0x000000000009385d
- (id)initRecentlySeenPairedHAPBLEPeripheral:(id)arg1;	// IMP=0x0000000000093790

@end

