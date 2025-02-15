//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class ASCArtworkView, ASCLabelPillOverlayView, ASCLockupDisplayContext, ASCOfferTheme, ASCSkeletonLabel, NSString, UIColor, UIView;
@protocol ASCLockupTheme;

__attribute__((visibility("hidden")))
@interface ASCLockupContentView : UIControl
{
    _Bool _useFocusedAppearance;	// 8 = 0x8
    NSString *_lockupSize;	// 16 = 0x10
    ASCOfferTheme *_offerTheme;	// 24 = 0x18
    id <ASCLockupTheme> _lockupTheme;	// 32 = 0x20
    ASCLockupDisplayContext *_displayContext;	// 40 = 0x28
    ASCArtworkView *_iconArtworkView;	// 48 = 0x30
    ASCSkeletonLabel *_titleLabel;	// 56 = 0x38
    ASCSkeletonLabel *_subtitleLabel;	// 64 = 0x40
    ASCLabelPillOverlayView *_headingLabelIfLoaded;	// 72 = 0x48
    UIView *_badgeView;	// 80 = 0x50
}

+ (_Bool)offerButtonShouldExpandBackgroundForSize:(id)arg1;	// IMP=0x0010000000026db6
+ (double)offerButtonTopPaddingForSize:(id)arg1;	// IMP=0x0010000000026dad
+ (_Bool)offerButtonShouldTopAlignForSize:(id)arg1;	// IMP=0x0010000000026d3b
+ (_Bool)isOfferButtonFixedHeightForSize:(id)arg1;	// IMP=0x0010000000026cfd
+ (_Bool)isSmallOfferButtonLockupForSize:(id)arg1;	// IMP=0x0010000000026c60
- (void).cxx_destruct;	// IMP=0x0000000000028da3
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) ASCLabelPillOverlayView *headingLabelIfLoaded; // @synthesize headingLabelIfLoaded=_headingLabelIfLoaded;
@property(nonatomic) _Bool useFocusedAppearance; // @synthesize useFocusedAppearance=_useFocusedAppearance;
@property(readonly, nonatomic) ASCSkeletonLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) ASCSkeletonLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) ASCArtworkView *iconArtworkView; // @synthesize iconArtworkView=_iconArtworkView;
@property(readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
@property(retain, nonatomic) id <ASCLockupTheme> lockupTheme; // @synthesize lockupTheme=_lockupTheme;
@property(copy, nonatomic) ASCOfferTheme *offerTheme; // @synthesize offerTheme=_offerTheme;
@property(retain, nonatomic) NSString *lockupSize; // @synthesize lockupSize=_lockupSize;
@property(readonly, copy) NSString *description;
- (void)offerButton:(id)arg1 willTransitionToMetadata:(id)arg2 usingAnimator:(id)arg3;	// IMP=0x00000000000289a4
- (void)endOfferModalState;	// IMP=0x000000000002899e
- (void)beginOfferModalStateWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028998
- (void)setOfferStatus:(id)arg1;	// IMP=0x0000000000028992
- (void)setOfferInteractive:(_Bool)arg1;	// IMP=0x000000000002898c
- (void)setOfferEnabled:(_Bool)arg1;	// IMP=0x0000000000028986
- (void)setOfferMetadata:(id)arg1;	// IMP=0x000000000002897a
- (id)saveOfferState;	// IMP=0x0000000000028972
- (void)setDisplayContext:(id)arg1;	// IMP=0x00000000000288f0
- (void)setLoading:(_Bool)arg1;	// IMP=0x000000000002879e
- (void)setPrefersRightToLeftLayout:(_Bool)arg1;	// IMP=0x0000000000028774
- (void)setBadge:(id)arg1;	// IMP=0x000000000002865e
- (void)setSubtitle:(id)arg1;	// IMP=0x00000000000285ef
- (void)setTitle:(id)arg1;	// IMP=0x0000000000028580
- (void)setHeading:(id)arg1;	// IMP=0x00000000000283f1
- (void)setIconImage:(id)arg1 withDecoration:(id)arg2;	// IMP=0x000000000002832a
- (void)removeOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000028191
- (void)addOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000002818b
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000280b6
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000027fd2
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000027efa
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000027d28
- (void)onPreferredContentSizeCategoryChange;	// IMP=0x0000000000027cda
- (void)layoutSubviews;	// IMP=0x0000000000027bcf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000027a67
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000027a45
- (void)invalidateIntrinsicContentSize;	// IMP=0x00000000000279c4
- (double)minimumLockupHeight;	// IMP=0x0000000000027974
- (id)makeLayout;	// IMP=0x0000000000027896
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000027793
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000002771e
@property(copy, nonatomic) UIColor *loadingColor;
@property(readonly, nonatomic) struct CGSize preferredIconSize;
@property(readonly, nonatomic) ASCLabelPillOverlayView *headingLabel;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027342
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027317
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000026f35
- (_Bool)shouldHideBadge;	// IMP=0x0000000000026f23
- (_Bool)shouldHideOfferStatus;	// IMP=0x0000000000026eea
- (_Bool)shouldHideSubtitle;	// IMP=0x0000000000026e1d
- (_Bool)shouldHideTitle;	// IMP=0x0000000000026e0b
- (_Bool)shouldHideHeading;	// IMP=0x0000000000026dd5
- (_Bool)shouldHideIconArtwork;	// IMP=0x0000000000026dc3
- (_Bool)isMiniLockup;	// IMP=0x0000000000026cc2
- (_Bool)isSmallOfferButtonOnlyLockup;	// IMP=0x0000000000026c6d
@property(readonly, nonatomic) _Bool isOfferButtonOnlyLockup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

