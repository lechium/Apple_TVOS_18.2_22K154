//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, BSTransaction, NSHashTable, NSString, PBCoordinatedTransitionToken, PBSceneDeferralTargetAssertion, PBSiriContentPresentingViewController, PBSiriScreenActionContextProvider, PBSiriScreenActionManager, PBSystemGestureHandle, PBSystemOverlayController, SiriBluetoothKeyboardActivationSource, SiriPresentationPineBoardMainScreenViewController, SiriTVActivationSource, SiriTestingSource, UIApplicationSceneDeactivationAssertion;
@protocol PBSystemUIServiceSiriPresentationStatePublishing, SiriAssertion;

@interface PBSiriManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _siriEnabled;	// 9 = 0x9
    _Bool _shouldPreferDictation;	// 10 = 0xa
    long long _visibleState;	// 16 = 0x10
    PBSiriScreenActionManager *_screenActionManager;	// 24 = 0x18
    id <PBSystemUIServiceSiriPresentationStatePublishing> _siriPresentationStatePublisher;	// 32 = 0x20
    SiriPresentationPineBoardMainScreenViewController *_mainScreenSiriPresentation;	// 40 = 0x28
    PBSiriScreenActionContextProvider *_onScreenActionContextProvider;	// 48 = 0x30
    PBSystemOverlayController *_overlayController;	// 56 = 0x38
    PBSiriContentPresentingViewController *_siriContainerViewController;	// 64 = 0x40
    NSString *_unhideBundleIdentifier;	// 72 = 0x48
    UIApplicationSceneDeactivationAssertion *_fullscreenSiriSceneDeactivationAssertion;	// 80 = 0x50
    PBSystemGestureHandle *_presentUIGesture;	// 88 = 0x58
    PBSystemGestureHandle *_preheatGesture;	// 96 = 0x60
    PBSystemGestureHandle *_listenGesture;	// 104 = 0x68
    PBSystemGestureHandle *_dismissGesture;	// 112 = 0x70
    SiriTVActivationSource *_siriActivationSource;	// 120 = 0x78
    SiriBluetoothKeyboardActivationSource *_keyboardActivationSource;	// 128 = 0x80
    id <SiriAssertion> _siriPreheatAssertion;	// 136 = 0x88
    id <SiriAssertion> _siriButtonDownAssertion;	// 144 = 0x90
    id <SiriAssertion> _siriActivationAssertion;	// 152 = 0x98
    SiriTestingSource *_testingSource;	// 160 = 0xa0
    PBSceneDeferralTargetAssertion *_deferralTargetAssertion;	// 168 = 0xa8
    BSCompoundAssertion *_siriSuppressionAssertion;	// 176 = 0xb0
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 184 = 0xb8
    BSTransaction *_dismissalTransaction;	// 192 = 0xc0
    NSHashTable *_observers;	// 200 = 0xc8
}

