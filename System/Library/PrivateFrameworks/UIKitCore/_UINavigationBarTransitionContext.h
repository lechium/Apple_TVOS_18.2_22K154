//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, UINavigationBar, UIView, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarItemStack, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarLayout, _UINavigationBarModernPromptView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContext : NSObject
{
    UINavigationBar *_navigationBar;	// 8 = 0x8
    _UINavigationBarItemStack *_stack;	// 16 = 0x10
    _UINavigationBarModernPromptView *_promptView;	// 24 = 0x18
    _UINavigationBarContentView *_contentView;	// 32 = 0x20
    _UIBarBackground *_backgroundView;	// 40 = 0x28
    _UINavigationBarLargeTitleView *_largeTitleView;	// 48 = 0x30
    UIView *_tabBarHostedView;	// 56 = 0x38
    UIView *_transitionOverlayView;	// 64 = 0x40
    _UINavigationBarLayout *_fromLayout;	// 72 = 0x48
    _UINavigationBarLayout *_toLayout;	// 80 = 0x50
    _UINavigationBarContentViewLayout *_fromContentLayout;	// 88 = 0x58
    _UINavigationBarContentViewLayout *_toContentLayout;	// 96 = 0x60
    _UINavigationBarLargeTitleViewLayout *_fromLargeTitleLayout;	// 104 = 0x68
    _UINavigationBarLargeTitleViewLayout *_toLargeTitleLayout;	// 112 = 0x70
    double _backgroundAlpha;	// 120 = 0x78
    double _twoPartAnimationBaseDuration;	// 128 = 0x80
    double _twoPartAnimationOverlapDuration;	// 136 = 0x88
    long long _largeTitleTransitionType;	// 144 = 0x90
    long long _apiVersion;	// 152 = 0x98
    struct {
        unsigned int isPushOperation:1;
        unsigned int isRTL:1;
        unsigned int compact:1;
        unsigned int allowLargeTitles:1;
        unsigned int twoPart:1;
        unsigned int beginWithLargeTitle:1;
        unsigned int endWithLargeTitle:1;
        unsigned int observedScrollViewOffsetIsApplicable:1;
        unsigned int sharesContentViewLayouts:1;
        unsigned int beginWithTransparencyAllowed:1;
        unsigned int endWithTransparencyAllowed:1;
        unsigned int usesBarBackground:1;
    } _flags;	// 160 = 0xa0
    NSMutableSet *_clippingViews;	// 168 = 0xa8
    CDUnknownBlockType _completionHandler;	// 176 = 0xb0
    struct CGPoint _startingContentOffsetForObservedScrollView;	// 184 = 0xb8
}

+ (id)fadeOutFunction;	// IMP=0x00400000003d8c22
+ (id)fadeInFunction;	// IMP=0x00400000003d8ba7
+ (id)contextForTransition:(long long)arg1 withIdiom:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00400000003d7e1a
- (void).cxx_destruct;	// IMP=0x00000000003d98c2
@property(retain, nonatomic) UIView *transitionOverlayView; // @synthesize transitionOverlayView=_transitionOverlayView;
@property(retain, nonatomic) _UINavigationBarLayout *toLayout; // @synthesize toLayout=_toLayout;
@property(retain, nonatomic) _UINavigationBarLayout *fromLayout; // @synthesize fromLayout=_fromLayout;
@property(nonatomic) struct CGPoint startingContentOffsetForObservedScrollView; // @synthesize startingContentOffsetForObservedScrollView=_startingContentOffsetForObservedScrollView;
@property(retain, nonatomic) UIView *tabBarHostedView; // @synthesize tabBarHostedView=_tabBarHostedView;
@property(retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property(readonly, nonatomic) _UIBarBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UINavigationBarModernPromptView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) _UINavigationBarItemStack *stack; // @synthesize stack=_stack;
@property(nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_updateIncomingLayoutWidthToMatchOutgoingLayout;	// IMP=0x00000000003d971f
- (void)_animateAsTwoPartsWithoutOverlap:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d9705
- (void)_animateInProcessAsTwoPartsWithOverlapIfNecessaryWithKeyframeID:(id)arg1 fractionComplete:(double)arg2 partOne:(CDUnknownBlockType)arg3 partTwo:(CDUnknownBlockType)arg4;	// IMP=0x00000000003d964c
- (void)_animateAsTwoPartsWithOverlapIfNecessaryPartOne:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d95c3
- (void)_animateInProcessAsTwoPartsWithKeyframeID:(id)arg1 overlap:(double)arg2 partOne:(CDUnknownBlockType)arg3 partTwo:(CDUnknownBlockType)arg4;	// IMP=0x00000000003d9344
- (void)_animateAsTwoPartsWithOverlap:(double)arg1 partOne:(CDUnknownBlockType)arg2 partTwo:(CDUnknownBlockType)arg3;	// IMP=0x00000000003d915d
- (unsigned long long)_animationOptions;	// IMP=0x00000000003d913b
@property(readonly, nonatomic) UIView *viewUsingEaseInCurve;
@property(readonly, nonatomic) UIView *viewFadingInFromCustomAlpha;
- (CDUnknownBlockType)prepareForInterruption;	// IMP=0x00000000003d8ae5
- (void)cancel;	// IMP=0x00000000003d8a3f
- (void)complete;	// IMP=0x00000000003d8775
- (void)_resetContentAndLargeTitleViewCompleted:(_Bool)arg1;	// IMP=0x00000000003d8726
- (void)setAllLargeTitleLayoutsVisible;	// IMP=0x00000000003d86e7
- (void)animate;	// IMP=0x00000000003d86d5
- (void)_animateBackgroundView;	// IMP=0x00000000003d84c5
- (_Bool)shouldPerformTwoPartCrossfadeTransition;	// IMP=0x00000000003d847b
- (void)_animateFromPalette:(id)arg1 fromPaletteFrame:(struct CGRect)arg2 toPalette:(id)arg3 toPaletteFrame:(struct CGRect)arg4;	// IMP=0x00000000003d8475
- (void)_prepareTransitionFromPalette:(id)arg1 toPalette:(id)arg2 toPaletteFrame:(struct CGRect)arg3;	// IMP=0x00000000003d846f
- (void)prepare;	// IMP=0x00000000003d836e
- (void)recordUpdates:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d7fd8
- (_Bool)shouldSlideBarBackground;	// IMP=0x00000000003d7dc9
- (id)description;	// IMP=0x00000000003d7d3f
- (void)setBackgroundView:(id)arg1 isBarBackground:(_Bool)arg2;	// IMP=0x00000000003d7d09
@property(nonatomic, setter=setPushOperation:) _Bool isPushOperation;
@property(nonatomic) _Bool endWithTransparencyAllowed;
@property(nonatomic) _Bool beginWithTransparencyAllowed;
@property(nonatomic) _Bool sharesContentViewLayouts;
@property(nonatomic) _Bool observedScrollViewOffsetIsApplicable;
@property(nonatomic) _Bool endWithLargeTitle;
@property(nonatomic) _Bool beginWithLargeTitle;
@property(nonatomic) _Bool twoPart;
@property(nonatomic) _Bool allowLargeTitles;
@property(nonatomic) _Bool compact;
@property(nonatomic, setter=setRTL:) _Bool isRTL;

// Remaining properties
@property(readonly, nonatomic) long long transition; // @dynamic transition;

@end

