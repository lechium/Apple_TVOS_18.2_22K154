//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAppleMediaAccessory, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryPowerAction
{
    HMDAppleMediaAccessory *_accessory;	// 8 = 0x8
    unsigned long long _targetSleepWakeState;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000003911cc
+ (id)logCategory;	// IMP=0x001000000039119c
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x0010000000390c4c
- (void).cxx_destruct;	// IMP=0x0000000000390a88
@property(nonatomic) unsigned long long targetSleepWakeState; // @synthesize targetSleepWakeState=_targetSleepWakeState;
@property(nonatomic) __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
- (id)attributeDescriptions;	// IMP=0x000000000039090f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000039081e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003905a2
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000039059c
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000003900af
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000038ff3a
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;	// IMP=0x000000000038f7c3
@property(readonly) Class modelClass;
- (_Bool)isCompatibleWithAction:(id)arg1;	// IMP=0x000000000038f707
- (_Bool)isUnsecuringAction;	// IMP=0x000000000038f6ff
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x000000000038f662
- (id)associatedAccessories;	// IMP=0x000000000038f5ca
- (_Bool)requiresDeviceUnlock;	// IMP=0x000000000038f5c2
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000038f2ba
- (id)dictionaryRepresentation;	// IMP=0x000000000038f154
- (id)stateDump;	// IMP=0x000000000038f0a8
- (unsigned long long)type;	// IMP=0x000000000038f09d
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 targetSleepWakeState:(unsigned long long)arg3 actionSet:(id)arg4;	// IMP=0x000000000038f010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly) Class superclass;

@end