+ (_Bool)_isSiriEnabled;	// IMP=0x002000000023b577
+ (id)sharedInstance;	// IMP=0x0010000000236e30
+ (id)dependencyDescription;	// IMP=0x0010000000236c73
- (void).cxx_destruct;	// IMP=0x002000000023cf45
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) BSTransaction *dismissalTransaction; // @synthesize dismissalTransaction=_dismissalTransaction;
@property(readonly, nonatomic) PBCoordinatedTransitionToken *coordinatedTransitionToken; // @synthesize coordinatedTransitionToken=_coordinatedTransitionToken;
@property(readonly, nonatomic) BSCompoundAssertion *siriSuppressionAssertion; // @synthesize siriSuppressionAssertion=_siriSuppressionAssertion;
@property(readonly, nonatomic) PBSceneDeferralTargetAssertion *deferralTargetAssertion; // @synthesize deferralTargetAssertion=_deferralTargetAssertion;
@property(retain, nonatomic) SiriTestingSource *testingSource; // @synthesize testingSource=_testingSource;
@property(retain, nonatomic) id <SiriAssertion> siriActivationAssertion; // @synthesize siriActivationAssertion=_siriActivationAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriButtonDownAssertion; // @synthesize siriButtonDownAssertion=_siriButtonDownAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriPreheatAssertion; // @synthesize siriPreheatAssertion=_siriPreheatAssertion;
@property(retain, nonatomic) SiriBluetoothKeyboardActivationSource *keyboardActivationSource; // @synthesize keyboardActivationSource=_keyboardActivationSource;
@property(retain, nonatomic) SiriTVActivationSource *siriActivationSource; // @synthesize siriActivationSource=_siriActivationSource;
@property(readonly, nonatomic) PBSystemGestureHandle *dismissGesture; // @synthesize dismissGesture=_dismissGesture;
- (id);	// IMP=0x001000000023ce2d
@property(readonly, nonatomic) PBSystemGestureHandle *preheatGesture; // @synthesize preheatGesture=_preheatGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *presentUIGesture; // @synthesize presentUIGesture=_presentUIGesture;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *fullscreenSiriSceneDeactivationAssertion; // @synthesize fullscreenSiriSceneDeactivationAssertion=_fullscreenSiriSceneDeactivationAssertion;
@property(retain, nonatomic) NSString *unhideBundleIdentifier; // @synthesize unhideBundleIdentifier=_unhideBundleIdentifier;
@property(readonly, nonatomic) PBSiriContentPresentingViewController *siriContainerViewController; // @synthesize siriContainerViewController=_siriContainerViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(nonatomic) _Bool shouldPreferDictation; // @synthesize shouldPreferDictation=_shouldPreferDictation;
@property(retain, nonatomic) PBSiriScreenActionContextProvider *onScreenActionContextProvider; // @synthesize onScreenActionContextProvider=_onScreenActionContextProvider;
@property(retain, nonatomic) SiriPresentationPineBoardMainScreenViewController *mainScreenSiriPresentation; // @synthesize mainScreenSiriPresentation=_mainScreenSiriPresentation;
@property(retain, nonatomic) id <PBSystemUIServiceSiriPresentationStatePublishing> siriPresentationStatePublisher; // @synthesize siriPresentationStatePublisher=_siriPresentationStatePublisher;
@property(readonly, nonatomic) PBSiriScreenActionManager *screenActionManager; // @synthesize screenActionManager=_screenActionManager;
@property(nonatomic) long long visibleState; // @synthesize visibleState=_visibleState;
@property(nonatomic, getter=isSiriEnabled) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)_notifyObserversSiriDidUpdatePresenting;	// IMP=0x001000000023cbf8
- (void)_notifyObserversSiriWindowDidUnhide;	// IMP=0x001000000023caa5
- (void)_notifyObserversSiriWindowDidHide;	// IMP=0x001000000023c952
- (void)_notifyObserversVisibleStateDidChange:(long long)arg1;	// IMP=0x001000000023c7f5
- (void)_notifyObserversSiriEnabledStateDidChange:(_Bool)arg1;	// IMP=0x001000000023c693
- (void)removeObserver:(id)arg1;	// IMP=0x001000000023c679
- (void)addObserver:(id)arg1;	// IMP=0x001000000023c65f
- (void)disableSiriPresentGesture;	// IMP=0x001000000023c625
- (void)enableSiriPresentGesture;	// IMP=0x001000000023c5eb
- (void)_setupGesturesWithManager:(id)arg1;	// IMP=0x001000000023c232
- (void)_launchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOverSiri:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000023bc48
- (void)_stopProvidingScreenActionContext;	// IMP=0x001000000023bb6f
- (void)_startProvidingScreenActionContext;	// IMP=0x001000000023ba6d
- (void)_startOrStopProvidingScreenActionContext;	// IMP=0x001000000023b9a6
- (_Bool)_shouldProvideScreenActionContext;	// IMP=0x001000000023b955
- (void)_updateShouldPreferDictation;	// IMP=0x001000000023b765
- (void)dictationManager:(id)arg1 didActivateWithResult:(long long)arg2;	// IMP=0x001000000023b55a
- (id)_createOverlayDismissalTransactionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023b0f8
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000023af87
- (void)appTransitioner:(id)arg1 willStartAnimationForAppTransition:(id)arg2;	// IMP=0x001000000023ae79
- (_Bool)siriScreenActionManagerIsSiriContentBeingDisplayed:(id)arg1;	// IMP=0x001000000023ae6b
- (void)powerManagerDidWakeSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000023adf7
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x001000000023ade4
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x001000000023add1
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000023ac20
- (void)_handleAssistantPreferencesDidChangeNotification:(id)arg1;	// IMP=0x001000000023ab64
- (void)siriPresentationDidDeactivateScene:(id)arg1;	// IMP=0x001000000023aa39
- (void)siriPresentation:(id)arg1 sceneDidActivateWithIdentifier:(id)arg2;	// IMP=0x001000000023a87e
- (void)siriPresentation:(id)arg1 didChangePresentationVisualState:(unsigned long long)arg2;	// IMP=0x001000000023a79a
- (void)siriPresentation:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;	// IMP=0x001000000023a6d0
- (void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000023a333
- (void)siriPresentation:(id)arg1 isEnabledDidChange:(_Bool)arg2;	// IMP=0x001000000023a2a5
- (void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000239f3c
- (void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000239d42
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000239cd9
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x0010000000239bb5
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x0010000000239b9e
- (unsigned long long)_remoteTypeFromContext:(id)arg1;	// IMP=0x0010000000239aed
- (_Bool)showAssistantIfNecessaryAfterApplication:(id)arg1;	// IMP=0x0010000000239aa1
- (void)hideAssistantViewForApplication:(id)arg1;	// IMP=0x0010000000239a5e
- (_Bool)_dismissAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023993f
- (_Bool)dismissAssistant;	// IMP=0x00100000002398b1
- (void)_unhideSiriWindow;	// IMP=0x00100000002397e9
- (void)_hideSiriWindow;	// IMP=0x0010000000239648
- (void)_presentAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002393fa
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x00100000002393e3
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x00100000002393cc
@property(readonly, nonatomic, getter=isListening) _Bool listening;
- (long long)stopSiriWithContext:(id)arg1;	// IMP=0x0010000000238dc0
- (long long)startSiriWithContext:(id)arg1;	// IMP=0x0010000000238744
- (void)_cancelSiriActivation;	// IMP=0x00100000002386a6
- (void)_stopSiriActivation;	// IMP=0x00100000002385f8
- (void)_cancelPreheating;	// IMP=0x001000000023855a
- (void)cancelActivation;	// IMP=0x0010000000238547
- (id)suppressSiriWithReason:(id)arg1;	// IMP=0x001000000023851d
- (long long)presentSiriAccessibilityUI;	// IMP=0x0010000000238392
- (long long)prepareSiriWithContext:(id)arg1;	// IMP=0x0010000000237fc3
- (long long)activateSiriWithContext:(id)arg1;	// IMP=0x0010000000237b34
- (void)preheatIfNecessary;	// IMP=0x0010000000237913
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (void)setup;	// IMP=0x00100000002374c9
- (void)dealloc;	// IMP=0x00100000002373e7
- (id)_init;	// IMP=0x0010000000236f08
- (id)init;	// IMP=0x0010000000236ec7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PBSystemGestureHandle *listenGesture; // @synthesize listenGesture=_listenGesture;
@property(readonly, nonatomic) NSString *providerIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly) Class superclass;

@end

