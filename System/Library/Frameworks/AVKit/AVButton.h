//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class AVLayoutItemAttributes, AVMicaPackage, AVUserInteractionObserverGestureRecognizer, NSNumber, NSString, NSTimer, UIFont, UIView, UIViewPropertyAnimator, UIVisualEffectView;
@protocol AVButtonDelegate;

__attribute__((visibility("hidden")))
@interface AVButton : UIButton
{
    NSString *_accessibilityLabelOverride;	// 8 = 0x8
    _Bool _disablesHighlightAnimation;	// 16 = 0x10
    _Bool _collapsed;	// 17 = 0x11
    _Bool _included;	// 18 = 0x12
    _Bool _removed;	// 19 = 0x13
    _Bool _hasFullScreenAppearance;	// 20 = 0x14
    _Bool _hasAlternateAppearance;	// 21 = 0x15
    _Bool _wasLongPressed;	// 22 = 0x16
    _Bool _treatsForcePressAsLongPress;	// 23 = 0x17
    _Bool _usesBackgroundEffectViewForTextOnlyButtons;	// 24 = 0x18
    _Bool _multipleTouchesEndsTracking;	// 25 = 0x19
    _Bool _appliesTransformToImageViewWhenHighlighted;	// 26 = 0x1a
    _Bool _disablesHighlightWhenLongPressed;	// 27 = 0x1b
    _Bool _clampsHitRectInsetsWhenContainedInScrollableView;	// 28 = 0x1c
    _Bool _buttonIsOverVideo;	// 29 = 0x1d
    _Bool _wasForcePressTriggered;	// 30 = 0x1e
    _Bool _secondGeneration;	// 31 = 0x1f
    AVLayoutItemAttributes *_layoutAttributes;	// 32 = 0x20
    long long _tintEffectStyle;	// 40 = 0x28
    double _forceThreshold;	// 48 = 0x30
    double _force;	// 56 = 0x38
    double _maximumForceSinceTrackingBegan;	// 64 = 0x40
    NSString *_activeImageName;	// 72 = 0x48
    NSString *_imageName;	// 80 = 0x50
    NSString *_alternateImageName;	// 88 = 0x58
    double _alternateImagePadding;	// 96 = 0x60
    double _fullscreenAlternateImagePadding;	// 104 = 0x68
    UIView *_transformTargetView;	// 112 = 0x70
    UIFont *_inlineFont;	// 120 = 0x78
    UIFont *_fullScreenFont;	// 128 = 0x80
    UIFont *_alternateFullScreenFont;	// 136 = 0x88
    AVMicaPackage *_micaPackage;	// 144 = 0x90
    double _micaSnapshotAlpha;	// 152 = 0x98
    id <AVButtonDelegate> _delegate;	// 160 = 0xa0
    UIViewPropertyAnimator *_highlightAnimator;	// 168 = 0xa8
    double _trackingStartTime;	// 176 = 0xb0
    double _horizontalTranslationOfLongPress;	// 184 = 0xb8
    NSNumber *_previousHorizontalPositionOfLongPress;	// 192 = 0xc0
    NSTimer *_longPressTimer;	// 200 = 0xc8
    AVUserInteractionObserverGestureRecognizer *_userInteractionGestureRecognizer;	// 208 = 0xd0
    UIVisualEffectView *_backgroundEffectView;	// 216 = 0xd8
    UIFont *_activeFont;	// 224 = 0xe0
    struct CGSize _extrinsicContentSize;	// 232 = 0xe8
    struct CGRect _contentIntersection;	// 248 = 0xf8
    struct NSDirectionalEdgeInsets _hitRectInsets;	// 280 = 0x118
}

