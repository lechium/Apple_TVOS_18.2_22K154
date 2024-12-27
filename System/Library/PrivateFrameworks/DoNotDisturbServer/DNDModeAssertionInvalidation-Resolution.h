//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/DNDModeAssertionInvalidation.h>

@class NSString;

@interface DNDModeAssertionInvalidation (Resolution)
+ (id)predicateForModeAssertionInvalidationsWithAssertionClientIdentifiers:(id)arg1;	// IMP=0x00100000000b7551
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;	// IMP=0x0010000000009095
@property(readonly, nonatomic) _Bool isUserInvalidated;
@property(readonly, nonatomic) _Bool isInternalScheduled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

