//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, PBConferenceRoomDisplayManager, PBDialogHiddenAssertion, PBScreenSaverContentPresentingViewController, PBSystemGestureHandle, PBSystemOverlayController, TVSPreferences;
@protocol BSInvalidatable;

@interface PBScreenSaverManager : NSObject
{
    _Bool _holdOffForMusicEnabled;	// 8 = 0x8
    double _screenSaverActivationDelayInMinutes;	// 16 = 0x10
    TVSPreferences *_screenSaverPrefs;	// 24 = 0x18
    PBScreenSaverContentPresentingViewController *_contentViewController;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    PBSystemOverlayController *_overlayController;	// 48 = 0x30
    PBDialogHiddenAssertion *_hideDialogAssertion;	// 56 = 0x38
    id <BSInvalidatable> _suppressSiriAssertion;	// 64 = 0x40
    PBSystemGestureHandle *_dismissGesture;	// 72 = 0x48
    PBSystemGestureHandle *_playPauseGesture;	// 80 = 0x50
    PBConferenceRoomDisplayManager *_conferenceRoomDisplayManager;	// 88 = 0x58
}

+ (id)_sceneWorkspace;	// IMP=0x00200000000395e6
+ (id)sharedInstance;	// IMP=0x001000000003958f
+ (id)dependencyDescription;	// IMP=0x00100000000393f1
- (void).cxx_destruct;	// IMP=0x002000000003b6f4
@property(nonatomic) __weak PBConferenceRoomDisplayManager *conferenceRoomDisplayManager; // @synthesize conferenceRoomDisplayManager=_conferenceRoomDisplayManager;
@property(readonly, nonatomic) PBSystemGestureHandle *playPauseGesture; // @synthesize playPauseGesture=_playPauseGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *dismissGesture; // @synthesize dismissGesture=_dismissGesture;
@property(readonly, nonatomic) id <BSInvalidatable> suppressSiriAssertion; // @synthesize suppressSiriAssertion=_suppressSiriAssertion;
@property(readonly, nonatomic) PBDialogHiddenAssertion *hideDialogAssertion; // @synthesize hideDialogAssertion=_hideDialogAssertion;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) PBScreenSaverContentPresentingViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) TVSPreferences *screenSaverPrefs; // @synthesize screenSaverPrefs=_screenSaverPrefs;
@property(nonatomic) _Bool holdOffForMusicEnabled; // @synthesize holdOffForMusicEnabled=_holdOffForMusicEnabled;
@property(nonatomic) double screenSaverActivationDelayInMinutes; // @synthesize screenSaverActivationDelayInMinutes=_screenSaverActivationDelayInMinutes;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000003b637
- (void)_handleSiriDidChangeVisibleState:(long long)arg1;	// IMP=0x001000000003b4c6
- (void)siriManagerDidUnhideSiriWindow:(id)arg1;	// IMP=0x001000000003b493
- (void)siriManager:(id)arg1 didUpdateVisibleState:(long long)arg2;	// IMP=0x001000000003b47d
- (void)_notifyPhotosSourcesDaemon;	// IMP=0x001000000003b46b
- (void)_updateActivationDelay;	// IMP=0x001000000003b3be
- (id)_screenSaverApplication;	// IMP=0x001000000003b336
- (id)_screenSaverAppBundleID;	// IMP=0x001000000003b2b1
- (void)_postSystemDidChangeIdleState:(_Bool)arg1;	// IMP=0x001000000003b114
- (void)_launchDemoAppIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003b106
- (void)removeObserver:(id)arg1;	// IMP=0x001000000003b0ef
- (void)addObserver:(id)arg1;	// IMP=0x000000000003b0d8
- (void)appTransitioner:(id)arg1 willBeginAppTransition:(id)arg2;	// IMP=0x001000000003afc9
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x001000000003adfc
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000003aca2
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x001000000003ab0e
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x001000000003a8d2
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (_Bool)dismissScreenSaverWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a600
- (_Bool)dismissScreenSaver;	// IMP=0x001000000003a5eb
- (void)_addConferenceRoomdDisplayManagerRestrictionCheckToViewController:(id)arg1;	// IMP=0x001000000003a40d
- (void)_activateScreenSaverForReason:(unsigned long long)arg1 forPosterBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003a033
- (void)activateScreenSaverForReason:(unsigned long long)arg1 forPosterBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039eba
- (void)fetchInitialPhotoAssets;	// IMP=0x0010000000039ea7
- (void)dealloc;	// IMP=0x0010000000039d9b
- (id)init;	// IMP=0x00100000000396ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

