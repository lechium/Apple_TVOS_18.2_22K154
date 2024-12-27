//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, PBCoordinatedTransitionToken, PBSystemOverlayController, UIViewController;

@interface PBRoutingUIManager : NSObject
{
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 8 = 0x8
    NSHashTable *_pendingDismissalHandlers;	// 16 = 0x10
    UIViewController *_routingViewController;	// 24 = 0x18
    PBSystemOverlayController *_overlayController;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x002000000022bbad
+ (id)dependencyDescription;	// IMP=0x001000000022ba86
- (void).cxx_destruct;	// IMP=0x002000000022c670
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(retain, nonatomic) UIViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(readonly, nonatomic) NSHashTable *pendingDismissalHandlers; // @synthesize pendingDismissalHandlers=_pendingDismissalHandlers;
@property(readonly, nonatomic) PBCoordinatedTransitionToken *coordinatedTransitionToken; // @synthesize coordinatedTransitionToken=_coordinatedTransitionToken;
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000022c61b
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000022c592
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c33a
- (_Bool)_dismissRoutingUIWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000022bfcc
- (_Bool)dismissRoutingUI;	// IMP=0x001000000022bfb0
- (void)activateRoutingUIForReason:(unsigned long long)arg1 options:(id)arg2 dismissalHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000022be0e
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)init;	// IMP=0x001000000022bc34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *providerIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly) Class superclass;

@end

