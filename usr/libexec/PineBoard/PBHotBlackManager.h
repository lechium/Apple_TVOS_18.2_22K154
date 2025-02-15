//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, NSString, PBBulletinPausedAssertion, PBSystemOverlayController;
@protocol BSInvalidatable;

@interface PBHotBlackManager : NSObject
{
    BSCompoundAssertion *_presentationCompoundAssertion;	// 8 = 0x8
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    PBBulletinPausedAssertion *_welcomeBackPauseBulletinsAssertion;	// 24 = 0x18
    id <BSInvalidatable> _proceduralPresentationAssertion;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00200000000ad770
+ (id)dependencyDescription;	// IMP=0x00100000000ad5f8
- (void).cxx_destruct;	// IMP=0x00200000000ae275
@property(readonly, nonatomic) id <BSInvalidatable> proceduralPresentationAssertion; // @synthesize proceduralPresentationAssertion=_proceduralPresentationAssertion;
@property(readonly, nonatomic) PBBulletinPausedAssertion *welcomeBackPauseBulletinsAssertion; // @synthesize welcomeBackPauseBulletinsAssertion=_welcomeBackPauseBulletinsAssertion;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) BSCompoundAssertion *presentationCompoundAssertion; // @synthesize presentationCompoundAssertion=_presentationCompoundAssertion;
- (void)_updatePresentationUsingAssertionState:(id)arg1;	// IMP=0x00100000000ae183
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ae0fb
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00100000000ae0c8
- (void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2;	// IMP=0x00100000000ae00f
- (_Bool)_dismiss;	// IMP=0x00100000000adef1
- (void)_presentWithStyle:(long long)arg1;	// IMP=0x00100000000add68
- (void)_presentWithActivityIndicator:(_Bool)arg1;	// IMP=0x00100000000adcbc
- (void)dismiss;	// IMP=0x00100000000adc89
- (id)acquirePresentationAssertionForReason:(id)arg1;	// IMP=0x00100000000adc5b
- (void)presentWithActivityIndicator;	// IMP=0x00100000000adc43
- (void)present;	// IMP=0x00100000000adc2e
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dealloc;	// IMP=0x00100000000adb87
- (id)init;	// IMP=0x00100000000ad7f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

