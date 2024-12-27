//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNContact, CNContactFormatter, NSLayoutConstraint, UIGestureRecognizer, UILabel;
@protocol CNContactListBannerViewDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListBannerView : UIView
{
    id <CNContactListBannerViewDelegate> _delegate;	// 8 = 0x8
    UIView *_bottomSeparator;	// 16 = 0x10
    CNContactFormatter *_formatter;	// 24 = 0x18
    CNContact *_meContact;	// 32 = 0x20
    UIGestureRecognizer *_longPress;	// 40 = 0x28
    UIView *_avatarViewContainer;	// 48 = 0x30
    UIView *_avatarView;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UIView *_footnoteContainer;	// 72 = 0x48
    UILabel *_footnoteLabel;	// 80 = 0x50
    UILabel *_footnoteValueLabel;	// 88 = 0x58
    NSLayoutConstraint *_titleToPhotoVerticalConstraint;	// 96 = 0x60
    NSLayoutConstraint *_footnoteTitleToTitleVerticalConstraint;	// 104 = 0x68
    NSLayoutConstraint *_footnoteTitleToBottomVerticalConstraint;	// 112 = 0x70
    NSLayoutConstraint *_footnoteTitleToValueHorizontalSpaceConstraint;	// 120 = 0x78
}

+ (id)descriptorForRequiredKeys;	// IMP=0x0060000000052fc6
- (void).cxx_destruct;	// IMP=0x0000000000054bb1
@property(retain, nonatomic) NSLayoutConstraint *footnoteTitleToValueHorizontalSpaceConstraint; // @synthesize footnoteTitleToValueHorizontalSpaceConstraint=_footnoteTitleToValueHorizontalSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *footnoteTitleToBottomVerticalConstraint; // @synthesize footnoteTitleToBottomVerticalConstraint=_footnoteTitleToBottomVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *footnoteTitleToTitleVerticalConstraint; // @synthesize footnoteTitleToTitleVerticalConstraint=_footnoteTitleToTitleVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleToPhotoVerticalConstraint; // @synthesize titleToPhotoVerticalConstraint=_titleToPhotoVerticalConstraint;
@property(readonly, nonatomic) UILabel *footnoteValueLabel; // @synthesize footnoteValueLabel=_footnoteValueLabel;
@property(readonly, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(readonly, nonatomic) UIView *footnoteContainer; // @synthesize footnoteContainer=_footnoteContainer;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) UIView *avatarViewContainer; // @synthesize avatarViewContainer=_avatarViewContainer;
@property(readonly, nonatomic) UIGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(readonly, nonatomic) CNContactFormatter *formatter; // @synthesize formatter=_formatter;
@property(readonly, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(nonatomic) __weak id <CNContactListBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cellWasSingleTapped:(id)arg1;	// IMP=0x0000000000054980
- (void)cellWasLongPressed:(id)arg1;	// IMP=0x0000000000054930
- (void)showMenu;	// IMP=0x000000000005484c
- (void)menuDidHide:(id)arg1;	// IMP=0x00000000000547ef
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000547e7
- (void)copy:(id)arg1;	// IMP=0x0000000000054753
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000054717
- (void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3;	// IMP=0x0000000000054396
- (id)footnoteTextColor;	// IMP=0x00000000000541ae
- (id)footnoteFont;	// IMP=0x0000000000054120
- (_Bool)displaysContactInfo;	// IMP=0x00000000000540ed
- (void)updateFontRelatedConstraints;	// IMP=0x0000000000053e53
- (void)dealloc;	// IMP=0x0000000000053dde
- (id)init;	// IMP=0x00000000000530f5

@end

