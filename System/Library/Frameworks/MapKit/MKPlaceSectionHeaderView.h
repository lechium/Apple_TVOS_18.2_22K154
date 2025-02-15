//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKPlaceSectionItemView.h"

@class NSArray, NSLayoutConstraint, NSString, UIFont, UIImage, _MKRightImageButton, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView
{
    NSLayoutConstraint *_baselineToTopConstraint;	// 8 = 0x8
    NSLayoutConstraint *_baselineToBottomConstraint;	// 16 = 0x10
    NSLayoutConstraint *_baselineToBaselineConstraint;	// 24 = 0x18
    NSLayoutConstraint *_iconHeightConstraint;	// 32 = 0x20
    NSLayoutConstraint *_iconWidthConstraint;	// 40 = 0x28
    _Bool _contentChanged;	// 48 = 0x30
    double _width;	// 56 = 0x38
    _Bool _showSeeMoreButton;	// 64 = 0x40
    _Bool _seeMoreButtonAlwaysOnNewLine;	// 65 = 0x41
    NSString *_seeMoreButtonText;	// 72 = 0x48
    UIFont *_seeMoreButtonFont;	// 80 = 0x50
    NSString *_providerName;	// 88 = 0x58
    _MKUILabel *_sectionHeaderLabel;	// 96 = 0x60
    _MKRightImageButton *_seeMoreButton;	// 104 = 0x68
    NSArray *_seeMoreButtonConstraints;	// 112 = 0x70
    NSArray *_constraints;	// 120 = 0x78
    SEL _action;	// 128 = 0x80
    id _target;	// 136 = 0x88
    struct CGSize _iconDisplaySize;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000005e23
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSArray *seeMoreButtonConstraints; // @synthesize seeMoreButtonConstraints=_seeMoreButtonConstraints;
@property(retain, nonatomic) _MKRightImageButton *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
@property(retain, nonatomic) _MKUILabel *sectionHeaderLabel; // @synthesize sectionHeaderLabel=_sectionHeaderLabel;
@property(nonatomic) _Bool seeMoreButtonAlwaysOnNewLine; // @synthesize seeMoreButtonAlwaysOnNewLine=_seeMoreButtonAlwaysOnNewLine;
@property(nonatomic) _Bool showSeeMoreButton; // @synthesize showSeeMoreButton=_showSeeMoreButton;
@property(nonatomic) struct CGSize iconDisplaySize; // @synthesize iconDisplaySize=_iconDisplaySize;
@property(retain, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(retain, nonatomic) UIFont *seeMoreButtonFont; // @synthesize seeMoreButtonFont=_seeMoreButtonFont;
@property(retain, nonatomic) NSString *title;
- (void)setTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000005aa0
@property(retain, nonatomic) UIImage *icon;
@property(retain, nonatomic) NSString *seeMoreButtonText; // @synthesize seeMoreButtonText=_seeMoreButtonText;
- (void)updateConstraints;	// IMP=0x0000000000005570
- (void)updateContent;	// IMP=0x00000000000054d0
- (void)createConstraints;	// IMP=0x00000000000046c2
- (_Bool)shouldStack;	// IMP=0x0000000000004358
- (void)_updateConstraints;	// IMP=0x000000000000401f
- (void)contentSizeDidChange;	// IMP=0x000000000000400e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000003d01

@end

