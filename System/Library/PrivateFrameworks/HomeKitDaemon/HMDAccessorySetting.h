//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySettingModel, HMFMessageDispatcher, NSArray, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySetting : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_inMemoryCachedConstraintRemovals;	// 16 = 0x10
    NSMutableArray *_inMemoryCachedConstraints;	// 24 = 0x18
    NSMutableArray *_constraints;	// 32 = 0x20
    id _value;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    _Bool _reflected;	// 64 = 0x40
    unsigned long long _configurationVersion;	// 72 = 0x48
    NSUUID *_parentIdentifier;	// 80 = 0x50
    NSString *_keyPath;	// 88 = 0x58
    NSUUID *_identifier;	// 96 = 0x60
    unsigned long long _properties;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_clientQueue;	// 112 = 0x70
    HMFMessageDispatcher *_messageDispatcher;	// 120 = 0x78
    HMDAccessorySettingModel *_model;	// 128 = 0x80
    NSArray *_models;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000df6f14
+ (id)supportedConstraintClasses;	// IMP=0x0010000000df6ee4
+ (id)supportedValueClasses;	// IMP=0x0010000000df6eb4
+ (id)logCategory;	// IMP=0x0010000000df6e84
+ (id)decodedValue:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000df6df0
- (void).cxx_destruct;	// IMP=0x0000000000df5f78
@property(readonly, copy) NSArray *models; // @synthesize models=_models;
@property(readonly) HMDAccessorySettingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(getter=isReflected) _Bool reflected; // @synthesize reflected=_reflected;
@property(readonly) unsigned long long properties; // @synthesize properties=_properties;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
- (void)_encodeWithCoder:(id)arg1;	// IMP=0x0000000000df59f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000df59aa
- (id)constraintsForCodingXPC;	// IMP=0x0000000000df580a
- (id)_initWithCoder:(id)arg1;	// IMP=0x0000000000df555c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000df54f3
- (id)_modelsForMergeStrategyConstraintsUpdate:(id)arg1;	// IMP=0x0000000000df4d46
- (id)logIdentifier;	// IMP=0x0000000000df4c8c
@property(nonatomic) unsigned long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
- (_Bool)shouldTurnOffPersonalRequestsOnLanguageChangeTo:(id)arg1 supportedMultiUserLanguageCodes:(id)arg2 isMultiUserEnabled:(_Bool)arg3;	// IMP=0x0000000000df4682
- (_Bool)shouldBlockSettingUpdateFromVersion:(id)arg1 isMultiUserEnabled:(_Bool)arg2;	// IMP=0x0000000000df44d2
- (void)setValue:(id)arg1;	// IMP=0x0000000000df4447
@property(readonly, copy) id value;
- (id)modelsForConstraintsUpdate:(id)arg1;	// IMP=0x0000000000df3cd2
@property(readonly) _Bool isCollectionType;
- (_Bool)isConstraintMergeStrategyReflection;	// IMP=0x0000000000df3c6d
- (void)_mergeConstraintsLocallyWithAdditions:(id)arg1 removals:(id)arg2;	// IMP=0x0000000000df3a3f
- (void)removeConstraintsInMemory:(id)arg1;	// IMP=0x0000000000df36a9
- (void)addConstraintsInMemory:(id)arg1;	// IMP=0x0000000000df3486
- (void)removeConstraint:(id)arg1;	// IMP=0x0000000000df335b
- (void)addConstraint:(id)arg1;	// IMP=0x0000000000df328a
- (void)mergeConstraintsFromOther:(id)arg1;	// IMP=0x0000000000df3015
- (id)replicatedMissingConstraintsFrom:(id)arg1;	// IMP=0x0000000000df2e93
- (void)setConstraints:(id)arg1;	// IMP=0x0000000000df2e10
- (id)inMemoryConstraintWithIdentifier:(id)arg1;	// IMP=0x0000000000df2bed
- (id)constraintWithIdentifier:(id)arg1;	// IMP=0x0000000000df29ca
- (id)counterpartConstraintFor:(id)arg1;	// IMP=0x0000000000df2651
@property(readonly, copy) NSArray *constraints;
- (_Bool)canRemoveConstraint:(id)arg1;	// IMP=0x0000000000df24a3
- (_Bool)canAddConstraint:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000df223c
- (_Bool)isValid:(id *)arg1;	// IMP=0x0000000000df11ff
@property(readonly) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void)_setType:(long long)arg1;	// IMP=0x0000000000df118a
@property(readonly) long long type;
@property(readonly, copy) NSString *name;
- (void)setGroup:(id)arg1;	// IMP=0x0000000000df1058
- (id)copyReplica;	// IMP=0x0000000000df0f06
- (id)copyIdentical;	// IMP=0x0000000000df0dd6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000df0dc4
- (_Bool)compareConstraints:(id)arg1;	// IMP=0x0000000000df0c62
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000df0b87
@property(readonly) unsigned long long hash;
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000df0959
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x0000000000df0735
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000df0418
- (id)init;	// IMP=0x0000000000df0370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

