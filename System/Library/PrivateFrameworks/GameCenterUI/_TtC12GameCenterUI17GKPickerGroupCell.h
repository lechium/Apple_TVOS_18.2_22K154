//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSLayoutConstraint, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol _TtP12GameCenterUI22GKPickerGroupCellProxy_;

@interface _TtC12GameCenterUI17GKPickerGroupCell
{
    MISSING_TYPE *container;	// 8 = 0x8
    MISSING_TYPE *messageIcon;	// 16 = 0x10
    MISSING_TYPE *iconContainer;	// 24 = 0x18
    MISSING_TYPE *ringView;	// 32 = 0x20
    MISSING_TYPE *titleLabel;	// 40 = 0x28
    MISSING_TYPE *subtitleLabel;	// 48 = 0x30
    MISSING_TYPE *nearbyIconContainer;	// 56 = 0x38
    MISSING_TYPE *nearbyIconVisualEffectView;	// 64 = 0x40
    MISSING_TYPE *nearbyIcon;	// 72 = 0x48
    MISSING_TYPE *longPressRecognizer;	// 80 = 0x50
    MISSING_TYPE *ringVibrancyView;	// 88 = 0x58
    MISSING_TYPE *iconContainerToTitleBaselineConstraint;	// 96 = 0x60
    MISSING_TYPE *iconContainerToTitleBaselineConstant;	// 104 = 0x68
    MISSING_TYPE *floatingView;	// 112 = 0x70
    MISSING_TYPE *playerGroupView;	// 120 = 0x78
    MISSING_TYPE *players;	// 128 = 0x80
    MISSING_TYPE *groupCellDelegate;	// 136 = 0x88
}

+ (id)reuseIdentifierAX;	// IMP=0x00400000002fbbdb
+ (id)reuseIdentifier;	// IMP=0x00400000002fbba4
- (void).cxx_destruct;	// IMP=0x00000000002fcdc5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002feb88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002fe9cd
- (void)prepareForReuse;	// IMP=0x00000000002fe247
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;	// IMP=0x00000000002fe0a6
- (void)handleLongPressWithSender:(id)arg1;	// IMP=0x00000000002fe05b
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x00000000002fde42
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 subtitle:(id)arg3 messagesGroupIdentifier:(id)arg4 source:(long long)arg5 playerSelectionProxy:(id)arg6;	// IMP=0x00000000002fdd14
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000002fd733
- (void)dealloc;	// IMP=0x00000000002fcda8
- (void)awakeFromNib;	// IMP=0x00000000002fcc38
@property(nonatomic) __weak id <_TtP12GameCenterUI22GKPickerGroupCellProxy_> groupCellDelegate; // @synthesize groupCellDelegate;
@property(nonatomic) __weak NSLayoutConstraint *iconContainerToTitleBaselineConstraint; // @synthesize iconContainerToTitleBaselineConstraint;
@property(nonatomic) __weak UIVisualEffectView *ringVibrancyView; // @synthesize ringVibrancyView;
@property(nonatomic) __weak UIImageView *nearbyIcon; // @synthesize nearbyIcon;
@property(nonatomic) __weak UIVisualEffectView *nearbyIconVisualEffectView; // @synthesize nearbyIconVisualEffectView;
@property(nonatomic) __weak UIView *nearbyIconContainer; // @synthesize nearbyIconContainer;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIView *ringView; // @synthesize ringView;
@property(nonatomic) __weak UIView *iconContainer; // @synthesize iconContainer;
@property(nonatomic) __weak UIImageView *messageIcon; // @synthesize messageIcon;
@property(nonatomic) __weak UIView *container; // @synthesize container;

@end

