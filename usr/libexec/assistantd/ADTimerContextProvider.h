//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSString, SOClockTimerObserver;
@protocol AFContextDonation;

@interface ADTimerContextProvider : NSObject
{
    id <AFContextDonation> _donationService;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    SOClockTimerObserver *_observer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000010773c
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000010741b
- (void)clockTimerObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;	// IMP=0x001000000010728b
- (void)clockTimerObserver:(id)arg1 timerDidDismiss:(id)arg2;	// IMP=0x00100000001071e0
- (void)clockTimerObserver:(id)arg1 timerDidFire:(id)arg2;	// IMP=0x00100000001070f4
- (id)initWithDonationService:(id)arg1 instanceContext:(id)arg2;	// IMP=0x0010000000106fb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

