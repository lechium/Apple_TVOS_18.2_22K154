//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKAlarmInteractionProcessor : NSObject
{
}

- (_Bool)processInteraction:(id)arg1 bundleId:(id)arg2;	// IMP=0x00200000000014e6
- (id)supportedTypes;	// IMP=0x00100000000014c6
- (id)bundleIdPredicate;	// IMP=0x001000000000149d
- (_Bool)supportsSiriDonations;	// IMP=0x0010000000001495

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

