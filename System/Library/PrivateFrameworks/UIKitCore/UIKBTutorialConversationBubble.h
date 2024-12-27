//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CAShapeLayer, UIKBTutorialConversationBubbleBackdropLayer, UIKBTutorialConversationBubbleShadowLayer, UILabel;

__attribute__((visibility("hidden")))
@interface UIKBTutorialConversationBubble : UIView
{
    CAShapeLayer *_backdropMaskShapeLayer;	// 8 = 0x8
    UIKBTutorialConversationBubbleShadowLayer *_broadShadowLayer;	// 16 = 0x10
    UIKBTutorialConversationBubbleShadowLayer *_tightShadowLayer;	// 24 = 0x18
    UIKBTutorialConversationBubbleBackdropLayer *_backdropLayer;	// 32 = 0x20
    UIView *_contentView;	// 40 = 0x28
    long long _originationDirection;	// 48 = 0x30
    double _preferredTailAttachmentPointXCoordinate;	// 56 = 0x38
    UILabel *_summaryLabel;	// 64 = 0x40
    struct CGPoint _originationPoint;	// 72 = 0x48
    struct CGPoint _tailAttachmentPoint;	// 88 = 0x58
    struct CGSize _parentAvatarViewSize;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000994434
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(nonatomic) struct CGSize parentAvatarViewSize; // @synthesize parentAvatarViewSize=_parentAvatarViewSize;
@property(readonly, nonatomic) struct CGPoint tailAttachmentPoint; // @synthesize tailAttachmentPoint=_tailAttachmentPoint;
@property(nonatomic) double preferredTailAttachmentPointXCoordinate; // @synthesize preferredTailAttachmentPointXCoordinate=_preferredTailAttachmentPointXCoordinate;
@property(nonatomic) struct CGPoint originationPoint; // @synthesize originationPoint=_originationPoint;
@property(nonatomic) long long originationDirection; // @synthesize originationDirection=_originationDirection;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIKBTutorialConversationBubbleBackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
@property(retain, nonatomic) UIKBTutorialConversationBubbleShadowLayer *tightShadowLayer; // @synthesize tightShadowLayer=_tightShadowLayer;
@property(retain, nonatomic) UIKBTutorialConversationBubbleShadowLayer *broadShadowLayer; // @synthesize broadShadowLayer=_broadShadowLayer;
@property(retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer; // @synthesize backdropMaskShapeLayer=_backdropMaskShapeLayer;
- (double)activityItemToContactItemVerticalOverlap;	// IMP=0x000000000099429e
- (double)balloonCornerRadius;	// IMP=0x0000000000994290
- (double)balloonTailRadius;	// IMP=0x0000000000994282
- (double)balloonTailWidth;	// IMP=0x000000000099425e
- (double)balloonTailHeight;	// IMP=0x0000000000994243
@property(readonly, nonatomic) struct UIEdgeInsets contentViewPadding;
@property(readonly, nonatomic) double pillCornerRadius;
- (struct CGRect)pillRect;	// IMP=0x000000000099416a
- (id)_pathForTailedBalloonSegmentWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 originationDirection:(long long)arg4;	// IMP=0x0000000000994054
- (struct CGPoint)tailAnchorPoint;	// IMP=0x0000000000993f02
- (void)_updateUserInterfaceStyles;	// IMP=0x0000000000993e72
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000993e29
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000993c95
- (void)layoutSubviews;	// IMP=0x00000000009935fc
- (id)initWithText:(id)arg1 originationDirection:(long long)arg2;	// IMP=0x0000000000993318

@end

