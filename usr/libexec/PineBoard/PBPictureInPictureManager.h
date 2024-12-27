//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable, NSMutableSet, NSSet, NSString, PBAutoPIPTransaction, PBCoordinatedTransitionToken, PBMediaRemoteObserver, PBPIPRootViewController, PBPictureInPictureOverlayCoordinator, PBSPictureInPictureState, PBSplitViewController, PBSystemGestureHandle, PGPictureInPictureController, TVSStateMachine, UIApplicationSceneDeactivationAssertion;
@protocol OS_dispatch_queue, PBSystemUIServiceSplitViewStatePublishing;

@interface PBPictureInPictureManager : NSObject
{
    _Bool _swapping;	// 8 = 0x8
    _Bool _stashingEnabled;	// 9 = 0x9
    _Bool _stashed;	// 10 = 0xa
    _Bool _shouldShowControlsHintOnActivation;	// 11 = 0xb
    _Bool _shouldAvoidFocusOnNextUpdate;	// 12 = 0xc
    _Bool _shouldAvoidNestingPiPOnNextSplitViewPresentation;	// 13 = 0xd
    _Bool _shouldResumePlaybackOnInterruptionEnd;	// 14 = 0xe
    _Bool _stoppingFromSystemShell;	// 15 = 0xf
    struct os_unfair_lock_s _observersLock;	// 16 = 0x10
    id <PBSystemUIServiceSplitViewStatePublishing> _splitViewStatePublisher;	// 24 = 0x18
    PBSplitViewController *_splitViewController;	// 32 = 0x20
    PBAutoPIPTransaction *_deferredAutoPipTransaction;	// 40 = 0x28
    TVSStateMachine *_stateMachine;	// 48 = 0x30
    PGPictureInPictureController *_pictureInPictureController;	// 56 = 0x38
    PBPIPRootViewController *_pipRootViewController;	// 64 = 0x40
    NSHashTable *_observers;	// 72 = 0x48
    PBPictureInPictureOverlayCoordinator *_overlayCoordinator;	// 80 = 0x50
    PBMediaRemoteObserver *_mediaRemoteObserver;	// 88 = 0x58
    long long _currentQuadrant;	// 96 = 0x60
    NSDate *_currentQuadrantStartDate;	// 104 = 0x68
    NSMutableSet *_activeInterruptions;	// 112 = 0x70
    UIApplicationSceneDeactivationAssertion *_pipSceneDeactivationAssertion;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_mediaRemoteQueue;	// 128 = 0x80
    NSDate *_sessionStartDate;	// 136 = 0x88
    PBSystemGestureHandle *_toggleEditingControlsGesture;	// 144 = 0x90
    PBCoordinatedTransitionToken *_editingControlsTransitionToken;	// 152 = 0x98
}

