//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class FBSDisplayConfigurationRequest, FBSDisplayMode, NSArray, NSData, NSDictionary, NSString;

@protocol UIApplicationSceneClientSettings <NSObject>
@property(readonly, nonatomic) _Bool systemInputActive;
@property(readonly, nonatomic) _Bool discardSessionOnUserDisconnect;
@property(readonly, nonatomic) _Bool containsSearchView;
@property(readonly, nonatomic) long long playbackControlsState;
@property(readonly, nonatomic) unsigned long long _debugValidationOrientationMask;
@property(readonly, nonatomic) NSArray *multitaskingDragExclusionRects;
@property(readonly, nonatomic) struct CGRect screenFocusedFrame;
@property(readonly, nonatomic) long long sceneActivationBias;
@property(readonly, nonatomic) NSData *activationConditionsData;
@property(readonly, copy, nonatomic) NSString *canvasTitle;
@property(readonly, nonatomic) _Bool disablesMirroring;
@property(readonly, nonatomic) double brightnessLevel;
@property(readonly, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property(readonly, nonatomic) unsigned long long visibleMiniAlertCount;
@property(readonly, nonatomic) _Bool wantsExclusiveForeground;
@property(readonly, nonatomic, getter=isReachabilitySupported) _Bool reachabilitySupported;
@property(readonly, copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property(readonly, copy, nonatomic) FBSDisplayMode *requestedDisplayMode;
@property(readonly, nonatomic) long long whitePointAdaptivityStyle;
@property(readonly, nonatomic) _Bool idleModeVisualEffectsEnabled;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, nonatomic) struct UIEdgeInsets primaryWindowOverlayInsets;
@property(readonly, nonatomic) long long notificationCenterRevealMode;
@property(readonly, nonatomic) long long controlCenterRevealMode;
@property(readonly, nonatomic) double controlCenterAmbiguousActivationMargin;
@property(readonly, nonatomic) unsigned long long proximityDetectionModes;
@property(readonly, nonatomic) _Bool idleTimerDisabled;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, nonatomic) _Bool interfaceOrientationChangesDisabled;
@property(readonly, nonatomic) _Bool deviceOrientationEventsEnabled;
@property(readonly, nonatomic) long long compatibilityMode;
@property(readonly, nonatomic) double defaultPNGExpirationTime;
@property(readonly, copy, nonatomic) NSString *defaultPNGName;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic) _Bool defaultStatusBarHidden;
@property(readonly, nonatomic) long long defaultStatusBarStyle;
@property(readonly, nonatomic) unsigned int statusBarContextID;
@property(readonly, nonatomic, getter=isStatusBarForegroundTransparent) _Bool statusBarForegroundTransparent;
@property(readonly, nonatomic) double statusBarAlpha;
@property(readonly, nonatomic) _Bool statusBarHidden;
@property(readonly, copy, nonatomic) NSDictionary *statusBarPartStyles;
@property(readonly, nonatomic) long long statusBarModernStyle;
@property(readonly, nonatomic) long long statusBarStyle;
@end

