//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIActionSheet, UIColor, UIPopoverBackgroundView, UIPopoverController, _UIRoundedRectShadowView;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView
{
    UIView *_contentView;	// 160 = 0xa0
    UIPopoverBackgroundView *_backgroundView;	// 168 = 0xa8
    UIView *_clipView;	// 176 = 0xb0
    Class _backgroundViewClass;	// 184 = 0xb8
    _Bool _showsBackgroundComponentHighlights;	// 192 = 0xc0
    _Bool _showsBackgroundViewHighlight;	// 193 = 0xc1
    _Bool _showsContentViewHighlight;	// 194 = 0xc2
    _Bool _contentExtendsOverArrow;	// 195 = 0xc3
    _Bool _chromeHidden;	// 196 = 0xc4
    _Bool _chromeHiddenForSizeTransition;	// 197 = 0xc5
    double _customCornerRadius;	// 200 = 0xc8
    UIActionSheet *_presentedActionSheet;	// 208 = 0xd0
    UIPopoverController *_popoverController;	// 216 = 0xd8
    long long _backgroundBlurEffectStyle;	// 224 = 0xe0
    _UIRoundedRectShadowView *_shadowView;	// 232 = 0xe8
    double _animationOvershootHeight;	// 240 = 0xf0
    struct CGSize _contentSize;	// 248 = 0xf8
}

+ (id)popoverViewContainingView:(id)arg1;	// IMP=0x0060000001703838
- (void).cxx_destruct;	// IMP=0x000000000170587f
@property(nonatomic) double animationOvershootHeight; // @synthesize animationOvershootHeight=_animationOvershootHeight;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) _UIRoundedRectShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) _Bool chromeHiddenForSizeTransition; // @synthesize chromeHiddenForSizeTransition=_chromeHiddenForSizeTransition;
@property(nonatomic) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(nonatomic) long long backgroundBlurEffectStyle; // @synthesize backgroundBlurEffectStyle=_backgroundBlurEffectStyle;
@property(readonly, nonatomic) _Bool contentExtendsOverArrow; // @synthesize contentExtendsOverArrow=_contentExtendsOverArrow;
@property(nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIActionSheet *presentedActionSheet; // @synthesize presentedActionSheet=_presentedActionSheet;
@property(nonatomic, setter=_setCustomCornerRadius:) double _customCornerRadius; // @synthesize _customCornerRadius;
@property(nonatomic) _Bool showsContentViewHighlight; // @synthesize showsContentViewHighlight=_showsContentViewHighlight;
@property(nonatomic) _Bool showsBackgroundViewHighlight; // @synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight;
@property(nonatomic) _Bool showsBackgroundComponentHighlights; // @synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights;
- (void)_performBlockCheckingDefinesTintColor:(CDUnknownBlockType)arg1;	// IMP=0x0000000001705715
- (void)_hideArrow;	// IMP=0x00000000017056dd
- (void)_showArrow;	// IMP=0x00000000017056a5
- (void)_setCornerRadius:(double)arg1;	// IMP=0x00000000017055e1
- (void)_setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2;	// IMP=0x00000000017050ff
@property(copy, nonatomic) UIColor *arrowBackgroundColor;
@property(copy, nonatomic) UIColor *popoverBackgroundColor;
@property(nonatomic) long long backgroundStyle;
@property(nonatomic) unsigned long long arrowDirection;
@property(nonatomic) double arrowOffset;
- (void)_updateAlphaForChromeHidden;	// IMP=0x00000000017049ff
- (_Bool)_allowsCustomizationOfContent;	// IMP=0x00000000017049bf
- (void)_setPopoverContentView:(id)arg1;	// IMP=0x000000000170479f
- (struct CGRect)_snapshotBounds;	// IMP=0x00000000017046ad
- (id)standardChromeView;	// IMP=0x0000000001704655
- (id)backgroundView;	// IMP=0x0000000001704640
- (id)contentView;	// IMP=0x000000000170462b
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001704625
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000170461f
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001704619
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001704613
- (_Bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;	// IMP=0x000000000170460b
- (int)_style;	// IMP=0x0000000001704600
- (void)layoutSubviews;	// IMP=0x0000000001704097
- (struct UIEdgeInsets)safeAreaInsetsForContentView;	// IMP=0x000000000170401b
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000001703e26
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001703e12
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(_Bool)arg3 contentExtendsOverArrow:(_Bool)arg4;	// IMP=0x00000000017038cb
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2;	// IMP=0x00000000017038b4

@end