+ (id)sharedInstance;	// IMP=0x0020000000063598
+ (id)dependencyDescription;	// IMP=0x0010000000063384
- (void).cxx_destruct;	// IMP=0x0020000000069b49
@property(readonly, nonatomic) PBCoordinatedTransitionToken *editingControlsTransitionToken; // @synthesize editingControlsTransitionToken=_editingControlsTransitionToken;
@property(readonly, nonatomic) PBSystemGestureHandle *toggleEditingControlsGesture; // @synthesize toggleEditingControlsGesture=_toggleEditingControlsGesture;
@property(nonatomic, getter=isStoppingFromSystemShell) _Bool stoppingFromSystemShell; // @synthesize stoppingFromSystemShell=_stoppingFromSystemShell;
@property(retain, nonatomic) NSDate *sessionStartDate; // @synthesize sessionStartDate=_sessionStartDate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteQueue; // @synthesize mediaRemoteQueue=_mediaRemoteQueue;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *pipSceneDeactivationAssertion; // @synthesize pipSceneDeactivationAssertion=_pipSceneDeactivationAssertion;
@property(readonly, nonatomic) _Bool shouldResumePlaybackOnInterruptionEnd; // @synthesize shouldResumePlaybackOnInterruptionEnd=_shouldResumePlaybackOnInterruptionEnd;
@property(readonly, nonatomic) NSMutableSet *activeInterruptions; // @synthesize activeInterruptions=_activeInterruptions;
@property(readonly, nonatomic) _Bool shouldAvoidNestingPiPOnNextSplitViewPresentation; // @synthesize shouldAvoidNestingPiPOnNextSplitViewPresentation=_shouldAvoidNestingPiPOnNextSplitViewPresentation;
@property(readonly, nonatomic) _Bool shouldAvoidFocusOnNextUpdate; // @synthesize shouldAvoidFocusOnNextUpdate=_shouldAvoidFocusOnNextUpdate;
@property(retain, nonatomic) NSDate *currentQuadrantStartDate; // @synthesize currentQuadrantStartDate=_currentQuadrantStartDate;
@property(readonly, nonatomic) long long currentQuadrant; // @synthesize currentQuadrant=_currentQuadrant;
@property(readonly, nonatomic) PBMediaRemoteObserver *mediaRemoteObserver; // @synthesize mediaRemoteObserver=_mediaRemoteObserver;
@property(readonly, nonatomic) PBPictureInPictureOverlayCoordinator *overlayCoordinator; // @synthesize overlayCoordinator=_overlayCoordinator;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) struct os_unfair_lock_s observersLock; // @synthesize observersLock=_observersLock;
@property(readonly, nonatomic) _Bool shouldShowControlsHintOnActivation; // @synthesize shouldShowControlsHintOnActivation=_shouldShowControlsHintOnActivation;
@property(retain, nonatomic, setter=setPIPRootViewController:) PBPIPRootViewController *pipRootViewController; // @synthesize pipRootViewController=_pipRootViewController;
@property(readonly, nonatomic) PGPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property(readonly, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) PBAutoPIPTransaction *deferredAutoPipTransaction; // @synthesize deferredAutoPipTransaction=_deferredAutoPipTransaction;
@property(readonly, nonatomic) PBSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(readonly, nonatomic, getter=isStashed) _Bool stashed; // @synthesize stashed=_stashed;
@property(nonatomic, getter=isStashingEnabled) _Bool stashingEnabled; // @synthesize stashingEnabled=_stashingEnabled;
@property(nonatomic, getter=isSwapping) _Bool swapping; // @synthesize swapping=_swapping;
@property(retain, nonatomic) id <PBSystemUIServiceSplitViewStatePublishing> splitViewStatePublisher; // @synthesize splitViewStatePublisher=_splitViewStatePublisher;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000006971a
- (void)stopObservingMediaRemoteChanges;	// IMP=0x00100000000696b8
- (void)startObservingMediaRemoteChanges;	// IMP=0x001000000006962f
- (void)getPictureInPicturePlayerPath:(CDUnknownBlockType)arg1;	// IMP=0x0010000000069251
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000069035
- (void)controlCenterManagerDidDeactivateFullScreenOverlay:(id)arg1;	// IMP=0x0010000000068fd0
- (void)controlCenterManagerDidActivateFullScreenOverlay:(id)arg1;	// IMP=0x0010000000068f6b
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x0010000000068f51
- (void)screenSaverManagerWillPresentScreenSaver:(id)arg1;	// IMP=0x0010000000068f37
- (void)bulletinManager:(id)arg1 didEndFocusOnBulletinViewController:(id)arg2;	// IMP=0x0010000000068ed2
- (void)bulletinManager:(id)arg1 didBeginFocusOnBulletinViewController:(id)arg2;	// IMP=0x0010000000068e6d
- (void)bulletinManager:(id)arg1 didDismissBulletinViewController:(id)arg2;	// IMP=0x0010000000068e18
- (void)bulletinManager:(id)arg1 willPresentBulletinViewController:(id)arg2 withActivationActions:(unsigned long long)arg3;	// IMP=0x0010000000068d69
- (void)updateInsetsForActiveLayoutLevelIfNecessary:(long long)arg1 insets:(struct UIEdgeInsets)arg2 isPineBoard:(_Bool)arg3;	// IMP=0x0010000000068c70
- (void)siriManagerDidUnhideSiriWindow:(id)arg1;	// IMP=0x0010000000068c24
- (void)siriManager:(id)arg1 didUpdateVisibleState:(long long)arg2;	// IMP=0x0010000000068bdd
- (_Bool)_shouldInterruptForLayoutLevel:(long long)arg1;	// IMP=0x0010000000068ad6
- (void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3;	// IMP=0x00100000000688ab
- (_Bool)_shouldAvoidFocusForLayoutLevel:(long long)arg1;	// IMP=0x0010000000068804
- (_Bool)_shouldAdjustInsetsForLayoutLevel:(long long)arg1;	// IMP=0x0010000000068737
- (void)sceneManager:(id)arg1 didReceiveCompactSceneRequestForScene:(id)arg2;	// IMP=0x00100000000685b7
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x0010000000068539
- (void)sceneManager:(id)arg1 didUpdateFocusedFrame:(struct CGRect)arg2 forFocusedScene:(id)arg3;	// IMP=0x00100000000684d3
- (void)sceneManager:(id)arg1 didUpdateOverlayInsets:(struct UIEdgeInsets)arg2 forFocusedScene:(id)arg3;	// IMP=0x00100000000683fc
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00100000000683e7
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000683cd
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x00100000000683b3
- (id)fetchCurrentPictureInPictureState;	// IMP=0x0010000000068390
- (void)_notifyObserversDidCancelForApplication:(id)arg1;	// IMP=0x00100000000682a7
- (void)_notifyObserversDidStopForApplication:(id)arg1;	// IMP=0x00100000000681be
- (void)_notifyObserversSendPictureInPicturePlaybackCommand:(unsigned long long)arg1;	// IMP=0x0010000000068114
- (void)_notifyObserversPictureInPictureDidUpdateState;	// IMP=0x0010000000068042
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000067ef7
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000067e77
- (void)addObserver:(id)arg1;	// IMP=0x0010000000067df7
- (void)splitViewControllerWillUnhide:(id)arg1;	// IMP=0x0010000000067d7f
- (void)splitViewControllerDidHide:(id)arg1;	// IMP=0x0010000000067d63
- (void);	// IMP=0x0010000000067d1a
- (void)splitViewControllerDidDismiss:(id)arg1;	// IMP=0x0010000000067c9a
- (void)splitViewControllerWillDismiss:(id)arg1;	// IMP=0x0010000000067c61
- (void)splitViewControllerWillPresent:(id)arg1;	// IMP=0x0010000000067ada
- (_Bool)splitViewController:(id)arg1 startPictureInPictureForApplication:(id)arg2;	// IMP=0x00100000000679c7
- (_Bool)splitViewController:(id)arg1 shouldShowStartPictureInPictureForApplication:(id)arg2;	// IMP=0x001000000006793a
- (void)splitViewController:(id)arg1 requestsApplicationLaunch:(id)arg2;	// IMP=0x0010000000067897
- (void)_endNestingPiPInsideSplitView;	// IMP=0x0010000000067858
- (void)_beginNestingPiPInsideSplitView:(id)arg1;	// IMP=0x00100000000677f2
- (void)rootViewControllerDidEndSwapAnimation:(id)arg1;	// IMP=0x00100000000677ec
- (void)rootViewControllerDidStartSwapAnimation:(id)arg1;	// IMP=0x00100000000677e6
- (void)rootViewControllerDidRequestPagingSkipByNumberOfPages:(long long)arg1 forApplication:(id)arg2;	// IMP=0x00100000000677cf
- (void)rootViewControllerDidRequestTogglePlayPause:(id)arg1;	// IMP=0x00100000000677b2
- (void)rootViewController:(id)arg1 didMovePictureInPictureToQuadrant:(long long)arg2;	// IMP=0x0010000000067729
- (void)rootViewController:(id)arg1 didCancelPictureInPictureForApplication:(id)arg2;	// IMP=0x00100000000675c7
- (void)rootViewController:(id)arg1 didUpdatePresentationState:(unsigned long long)arg2;	// IMP=0x00100000000675b4
- (void)rootViewControllerDidRequestEnterSplitView:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000067480
- (void)rootViewControllerDidToggleStashing:(id)arg1;	// IMP=0x00100000000673f6
- (void)rootViewController:(id)arg1 didStopPictureInPictureForApplication:(id)arg2;	// IMP=0x00100000000671df
- (void)rootViewController:(id)arg1 didRequestEditingControlsDismissalWithStyle:(long long)arg2;	// IMP=0x00100000000671c5
- (_Bool)pictureInPictureController:(id)arg1 shouldDenyNewConnection:(id)arg2;	// IMP=0x00100000000671bd
- (_Bool)pictureInPictureControllerCanBackgroundStartForFaceTimeVideoCall:(id)arg1;	// IMP=0x00100000000671b5
- (_Bool)pictureInPictureController:(id)arg1 shouldAuthorizeBackgroundPIPForAppWithBundleIdentifier:(id)arg2;	// IMP=0x0010000000066f8a
- (_Bool)pictureInPictureController:(id)arg1 shouldCancelPictureInPictureForApplication:(id)arg2 whenStartingPictureInPictureForApplication:(id)arg3;	// IMP=0x0010000000066f82
- (void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;	// IMP=0x0010000000066ea7
- (void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;	// IMP=0x0010000000066dd6
- (void)controlsProvider:(id)arg1 didRequestEditingControlsDismissalWithAnimationStyle:(long long)arg2;	// IMP=0x0010000000066dbc
- (void)_runDeferredAutoPipIfRequired;	// IMP=0x0010000000066d89
- (id)_controlsProvider;	// IMP=0x0010000000066d36
- (void)_setupSystemGesturesWithManager:(id)arg1;	// IMP=0x0010000000066c06
- (void)_dismiss;	// IMP=0x0010000000066bed
- (void)_present;	// IMP=0x0010000000066bd2
- (void)_setAcceptsEventFocus:(_Bool)arg1;	// IMP=0x00100000000669bf
- (_Bool)_acceptsEventFocus;	// IMP=0x00100000000669a8
- (CDUnknownBlockType)_machineStateChangeHandler;	// IMP=0x001000000006662f
- (id)_createStateMachine;	// IMP=0x00100000000654a0
- (void)_handleInterruptionsEnded;	// IMP=0x00100000000653b2
- (void)_handleInterruptionsStarted;	// IMP=0x0010000000065398
- (void)pictureInPictureInterruptionEnded:(id)arg1;	// IMP=0x00100000000652ad
- (void)pictureInPictureInterruptionBegan:(id)arg1;	// IMP=0x00100000000651c2
- (void)movePictureInPicture;	// IMP=0x00100000000650ba
- (void)expandPictureInPicture;	// IMP=0x0010000000064fc1
- (void)didStartSimultaneousPlayback;	// IMP=0x0010000000064f2e
- (void)sendPictureInPicturePlaybackCommand:(unsigned long long)arg1;	// IMP=0x0010000000064e74
- (void)cancelPictureInPictureWithReason:(id)arg1 sourceBundleID:(id)arg2 sourcePlayerInterface:(long long)arg3;	// IMP=0x0010000000064c56
- (void)_dismissEditingControlsWithReason:(id)arg1 animationStyle:(long long)arg2;	// IMP=0x0010000000064aa4
- (void)dismissEditingControlsWithReason:(id)arg1;	// IMP=0x0010000000064a8c
- (void)presentEditingControlsWithReason:(id)arg1;	// IMP=0x00100000000647fa
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic) NSSet *activePictureInPictureApplicationBundleIDs;
- (id)_startSplitViewTransactionWithApplication:(id)arg1;	// IMP=0x0010000000064539
- (id)startPIPTransactionForSceneHandleEnteringBackground:(id)arg1;	// IMP=0x001000000006417d
@property(readonly, nonatomic) long long appearanceStyle;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000064068
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) PBSPictureInPictureState *currentState;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dealloc;	// IMP=0x0010000000063beb
- (id)init;	// IMP=0x001000000006361f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

