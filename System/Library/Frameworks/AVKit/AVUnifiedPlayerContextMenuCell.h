//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView, _UIFloatingContentView;
@protocol AVxOverlayInteractionAssistant;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerContextMenuCell : UICollectionViewCell
{
    _Bool _destructive;	// 8 = 0x8
    unsigned long long _layout;	// 16 = 0x10
    id <AVxOverlayInteractionAssistant> _interactionAssistant;	// 24 = 0x18
    _UIFloatingContentView *_floatingContentView;	// 32 = 0x20
    UIView *_stackView;	// 40 = 0x28
    UILabel *_label;	// 48 = 0x30
    UILabel *_secondaryLabel;	// 56 = 0x38
    UIImageView *_leadingImageView;	// 64 = 0x40
    UIImageView *_trailingImageView;	// 72 = 0x48
    UIImageView *_disclosureIndicatorImageView;	// 80 = 0x50
    UIView *_leadingSpacerView;	// 88 = 0x58
    UIView *_trailingSpacerView;	// 96 = 0x60
    UIView *_disclosureIndicatorSpacerView;	// 104 = 0x68
}

+ (struct CGSize)_disclosureIndicatorSize;	// IMP=0x00600000001682d7
+ (id)_disclosureIndicatorImage;	// IMP=0x00600000001682a7
+ (id)_checkmarkImage;	// IMP=0x0060000000168277
+ (Class)classForFocusableCollectionView;	// IMP=0x0060000000168266
+ (Class)classForClippedCollectionView;	// IMP=0x0060000000168255
- (void).cxx_destruct;	// IMP=0x0000000000168175
@property(readonly, nonatomic) UIView *disclosureIndicatorSpacerView; // @synthesize disclosureIndicatorSpacerView=_disclosureIndicatorSpacerView;
@property(readonly, nonatomic) UIView *trailingSpacerView; // @synthesize trailingSpacerView=_trailingSpacerView;
@property(readonly, nonatomic) UIView *leadingSpacerView; // @synthesize leadingSpacerView=_leadingSpacerView;
@property(readonly, nonatomic) UIImageView *disclosureIndicatorImageView; // @synthesize disclosureIndicatorImageView=_disclosureIndicatorImageView;
@property(readonly, nonatomic) UIImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(readonly, nonatomic) UIImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
@property(nonatomic) unsigned long long layout; // @synthesize layout=_layout;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
- (_Bool)_isFocusedForForegroundColor;	// IMP=0x0000000000168073
- (void)_updateBackgroundColor;	// IMP=0x000000000016806d
- (void)_updateFloatingContentControlIsFocused:(_Bool)arg1 withAnimationCoordinator:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000167fbf
- (void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000167f23
- (void)_updateFloatingContentControlStateAnimated:(_Bool)arg1;	// IMP=0x0000000000167ee2
- (_Bool)_isDisabled;	// IMP=0x0000000000167ecd
- (void)_updateVisualStateForIsFocused:(_Bool)arg1;	// IMP=0x0000000000167c9b
- (void)_updateVisualState;	// IMP=0x0000000000167c6a
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x0000000000167b29
- (void)didHintFocusMovement:(id)arg1;	// IMP=0x0000000000167b06
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001679e5
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001679aa
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000016796f
- (void)prepareForReuse;	// IMP=0x000000000016780d
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000001677f0
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00000000001677af
- (void)setFocused:(_Bool)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000167793
@property(nonatomic, getter=isDisclosureIndicatorHidden) _Bool disclosureIndicatorHidden;
@property(nonatomic, getter=isCheckmarkHidden) _Bool checkmarkHidden;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *secondaryTitle;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000016723e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000165e0f

@end

