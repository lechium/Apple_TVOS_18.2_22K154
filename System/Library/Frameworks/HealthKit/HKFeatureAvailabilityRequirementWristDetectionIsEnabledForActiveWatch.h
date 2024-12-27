//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementWristDetectionIsEnabledForActiveWatch
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002240c8
+ (id)requirementIdentifier;	// IMP=0x0010000000223dd5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002240d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002240d0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000224047
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x0000000000223fb9
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x0000000000223e8a
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000223df6
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

