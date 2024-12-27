//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementMutuallyExclusiveFeatureIsOff
{
    NSString *_featureIdentifier;	// 8 = 0x8
    NSString *_context;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011279e
+ (id)requirementIdentifier;	// IMP=0x001000000011229a
- (void).cxx_destruct;	// IMP=0x0000000000112901
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000112821
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001127a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000112793
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001126a3
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x00000000001125dd
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000001123df
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001122e9
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x00000000001121d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