+ (id)buttonWithAccessibilityIdentifier:(id)arg1 accessibilityLabel:(id)arg2 isSecondGeneration:(_Bool)arg3;	// IMP=0x00100000000daaaa
+ (id)buttonWithAccessibilityIdentifier:(id)arg1 isSecondGeneration:(_Bool)arg2;	// IMP=0x00100000000daa49
+ (id)customHighlightedAnimationButtonWithAccessibilityIdentifier:(id)arg1;	// IMP=0x00100000000da9e8
- (void).cxx_destruct;	// IMP=0x00000000000d9aa7
@property(nonatomic, getter=isSecondGeneration) _Bool secondGeneration; // @synthesize secondGeneration=_secondGeneration;
@property(retain, nonatomic) UIFont *activeFont; // @synthesize activeFont=_activeFont;
@property(retain, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(retain, nonatomic) AVUserInteractionObserverGestureRecognizer *userInteractionGestureRecognizer; // @synthesize userInteractionGestureRecognizer=_userInteractionGestureRecognizer;
@property(nonatomic) __weak NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(retain, nonatomic) NSNumber *previousHorizontalPositionOfLongPress; // @synthesize previousHorizontalPositionOfLongPress=_previousHorizontalPositionOfLongPress;
@property(nonatomic) double horizontalTranslationOfLongPress; // @synthesize horizontalTranslationOfLongPress=_horizontalTranslationOfLongPress;
@property(nonatomic) _Bool wasForcePressTriggered; // @synthesize wasForcePressTriggered=_wasForcePressTriggered;
@property(nonatomic) double trackingStartTime; // @synthesize trackingStartTime=_trackingStartTime;
@property(nonatomic) __weak UIViewPropertyAnimator *highlightAnimator; // @synthesize highlightAnimator=_highlightAnimator;
@property(nonatomic) __weak id <AVButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isButtonOverVideo) _Bool buttonIsOverVideo; // @synthesize buttonIsOverVideo=_buttonIsOverVideo;
@property(nonatomic) _Bool clampsHitRectInsetsWhenContainedInScrollableView; // @synthesize clampsHitRectInsetsWhenContainedInScrollableView=_clampsHitRectInsetsWhenContainedInScrollableView;
@property(nonatomic) struct NSDirectionalEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(nonatomic) _Bool disablesHighlightWhenLongPressed; // @synthesize disablesHighlightWhenLongPressed=_disablesHighlightWhenLongPressed;
@property(nonatomic) double micaSnapshotAlpha; // @synthesize micaSnapshotAlpha=_micaSnapshotAlpha;
@property(retain, nonatomic) AVMicaPackage *micaPackage; // @synthesize micaPackage=_micaPackage;
@property(retain, nonatomic) UIFont *alternateFullScreenFont; // @synthesize alternateFullScreenFont=_alternateFullScreenFont;
@property(retain, nonatomic) UIFont *fullScreenFont; // @synthesize fullScreenFont=_fullScreenFont;
@property(retain, nonatomic) UIFont *inlineFont; // @synthesize inlineFont=_inlineFont;
@property(readonly, nonatomic) UIView *transformTargetView; // @synthesize transformTargetView=_transformTargetView;
@property(nonatomic) _Bool appliesTransformToImageViewWhenHighlighted; // @synthesize appliesTransformToImageViewWhenHighlighted=_appliesTransformToImageViewWhenHighlighted;
@property(nonatomic) double fullscreenAlternateImagePadding; // @synthesize fullscreenAlternateImagePadding=_fullscreenAlternateImagePadding;
@property(nonatomic) double alternateImagePadding; // @synthesize alternateImagePadding=_alternateImagePadding;
@property(copy, nonatomic) NSString *alternateImageName; // @synthesize alternateImageName=_alternateImageName;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *activeImageName; // @synthesize activeImageName=_activeImageName;
@property(nonatomic) _Bool multipleTouchesEndsTracking; // @synthesize multipleTouchesEndsTracking=_multipleTouchesEndsTracking;
@property(nonatomic) double maximumForceSinceTrackingBegan; // @synthesize maximumForceSinceTrackingBegan=_maximumForceSinceTrackingBegan;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) double forceThreshold; // @synthesize forceThreshold=_forceThreshold;
@property(nonatomic) _Bool usesBackgroundEffectViewForTextOnlyButtons; // @synthesize usesBackgroundEffectViewForTextOnlyButtons=_usesBackgroundEffectViewForTextOnlyButtons;
@property(nonatomic) long long tintEffectStyle; // @synthesize tintEffectStyle=_tintEffectStyle;
@property(nonatomic) _Bool treatsForcePressAsLongPress; // @synthesize treatsForcePressAsLongPress=_treatsForcePressAsLongPress;
@property(nonatomic) _Bool wasLongPressed; // @synthesize wasLongPressed=_wasLongPressed;
@property(nonatomic) struct CGRect contentIntersection; // @synthesize contentIntersection=_contentIntersection;
@property(readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)_handleUserInteractionGestureRecognizer:(id)arg1;	// IMP=0x00000000000d94a5
- (void)interruptActiveInteractions;	// IMP=0x00000000000d9468
- (void)layoutAttributesDidChange;	// IMP=0x00000000000d92c4
- (void)layoutSubviews;	// IMP=0x00000000000d91d9
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000d90e5
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000d9096
- (struct CGRect)hitRect;	// IMP=0x00000000000d8f95
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000d8d8b
- (id)accessibilityLabel;	// IMP=0x00000000000d8d35
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000000d8b9f
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000000d8785
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x00000000000d8717
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000d86a9
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000d83eb
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000d8229
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000d8022
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000d7f07
- (double)baselineOffsetFromBottom;	// IMP=0x00000000000d7dfb
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000000d7158
- (struct CGSize)minimumSize;	// IMP=0x00000000000d7146
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
@property(readonly, nonatomic) UIView *pointerTargetView;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

