//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSString, TVSPRenderer, UIView, _UIFloatingContentView;
@protocol _TVSPRendererHostingViewDelegate;

__attribute__((visibility("hidden")))
@interface _TVSPRendererHostingView : UIControl
{
    _Bool _ignoreFocusUpdates;	// 8 = 0x8
    TVSPRenderer *_renderer;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    _UIFloatingContentView *_floatingContentView;	// 32 = 0x20
    id <_TVSPRendererHostingViewDelegate> _delegate;	// 40 = 0x28
    double _overrideCornerRadius;	// 48 = 0x30
    NSString *_accessibilityIdentifier;	// 56 = 0x38
    UIView *_backgroundColorView;	// 64 = 0x40
    struct CGAffineTransform _selectionUpTransform;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003ab70
@property(nonatomic) struct CGAffineTransform selectionUpTransform; // @synthesize selectionUpTransform=_selectionUpTransform;
@property(retain, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) double overrideCornerRadius; // @synthesize overrideCornerRadius=_overrideCornerRadius;
@property(nonatomic) _Bool ignoreFocusUpdates; // @synthesize ignoreFocusUpdates=_ignoreFocusUpdates;
@property(nonatomic) __weak id <_TVSPRendererHostingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) TVSPRenderer *renderer; // @synthesize renderer=_renderer;
- (id)_contextMenuConfiguration;	// IMP=0x000000000003a810
- (void)_updateForUserInterfaceStyleChange;	// IMP=0x000000000003a6b0
- (_Bool)_hasConfiguredBackgroundMaterialStyle;	// IMP=0x000000000003a640
- (void)_updateFloatingContentView:(id)arg1 withCornerRadius:(double)arg2;	// IMP=0x000000000003a370
- (void)_updateFloatingContentViewControlStateAnimated:(_Bool)arg1 ignoringHighlightedState:(_Bool)arg2;	// IMP=0x000000000003a230
- (void)_updateFloatingContentViewControlStateAnimated:(_Bool)arg1;	// IMP=0x000000000003a1f0
- (id)_floatingContentViewBackgroundColorForControlState:(unsigned long long)arg1;	// IMP=0x000000000003a170
- (void)_resetFloatingContentViewForControlState:(unsigned long long)arg1;	// IMP=0x000000000003a110
- (id)_configuredFloatingContentViewWithBounds:(struct CGRect)arg1;	// IMP=0x0000000000039e50
- (double)_configuredCornerRadius;	// IMP=0x0000000000039d90
- (void)_configureBackgroundColorViewForDisabled:(_Bool)arg1;	// IMP=0x0000000000039cb0
- (void)_configure;	// IMP=0x0000000000038ea0
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000038da0
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000038ca0
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000038be0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000389a0
- (_Bool)canBecomeFocused;	// IMP=0x00000000000388d0
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x0000000000038780
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000038650
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000038580
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000384b0
- (void)renderer:(id)arg1 didUpdateDisabledState:(_Bool)arg2;	// IMP=0x00000000000383b0
- (void)rendererWasUpdated:(id)arg1;	// IMP=0x0000000000038290
- (void)animateShadowFadeInWithAnimator:(id)arg1;	// IMP=0x0000000000037fe0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000037ef0
@property(readonly, nonatomic) NSString *identifier;
- (void)updateFrame:(struct CGRect)arg1;	// IMP=0x0000000000037d20
- (id)initWithRenderer:(id)arg1 frame:(struct CGRect)arg2 delegate:(id)arg3;	// IMP=0x0000000000037b00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

