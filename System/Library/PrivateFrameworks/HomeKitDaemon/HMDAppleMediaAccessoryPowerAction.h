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

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000cf7be9
+ (id)logCategory;	// IMP=0x0010000000cf7bb9
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x0010000000cf7669
- (void).cxx_destruct;	// IMP=0x0000000000cf74a5
@property(nonatomic) unsigned long long targetSleepWakeState; // @synthesize targetSleepWakeState=_targetSleepWakeState;
@property(nonatomic) __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
- (id)attributeDescriptions;	// IMP=0x0000000000cf732c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000cf723b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000cf6fbf
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000cf6fb9
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000cf6acc
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x0000000000cf6957
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000cf61e0
@property(readonly) Class modelClass;
- (_Bool)isStaleWithAccessory:(id)arg1;	// IMP=0x0000000000cf61ce
- (_Bool)isCompatibleWithAction:(id)arg1;	// IMP=0x0000000000cf611c
- (_Bool)isUnsecuringAction;	// IMP=0x0000000000cf6114
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x0000000000cf6077
- (id)associatedAccessories;	// IMP=0x0000000000cf5fdf
- (_Bool)requiresDeviceUnlock;	// IMP=0x0000000000cf5fd7
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000cf5ccf
- (id)dictionaryRepresentation;	// IMP=0x0000000000cf5b69
- (id)stateDump;	// IMP=0x0000000000cf5abd
- (unsigned long long)type;	// IMP=0x0000000000cf5ab2
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 targetSleepWakeState:(unsigned long long)arg3 actionSet:(id)arg4;	// IMP=0x0000000000cf5a25

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

