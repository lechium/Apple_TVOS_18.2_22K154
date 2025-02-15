//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/DNDModeAssertion.h>

@class NSString;

@interface DNDModeAssertion (Resolution)
+ (id)predicateForModeAssertionsTakenBeforeDate:(id)arg1;	// IMP=0x0010000000097dd6
+ (id)predicateForModeAssertionsWithLifetimeClass:(Class)arg1;	// IMP=0x0010000000097cd2
+ (id)predicateForModeAssertionsWithModeIdentifiersNotContainedIn:(id)arg1;	// IMP=0x0010000000097cad
+ (id)predicateForModeAssertionsWithDeviceIdentifier:(id)arg1;	// IMP=0x0010000000097c88
+ (id)predicateForModeAssertionsWithClientIdentifiers:(id)arg1;	// IMP=0x0010000000097c63
+ (id)predicateForModeAssertionsWithUUIDs:(id)arg1;	// IMP=0x0010000000097c3e
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;	// IMP=0x0010000000008ef9
@property(readonly, nonatomic) _Bool isUserInitiated;
@property(readonly, nonatomic) _Bool isClientScheduled;
@property(readonly, nonatomic) _Bool isInternalScheduled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

