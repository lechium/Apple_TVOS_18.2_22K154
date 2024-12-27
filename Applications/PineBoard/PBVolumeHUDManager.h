//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString, PBSystemOverlayController, PBVolumeHUDViewController, TVSStateMachine;
@protocol OS_dispatch_source;

@interface PBVolumeHUDManager : NSObject
{
    _Bool _dismissalStarted;	// 8 = 0x8
    _Bool _dismissalInterrupted;	// 9 = 0x9
    _Bool _volumeUpButtonIsDown;	// 10 = 0xa
    _Bool _volumeDownButtonIsDown;	// 11 = 0xb
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    PBVolumeHUDViewController *_volumeHUDViewController;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_dismissalTimer;	// 32 = 0x20
    TVSStateMachine *_stateMachine;	// 40 = 0x28
    NSNumber *_preferredVolumeLevel;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_indeterminateVolumePresentationTimer;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_indeterminateVolumeDismissalTimer;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x00200000001c5910
+ (id)dependencyDescription;	// IMP=0x00100000001c57e9
- (void).cxx_destruct;	// IMP=0x00200000001c8153
@property(retain, nonatomic) NSObject<OS_dispatch_source> *indeterminateVolumeDismissalTimer; // @synthesize indeterminateVolumeDismissalTimer=_indeterminateVolumeDismissalTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *indeterminateVolumePresentationTimer; // @synthesize indeterminateVolumePresentationTimer=_indeterminateVolumePresentationTimer;
@property(retain, nonatomic) NSNumber *preferredVolumeLevel; // @synthesize preferredVolumeLevel=_preferredVolumeLevel;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) _Bool volumeDownButtonIsDown; // @synthesize volumeDownButtonIsDown=_volumeDownButtonIsDown;
@property(nonatomic) _Bool volumeUpButtonIsDown; // @synthesize volumeUpButtonIsDown=_volumeUpButtonIsDown;
@property(nonatomic) _Bool dismissalInterrupted; // @synthesize dismissalInterrupted=_dismissalInterrupted;
@property(nonatomic) _Bool dismissalStarted; // @synthesize dismissalStarted=_dismissalStarted;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dismissalTimer; // @synthesize dismissalTimer=_dismissalTimer;
@property(readonly, nonatomic) PBVolumeHUDViewController *volumeHUDViewController; // @synthesize volumeHUDViewController=_volumeHUDViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)_cancelIndeterminateVolumeDismissalTimer;	// IMP=0x00100000001c803b
- (void)_startIndeterminateVolumeDismissalTimerWithDuration:(double)arg1;	// IMP=0x00100000001c7f2a
- (void)_cancelIndeterminateVolumePresentationTimer;	// IMP=0x00100000001c7efa
- (void)_startIndeterminateVolumePresentationTimerWithDuration:(double)arg1 headingUp:(_Bool)arg2;	// IMP=0x00100000001c7d38
- (void)configureStateMachine;	// IMP=0x00100000001c68c7
- (id)glyphNameForRouteType:(long long)arg1;	// IMP=0x00100000001c68ad
- (void)cancelDismissalTimer;	// IMP=0x00100000001c687d
- (void)startDismissalTimer;	// IMP=0x00100000001c678d
- (void)showIndeterminateVolumeHUDHeadingUp:(_Bool)arg1;	// IMP=0x00100000001c66b1
- (void)dismissVolumeHUD;	// IMP=0x00100000001c64c7
- (void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(id)arg2;	// IMP=0x00100000001c6402
- (void)showVolumeHUDWithImageName:(id)arg1 level:(id)arg2;	// IMP=0x00100000001c6384
- (void)showVolumeHUDWithImage:(id)arg1 level:(id)arg2;	// IMP=0x00100000001c5fca
- (void)didBecomeIneligibleForIndeterminateState;	// IMP=0x00100000001c5f85
- (void)noteMuteWasToggledWithCurrentVolumeLevel:(id)arg1 eligibleForIndeterminateState:(_Bool)arg2;	// IMP=0x00100000001c5f2c
- (void)notePreferredVolumeLevelChanged:(id)arg1;	// IMP=0x00100000001c5e26
- (void)noteVolumeDownWasHit:(_Bool)arg1 eligibleForIndeterminateState:(_Bool)arg2 currentVolumeLevel:(id)arg3;	// IMP=0x00100000001c5cba
- (void)noteVolumeUpWasHit:(_Bool)arg1 eligibleForIndeterminateState:(_Bool)arg2 currentVolumeLevel:(id)arg3;	// IMP=0x00100000001c5b4e
- (_Bool)isPresenting;	// IMP=0x00100000001c5b37
- (MISSING_TYPE *)init;	// IMP=0x00100000001c5997

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

