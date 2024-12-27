//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIScene, UIWindow, UIWindowScene;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UISystemAppearanceManager : NSObject
{
    _Bool _homeIndicatorAutoHidden;	// 8 = 0x8
    unsigned long long _screenEdgesDeferringSystemGestures;	// 16 = 0x10
    long long _userInterfaceStyle;	// 24 = 0x18
    long long _whitePointAdaptivityStyle;	// 32 = 0x20
    NSArray *_multitaskingDragExclusionRects;	// 40 = 0x28
    unsigned long long _supportedInterfaceOrientations;	// 48 = 0x30
    long long _preferredInterfaceOrientation;	// 56 = 0x38
    UIWindowScene *_windowScene;	// 64 = 0x40
    UIWindow *_previousWindowDrivingSystemAppearance;	// 72 = 0x48
    id <BSInvalidatable> _stateCaptureToken;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000004aa3e5
@property(retain, nonatomic) id <BSInvalidatable> stateCaptureToken; // @synthesize stateCaptureToken=_stateCaptureToken;
@property(nonatomic) __weak UIWindow *previousWindowDrivingSystemAppearance; // @synthesize previousWindowDrivingSystemAppearance=_previousWindowDrivingSystemAppearance;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(readonly, nonatomic) long long preferredInterfaceOrientation; // @synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(readonly, nonatomic) NSArray *multitaskingDragExclusionRects; // @synthesize multitaskingDragExclusionRects=_multitaskingDragExclusionRects;
@property(readonly, nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
@property(readonly, nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures; // @synthesize screenEdgesDeferringSystemGestures=_screenEdgesDeferringSystemGestures;
@property(readonly, nonatomic) _Bool homeIndicatorAutoHidden; // @synthesize homeIndicatorAutoHidden=_homeIndicatorAutoHidden;
- (void)_logOrientationPreferencesChangeWithOldSupportedOrientations:(unsigned long long)arg1 newSupportedOrientations:(unsigned long long)arg2 oldPreferredOrientation:(long long)arg3 newPreferredOrientation:(long long)arg4 animationSettings:(id)arg5 fenced:(_Bool)arg6;	// IMP=0x00000000004a9ec8
- (void)window:(id)arg1 didUpdateSupportedOrientations:(unsigned long long)arg2 preferredOrientation:(long long)arg3 prefersAnimation:(_Bool)arg4;	// IMP=0x00000000004a96a0
- (void)updateContainerBackgroundStyle;	// IMP=0x00000000004a969a
- (void)updateMultitaskingDragExclusionRects;	// IMP=0x00000000004a9230
- (void)updateWhitePointAdaptivityStyle;	// IMP=0x00000000004a910c
- (void)updateUserInterfaceStyle;	// IMP=0x00000000004a9055
- (void)updateScreenEdgesDeferringSystemGestures;	// IMP=0x00000000004a904f
- (void)updateHomeIndicatorAutoHidden;	// IMP=0x00000000004a9049
- (void)_windowDrivingSystemAppearanceDidChange:(id)arg1;	// IMP=0x00000000004a9032
- (void)_handleWindowVisibilityNotification:(id)arg1;	// IMP=0x00000000004a8d85
- (id)_findWindowDrivingSystemAppearance;	// IMP=0x00000000004a8a2b
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (void)dealloc;	// IMP=0x00000000004a8730
- (id)initWithScene:(id)arg1;	// IMP=0x00000000004a858e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

