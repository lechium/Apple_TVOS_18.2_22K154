//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSString, PBSystemGestureHandle, PBSystemOverlayController, TVSObserverSet, UIApplicationSceneDeactivationAssertion;
@protocol BSInvalidatable, OS_dispatch_source;

@interface PBBulletinManager : NSObject
{
    _Bool _currentBulletinActive;	// 8 = 0x8
    NSMutableDictionary *_identifiersToBulletinInfos;	// 16 = 0x10
    PBSystemOverlayController *_overlayController;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_bulletinDismissalTimer;	// 32 = 0x20
    TVSObserverSet *_observers;	// 40 = 0x28
    NSHashTable *_pausedAssertions;	// 48 = 0x30
    id <BSInvalidatable> _stateCaptureHandle;	// 56 = 0x38
    UIApplicationSceneDeactivationAssertion *_interactiveBulletinSceneDeactivationAssertion;	// 64 = 0x40
    id <BSInvalidatable> _idleTimerAssertion;	// 72 = 0x48
    PBSystemGestureHandle *_dismissGesture;	// 80 = 0x50
    PBSystemGestureHandle *_activateTVButtonGesture;	// 88 = 0x58
    PBSystemGestureHandle *_activateGameControllerHomeGesture;	// 96 = 0x60
    id <BSInvalidatable> _systemHomeUIServicePreheatAssertion;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x0020000000072748
+ (id)dependencyDescription;	// IMP=0x0010000000072621
- (void).cxx_destruct;	// IMP=0x002000000007543a
@property(readonly, nonatomic) id <BSInvalidatable> systemHomeUIServicePreheatAssertion; // @synthesize systemHomeUIServicePreheatAssertion=_systemHomeUIServicePreheatAssertion;
@property(readonly, nonatomic) PBSystemGestureHandle *activateGameControllerHomeGesture; // @synthesize activateGameControllerHomeGesture=_activateGameControllerHomeGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *activateTVButtonGesture; // @synthesize activateTVButtonGesture=_activateTVButtonGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *dismissGesture; // @synthesize dismissGesture=_dismissGesture;
@property(retain, nonatomic) id <BSInvalidatable> idleTimerAssertion; // @synthesize idleTimerAssertion=_idleTimerAssertion;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *interactiveBulletinSceneDeactivationAssertion; // @synthesize interactiveBulletinSceneDeactivationAssertion=_interactiveBulletinSceneDeactivationAssertion;
@property(readonly, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(readonly, nonatomic) NSHashTable *pausedAssertions; // @synthesize pausedAssertions=_pausedAssertions;
@property(readonly, nonatomic) TVSObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *bulletinDismissalTimer; // @synthesize bulletinDismissalTimer=_bulletinDismissalTimer;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) NSMutableDictionary *identifiersToBulletinInfos; // @synthesize identifiersToBulletinInfos=_identifiersToBulletinInfos;
@property(nonatomic, getter=isCurrentBulletinActive) _Bool currentBulletinActive; // @synthesize currentBulletinActive=_currentBulletinActive;
- (void)_notifyObserversDidEndFocusOnBulletinViewController:(id)arg1;	// IMP=0x00100000000752b2
- (void)_notifyObserversDidBeginFocusOnBulletinViewController:(id)arg1;	// IMP=0x00100000000751c5
- (void)_notifyObserversDidDismissBulletinViewController:(id)arg1;	// IMP=0x00100000000750d8
- (void)_notifyObserversWillPresentBulletinViewController:(id)arg1;	// IMP=0x0010000000074fbd
- (id)stateDumpBuilder;	// IMP=0x0010000000074f71
- (id)_activateGameControllerHomeGestureCreatingIfNeeded;	// IMP=0x0010000000074f24
- (id)_activateTVButtonGestureCreatingIfNeeded;	// IMP=0x0010000000074ed7
- (id)_createBulletinActivationGestureHandle:(unsigned long long)arg1;	// IMP=0x0010000000074e57
- (CDUnknownBlockType)_bulletinActivationGestureActionHandler;	// IMP=0x0010000000074d7b
- (void)_updateActivationGestures;	// IMP=0x0010000000074ca6
- (void)_invalidateIdleTimerAssertion;	// IMP=0x0010000000074c6e
- (void)_createIdleTimerAssertion;	// IMP=0x0010000000074b20
- (void)_setAcceptsEventFocus:(_Bool)arg1 forViewController:(id)arg2;	// IMP=0x00100000000748e1
- (void)_cancelTimer;	// IMP=0x00100000000748b1
- (void)_startTimerForViewController:(id)arg1 withTimeout:(double)arg2;	// IMP=0x0010000000074750
- (void)_deregisterBulletinPausedAssertion:(id)arg1;	// IMP=0x001000000007460c
- (void)_registerBulletinPausedAssertion:(id)arg1;	// IMP=0x00100000000744c5
- (void)dismissBulletinWithInfo:(id)arg1;	// IMP=0x00100000000741b0
- (void)dismissBulletinViewController:(id)arg1;	// IMP=0x0010000000073e52
- (void)updateBulletinViewControllerTimeout:(id)arg1 timeoutInSeconds:(double)arg2;	// IMP=0x0010000000073ae2
- (void)presentBulletinWithUIProvider:(id)arg1 bulletinInfo:(id)arg2;	// IMP=0x0010000000073927
- (void)overlayController:(id)arg1 didCancelSession:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000007387b
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x0010000000073711
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000736fe
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x0010000000073549
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x0010000000073532
- (void)removeObserver:(id)arg1;	// IMP=0x001000000007351b
- (void)addObserver:(id)arg1;	// IMP=0x00100000000734fc
- (_Bool)handleBackButton;	// IMP=0x0010000000073292
- (_Bool)dismissOrShrinkCurrentBulletin;	// IMP=0x0010000000073023
- (void)activateCurrentBulletin;	// IMP=0x0010000000072ee7
- (_Bool)shouldActivateCurrentBulletinForAction:(unsigned long long)arg1;	// IMP=0x0010000000072e0c
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dealloc;	// IMP=0x0010000000072c1a
- (id)init;	// IMP=0x00100000000727cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

