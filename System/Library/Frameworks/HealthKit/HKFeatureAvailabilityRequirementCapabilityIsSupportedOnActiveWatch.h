//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch
{
    _Bool _supportedOnLocalDevice;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000008d859
+ (id)requirementIdentifier;	// IMP=0x006000000008d475
@property(readonly, nonatomic) _Bool supportedOnLocalDevice; // @synthesize supportedOnLocalDevice=_supportedOnLocalDevice;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008d8de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008d861
- (unsigned long long)hash;	// IMP=0x000000000008d81a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008d798
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x000000000008d6e5
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x000000000008d632
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008d55a
- (id)requirementDescription;	// IMP=0x000000000008d489
- (id)initWithFeatureIdentifier:(id)arg1 supportedOnLocalDevice:(_Bool)arg2;	// IMP=0x000000000008d433

@end

