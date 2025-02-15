//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicMetadata, HMDHAPAccessory, HMDService, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCharacteristic : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_notificationRegistrations;	// 16 = 0x10
    _Bool _notificationRegisteredWithRemoteGateway;	// 24 = 0x18
    _Bool _broadcastNotificationEnabled;	// 25 = 0x19
    NSSet *_hapCharacteristicTuples;	// 32 = 0x20
    id _previousValue;	// 40 = 0x28
    NSNumber *_stateNumber;	// 48 = 0x30
    HMDCharacteristicMetadata *_metadata;	// 56 = 0x38
    id _lastKnownValue;	// 64 = 0x40
    NSDate *_lastKnownValueUpdateTime;	// 72 = 0x48
    NSDate *_notificationEnabledTime;	// 80 = 0x50
    NSData *_notificationContext;	// 88 = 0x58
    NSData *_authorizationData;	// 96 = 0x60
    HMDHAPAccessory *_accessory;	// 104 = 0x68
    HMDService *_service;	// 112 = 0x70
    NSString *_characteristicType;	// 120 = 0x78
    NSNumber *_characteristicInstanceID;	// 128 = 0x80
    long long _characteristicProperties;	// 136 = 0x88
}

+ (id)currentTargetStateCharacteristicTypeMap;	// IMP=0x001000000077f9ea
+ (id)logCategory;	// IMP=0x001000000077f9ba
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000077f9b2
+ (_Bool)value:(id)arg1 differentThan:(id)arg2;	// IMP=0x001000000077f99f
+ (CDUnknownBlockType)sortComparatorForCharacteristicDictionary;	// IMP=0x001000000077f992
- (void).cxx_destruct;	// IMP=0x000000000077f350
@property(nonatomic) long long characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(retain, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(nonatomic) _Bool broadcastNotificationEnabled; // @synthesize broadcastNotificationEnabled=_broadcastNotificationEnabled;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
- (id)attributeDescriptions;	// IMP=0x000000000077ec84
- (id)logIdentifier;	// IMP=0x000000000077eb39
- (void)_encodeWithCoder:(id)arg1;	// IMP=0x000000000077e334
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000077e2e5
- (id)_initWithCoder:(id)arg1;	// IMP=0x000000000077dcb0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000077dc47
- (id)contextDataForWriteRequestWithIdentifier:(id)arg1;	// IMP=0x000000000077d9a7
@property(readonly) _Bool supportsNotificationContext;
@property(readonly) _Bool shouldIgnoreCacheValueForRead;
- (void)updateService:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000077d54a
- (_Bool)deregisterNotificationForClientIdentifier:(id)arg1;	// IMP=0x000000000077d4ed
- (_Bool)deregisterNotificationIfNotLastForClientIdentifier:(id)arg1;	// IMP=0x000000000077d4d0
- (void)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2 changeThreshold:(id)arg3;	// IMP=0x000000000077d4b8
- (void)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2;	// IMP=0x000000000077d49d
- (_Bool)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2 changeThreshold:(id)arg3 removeLast:(_Bool)arg4;	// IMP=0x000000000077d0f6
@property(readonly, copy, nonatomic) NSNumber *changeThresholdForNonHomeClientEnabledNotifications;
@property(readonly, copy, nonatomic) NSNumber *changeThresholdForEnabledNotifications;
@property(retain, nonatomic) NSDate *notificationEnabledTime; // @synthesize notificationEnabledTime=_notificationEnabledTime;
- (_Bool)isNotificationEnabledForClientIdentifierPrefix:(id)arg1;	// IMP=0x000000000077ca2c
- (id)clientIdentifiersWithNotificationsEnabled;	// IMP=0x000000000077c9ab
- (id)localClientIdentifiersWithNotificationsEnabled;	// IMP=0x000000000077c8b1
- (_Bool)isNotificationEnabledForClientIdentifier:(id)arg1;	// IMP=0x000000000077c7e6
- (_Bool)isNonClientNotificationEnabled;	// IMP=0x000000000077c79b
- (_Bool)isNonBulletinNotificationEnabled;	// IMP=0x000000000077c750
- (_Bool)isNonHomeNotificationsEnabled;	// IMP=0x000000000077c705
- (_Bool)isClientNotificationEnabled;	// IMP=0x000000000077c6ba
- (_Bool)isNotificationEnabled;	// IMP=0x000000000077c672
- (_Bool)supportsWrite;	// IMP=0x000000000077c65d
- (_Bool)supportsRead;	// IMP=0x000000000077c649
- (_Bool)supportsNotification;	// IMP=0x000000000077c637
- (id)validateValue:(id)arg1 outValue:(id *)arg2;	// IMP=0x000000000077c511
- (id)validateValueForNotify:(id)arg1 outValue:(id *)arg2;	// IMP=0x000000000077c482
- (id)validateValueForWrite:(id)arg1 outValue:(id *)arg2;	// IMP=0x000000000077c3f3
- (id)getCharacteristicDictionaryForMigrationFixup;	// IMP=0x000000000077c3dc
@property(readonly, copy, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(copy, nonatomic, setter=setStateNumber:) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
- (_Bool)shouldUpdateValueFromHAPCharacteristic:(id)arg1;	// IMP=0x000000000077bd2e
- (void)updateLastKnownValue;	// IMP=0x000000000077b979
- (void)getLastKnownValueUpdateTime:(id *)arg1 stateNumber:(id *)arg2 notificationContext:(id *)arg3;	// IMP=0x000000000077b8eb
- (void)updateValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 notificationContext:(id)arg4;	// IMP=0x000000000077b24b
@property(readonly, copy, nonatomic) id value;
- (long long)_characteristicPropertiesRelevantForCurrentUser:(long long)arg1;	// IMP=0x000000000077ada4
@property(readonly, nonatomic) long long properties;
- (id)characteristicForHAPAccessory:(id)arg1;	// IMP=0x000000000077acb8
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(readonly, copy, nonatomic) NSString *type;
- (void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2;	// IMP=0x000000000077ab3d
- (void)unconfigure;	// IMP=0x000000000077aa30
- (void)configureWithCharacteristic:(id)arg1;	// IMP=0x000000000077a72f
- (id)_characteristicDictionaryWithAuthData:(_Bool)arg1;	// IMP=0x000000000077a5d7
- (id)getCharacteristicDictionary;	// IMP=0x000000000077a5c3
- (_Bool)updateWithDictionary:(id)arg1;	// IMP=0x000000000077a2b0
- (id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2;	// IMP=0x000000000077a0a6
@property(readonly, nonatomic) NSString *serializedIdentifier;
- (id)dumpState;	// IMP=0x0000000000779a23
@property(readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
- (id)characteristicTypeDescription;	// IMP=0x000000000077988e
@property(readonly, copy, nonatomic) NSSet *notificationRegistrations;
- (id)shortDescription;	// IMP=0x0000000000779703
@property(retain, nonatomic) NSData *notificationContext; // @synthesize notificationContext=_notificationContext;
@property(retain, nonatomic) NSDate *lastKnownValueUpdateTime; // @synthesize lastKnownValueUpdateTime=_lastKnownValueUpdateTime;
@property(retain, nonatomic) id lastKnownValue; // @synthesize lastKnownValue=_lastKnownValue;
@property(readonly, nonatomic) HMDCharacteristicMetadata *metadata; // @synthesize metadata=_metadata;
- (void)setPreviousValue:(id)arg1;	// IMP=0x000000000077949b
@property(readonly, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(retain, nonatomic) NSSet *hapCharacteristicTuples; // @synthesize hapCharacteristicTuples=_hapCharacteristicTuples;
@property(nonatomic) _Bool notificationRegisteredWithRemoteGateway; // @synthesize notificationRegisteredWithRemoteGateway=_notificationRegisteredWithRemoteGateway;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;	// IMP=0x0000000000779202
- (id)init;	// IMP=0x00000000007790e7
@property(readonly, nonatomic) NSDictionary *bulletinContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

