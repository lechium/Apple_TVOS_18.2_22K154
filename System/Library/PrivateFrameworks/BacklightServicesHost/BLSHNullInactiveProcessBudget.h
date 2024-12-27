//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BLSHNullInactiveProcessBudget : NSObject
{
}

- (_Bool)stillTrackingAfterPurgingStaleDataForNowDate:(id)arg1;	// IMP=0x0000000000031850
- (void)performInvalidation;	// IMP=0x000000000003184a
- (void)invalidateAtRequestDate:(id)arg1 expectedFidelity:(long long)arg2 invalidationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003183f
- (void)chargeRenderedSpecifier:(id)arg1 expectedFidelity:(long long)arg2;	// IMP=0x0000000000031839
- (void)resetFutureSpecifiers;	// IMP=0x0000000000031833
- (id)validateAndChargeFutureSpecifier:(id)arg1 nextSpecifier:(id)arg2 expectedFidelity:(long long)arg3;	// IMP=0x000000000003181d
- (long long)allowedFidelityAtDate:(id)arg1 expectedFidelity:(long long)arg2;	// IMP=0x000000000003180a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

