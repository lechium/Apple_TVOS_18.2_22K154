//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class NSString, STKImageGlyph, UIButton, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol UIKeyboardEmojiAndStickerCollectionViewCellDelegate, UIKeyboardEmojiAndStickerCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardStickerCollectionViewCell : UICollectionViewCell
{
    _Bool _rearrangeMode;	// 8 = 0x8
    STKImageGlyph *_imageGlyph;	// 16 = 0x10
    id <UIKeyboardEmojiAndStickerCollectionViewCellDelegate> _delegate;	// 24 = 0x18
    id <UIKeyboardEmojiAndStickerCollectionViewDelegate> _cellDelegate;	// 32 = 0x20
    UIView *_stickerView;	// 40 = 0x28
    UIView *_rearrangingView;	// 48 = 0x30
    UIButton *_deleteButton;	// 56 = 0x38
    UITapGestureRecognizer *_rearrangeViewTapGR;	// 64 = 0x40
    UILongPressGestureRecognizer *_longPressGR;	// 72 = 0x48
    UIView *_navigationHighlightView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000a590af
@property(retain, nonatomic) UIView *navigationHighlightView; // @synthesize navigationHighlightView=_navigationHighlightView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGR; // @synthesize longPressGR=_longPressGR;
@property(retain, nonatomic) UITapGestureRecognizer *rearrangeViewTapGR; // @synthesize rearrangeViewTapGR=_rearrangeViewTapGR;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *rearrangingView; // @synthesize rearrangingView=_rearrangingView;
@property(retain, nonatomic) UIView *stickerView; // @synthesize stickerView=_stickerView;
@property(nonatomic) __weak id <UIKeyboardEmojiAndStickerCollectionViewDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) __weak id <UIKeyboardEmojiAndStickerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool rearrangeMode; // @synthesize rearrangeMode=_rearrangeMode;
@property(copy, nonatomic) STKImageGlyph *imageGlyph; // @synthesize imageGlyph=_imageGlyph;
- (id)_jiggleAnimationWithVariation:(double)arg1 keyPath:(id)arg2 duration:(double)arg3;	// IMP=0x0000000000a58dee
- (double)_jiggleTranslationAnimationTranslation:(double)arg1;	// IMP=0x0000000000a58de0
- (void)_endJiggle;	// IMP=0x0000000000a58d51
- (void)_startJiggle;	// IMP=0x0000000000a58b30
- (void)tappedDelete:(id)arg1;	// IMP=0x0000000000a58b1e
- (void)tappedNewEmoji:(id)arg1;	// IMP=0x0000000000a58a80
- (void)tappedAddEffect:(id)arg1;	// IMP=0x0000000000a58705
- (void)tappedRearrange:(id)arg1;	// IMP=0x0000000000a586df
- (void)rearrangeStateChanged:(_Bool)arg1;	// IMP=0x0000000000a586cd
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a585eb
- (void)_didTapDuringRearrange:(id)arg1;	// IMP=0x0000000000a585ad
- (void)_performDeleteAction;	// IMP=0x0000000000a58528
- (void)_endRearrange;	// IMP=0x0000000000a584f8
- (void)_startRearrange;	// IMP=0x0000000000a584c5
- (void)_showRearrangeViewIfNecessary:(_Bool)arg1;	// IMP=0x0000000000a58477
- (void)_reportRearrangeStateChanged:(_Bool)arg1;	// IMP=0x0000000000a58010
- (void)layoutSubviews;	// IMP=0x0000000000a57be5
- (void)prepareForReuse;	// IMP=0x0000000000a57ab4
- (void)didEndDisplaying;	// IMP=0x0000000000a57a1a
- (void)willDisplay;	// IMP=0x0000000000a57980
- (_Bool)isEmptyCell;	// IMP=0x0000000000a578ea
- (_Bool)allowsRearrange;	// IMP=0x0000000000a57770
- (void)performDeleteWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a573fc
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000a571ea
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a56fda
- (id)accessibilityLabel;	// IMP=0x0000000000a56e88
- (id)accessibilityIdentifier;	// IMP=0x0000000000a56e6b
- (_Bool)isAccessibilityElement;	// IMP=0x0000000000a56e63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

