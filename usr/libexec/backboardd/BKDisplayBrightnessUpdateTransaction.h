//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayBrightnessUpdateTransactionManager, BSAbsoluteMachTimer, NSString;
@protocol OS_dispatch_queue;

@interface BKDisplayBrightnessUpdateTransaction : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BKDisplayBrightnessUpdateTransactionManager *_transactionManager;	// 24 = 0x18
    BSAbsoluteMachTimer *_timer;	// 32 = 0x20
    double _expirationTime;	// 40 = 0x28
    _Bool _invalidated;	// 48 = 0x30
}

+ (id)_sharedQueue;	// IMP=0x002000000005979b
+ (void)beginImplicitTransaction;	// IMP=0x0010000000059758
- (void).cxx_destruct;	// IMP=0x00200000000596af
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000005969d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000005964d
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000595e8
- (id)succinctDescription;	// IMP=0x0010000000059598
@property(readonly, copy) NSString *description;
- (void)_queue_updateExpirationTimeWithIntervalSinceNow:(double)arg1;	// IMP=0x0010000000059532
- (void)_queue_invalidate;	// IMP=0x00100000000594b5
- (void)_queue_setTimerWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x00100000000593ca
- (void)invalidate;	// IMP=0x001000000005937f
- (void)dealloc;	// IMP=0x00100000000591f2
- (id)initWithIdentifier:(id)arg1 transactionManager:(id)arg2;	// IMP=0x0010000000059101

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

