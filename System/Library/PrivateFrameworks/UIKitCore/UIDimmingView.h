//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableSet, NSString, UIBarButtonItem, UIBlurEffect, UIColor, UIEvent, UIImageView, UITapGestureRecognizer;
@protocol UIDimmingViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView
{
    UIBarButtonItem *_highlightedBarButtonItem;	// 160 = 0xa0
    UIImageView *_highlightedImageView;	// 168 = 0xa8
    UIImageView *_backgroundGlow;	// 176 = 0xb0
    NSArray *_passthroughViews;	// 184 = 0xb8
    _Bool _ignoresTouches;	// 192 = 0xc0
    _Bool _inPassthroughHitTest;	// 193 = 0xc1
    UIColor *_dimmingColor;	// 200 = 0xc8
    UITapGestureRecognizer *_singleFingerTapRecognizer;	// 208 = 0xd0
    UIEvent *_observedEventForAdditionalGestures;	// 216 = 0xd8
    NSMutableSet *_additionalEventGestureRecognizers;	// 224 = 0xe0
    _Bool _suppressesBackdrops;	// 232 = 0xe8
    id <UIDimmingViewDelegate> _delegate;	// 240 = 0xf0
    double _percentDisplayed;	// 248 = 0xf8
    double _percentLightened;	// 256 = 0x100
    UIBlurEffect *_blurEffect;	// 264 = 0x108
    NSArray *_lowerWindowDismissalGestureViews;	// 272 = 0x110
}

+ (id)defaultDimmingColor;	// IMP=0x00100000016756df
- (void).cxx_destruct;	// IMP=0x00000000016779ed
@property(copy, nonatomic) NSArray *lowerWindowDismissalGestureViews; // @synthesize lowerWindowDismissalGestureViews=_lowerWindowDismissalGestureViews;
@property(retain, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
@property(nonatomic) double percentLightened; // @synthesize percentLightened=_percentLightened;
@property(nonatomic) double percentDisplayed; // @synthesize percentDisplayed=_percentDisplayed;
@property(nonatomic) _Bool suppressesBackdrops; // @synthesize suppressesBackdrops=_suppressesBackdrops;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property(nonatomic) _Bool ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) __weak id <UIDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isTransparentFocusItem;	// IMP=0x00000000016777f8
- (id)_gestureRecognizersForEvent:(id)arg1;	// IMP=0x0000000001677797
- (void)_clearAdditionalEventGestures;	// IMP=0x0000000001677747
- (void)_queueAdditionalEventGesturesFromView:(id)arg1;	// IMP=0x00000000016775fb
- (void)_sendDelegateDimmingViewWasTapped;	// IMP=0x0000000001677571
- (void)_simulateTap;	// IMP=0x0000000001677550
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001677517
- (void)handleSingleTap:(id)arg1;	// IMP=0x00000000016774db
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000001677446
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x0000000001677077
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001676856
- (void)mouseUp:(struct __GSEvent *)arg1;	// IMP=0x0000000001676844
- (void)updateBackgroundColor;	// IMP=0x0000000001676518
- (void)updateBackground;	// IMP=0x0000000001676506
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000016764c5
- (void)display:(_Bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;	// IMP=0x0000000001676256
- (void)display:(_Bool)arg1;	// IMP=0x0000000001676066
@property(nonatomic) _Bool hitTestsAsOpaque;
@property(readonly, nonatomic) _Bool displayed;
- (id)_backdropViewsToAnimate;	// IMP=0x0000000001675cea
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
- (void)dimmingRemovalAnimationDidStop;	// IMP=0x000000000167589b
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000001675890
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000167584f
- (void)dealloc;	// IMP=0x0000000001675804
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000016756f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

