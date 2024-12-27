//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIKeyboardLayoutAlignmentView : UIView
{
    struct CGRect lastKnownKeyboardRect;	// 8 = 0x8
    NSLayoutConstraint *bottomConstraint;	// 40 = 0x28
    NSLayoutConstraint *widthConstraint;	// 48 = 0x30
    NSLayoutConstraint *heightConstraint;	// 56 = 0x38
    NSLayoutConstraint *disambiguatingLeftConstraint;	// 64 = 0x40
    _Bool _automaticKeyboardFrameTrackingDisabled;	// 72 = 0x48
}

+ (struct CGRect)_endFrameForNotification:(id)arg1 inView:(id)arg2;	// IMP=0x0060000000a6d5a3
+ (_Bool)_shouldIgnoreFrameChangeNotification:(id)arg1 inView:(id)arg2;	// IMP=0x0060000000a6d446
+ (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x0060000000a6d13b
- (void).cxx_destruct;	// IMP=0x0000000000a6e3d6
@property(nonatomic) _Bool automaticKeyboardFrameTrackingDisabled; // @synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;	// IMP=0x0000000000a6e330
- (void)_stopObservingKeyboardNotifications;	// IMP=0x0000000000a6e2d0
- (void)dealloc;	// IMP=0x0000000000a6e292
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a6e21c
- (void)_removeConstraints;	// IMP=0x0000000000a6e158
- (void)_matchInitialKeyboardFrame;	// IMP=0x0000000000a6e058
- (void)_createConstraints;	// IMP=0x0000000000a6de1b
- (void)didMoveToWindow;	// IMP=0x0000000000a6dded
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000a6dd6e
- (void)_keyboardChanged:(id)arg1;	// IMP=0x0000000000a6dd5c
- (void)_updateConstraintsForKeyboardNotification:(id)arg1;	// IMP=0x0000000000a6d7f1
- (_Bool)_shouldOverrideAnimationForFrameChangeNotification:(id)arg1;	// IMP=0x0000000000a6d528
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect)arg1;	// IMP=0x0000000000a6d349
- (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1;	// IMP=0x0000000000a6d2ea

@end

