//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNAvatarCardHighlightView, CNQuickAction, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIPageControl, UIView;

__attribute__((visibility("hidden")))
@interface CNAvatarCardActionCell : UITableViewCell
{
    struct CGPoint _initialLocation;	// 8 = 0x8
    struct CGPoint _lastLocation;	// 24 = 0x18
    _Bool _swipped;	// 40 = 0x28
    _Bool _moreHighlighted;	// 41 = 0x29
    _Bool _gestureActivated;	// 42 = 0x2a
    _Bool _transitioning;	// 43 = 0x2b
    CNQuickAction *_action;	// 48 = 0x30
    long long _context;	// 56 = 0x38
    long long _mode;	// 64 = 0x40
    UIImageView *_actionImageView;	// 72 = 0x48
    CNAvatarCardHighlightView *_defaultHighlightView;	// 80 = 0x50
    CNAvatarCardHighlightView *_moreHighlightView;	// 88 = 0x58
    UILabel *_titleLabel;	// 96 = 0x60
    UILabel *_subtitleLabel;	// 104 = 0x68
    UIPageControl *_pageControl;	// 112 = 0x70
    UILabel *_moreLabel;	// 120 = 0x78
    UIView *_translatingView;	// 128 = 0x80
    UIView *_separatorView;	// 136 = 0x88
    UIButton *_expandButton;	// 144 = 0x90
    NSLayoutConstraint *_punchOutLeftConstraint;	// 152 = 0x98
    NSLayoutConstraint *_translatingViewLeadingConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_pageControlLeadingConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_expandButtonWidthConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_moreHighlightViewHiddingConstraint;	// 184 = 0xb8
    double _initialTranslatingViewLeadingConstraintConstant;	// 192 = 0xc0
    unsigned long long _lastScrollDirection;	// 200 = 0xc8
    double _lastScrollDirectionTimestamp;	// 208 = 0xd0
}

+ (id)animatingCell;	// IMP=0x006000000004f418
+ (id)cellNibForContacts;	// IMP=0x006000000004f410
+ (id)cellNibForMode:(long long)arg1;	// IMP=0x006000000004f408
- (void).cxx_destruct;	// IMP=0x000000000005258e
@property(nonatomic) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) _Bool gestureActivated; // @synthesize gestureActivated=_gestureActivated;
@property(nonatomic) double lastScrollDirectionTimestamp; // @synthesize lastScrollDirectionTimestamp=_lastScrollDirectionTimestamp;
@property(nonatomic) unsigned long long lastScrollDirection; // @synthesize lastScrollDirection=_lastScrollDirection;
@property(nonatomic) double initialTranslatingViewLeadingConstraintConstant; // @synthesize initialTranslatingViewLeadingConstraintConstant=_initialTranslatingViewLeadingConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *moreHighlightViewHiddingConstraint; // @synthesize moreHighlightViewHiddingConstraint=_moreHighlightViewHiddingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandButtonWidthConstraint; // @synthesize expandButtonWidthConstraint=_expandButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pageControlLeadingConstraint; // @synthesize pageControlLeadingConstraint=_pageControlLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *translatingViewLeadingConstraint; // @synthesize translatingViewLeadingConstraint=_translatingViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *punchOutLeftConstraint; // @synthesize punchOutLeftConstraint=_punchOutLeftConstraint;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *translatingView; // @synthesize translatingView=_translatingView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CNAvatarCardHighlightView *moreHighlightView; // @synthesize moreHighlightView=_moreHighlightView;
@property(retain, nonatomic) CNAvatarCardHighlightView *defaultHighlightView; // @synthesize defaultHighlightView=_defaultHighlightView;
@property(retain, nonatomic) UIImageView *actionImageView; // @synthesize actionImageView=_actionImageView;
@property(nonatomic) _Bool moreHighlighted; // @synthesize moreHighlighted=_moreHighlighted;
@property(nonatomic) _Bool swipped; // @synthesize swipped=_swipped;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(retain, nonatomic) CNQuickAction *action; // @synthesize action=_action;
- (void)trackHighlight:(id)arg1;	// IMP=0x0000000000051ffd
- (void)_animateActions:(id)arg1 fromIndex:(unsigned long long)arg2 withDelta:(long long)arg3 scrollDirection:(unsigned long long)arg4;	// IMP=0x0000000000051880
- (void)trackSwipe:(id)arg1;	// IMP=0x0000000000051324
- (void)stopTrackingWithGestureRecognizer:(id)arg1;	// IMP=0x000000000005114e
- (void)startTrackingWithGestureRecognizer:(id)arg1;	// IMP=0x000000000005104a
- (void)reloadData;	// IMP=0x00000000000502e4
- (void)_updateHighlightAnimated:(_Bool)arg1;	// IMP=0x000000000004ff64
- (void)prepareForReuse;	// IMP=0x000000000004fec8
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004fbb0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000004fb99
- (void)awakeFromNib;	// IMP=0x000000000004f65b
- (void)_updateFonts;	// IMP=0x000000000004f50b

@end

