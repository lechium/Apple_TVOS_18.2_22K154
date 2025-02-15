//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (TVMLKitAdditions)
+ (void)tv_performByPreventingAdditiveAnimations:(CDUnknownBlockType)arg1;	// IMP=0x006000000006063f
- (void)_transferAttributesFromElement:(id)arg1;	// IMP=0x00100000000618d9
- (_Bool)tv_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0010000000061880
- (id)tv_layout;	// IMP=0x001000000006186f
- (void)tv_setLayout:(id)arg1;	// IMP=0x0010000000061859
- (id)tv_AccessibilityText;	// IMP=0x0010000000061848
- (void)tv_setAccessibilityText:(id)arg1;	// IMP=0x0010000000061832
- (void)tv_setSiriData:(id)arg1;	// IMP=0x001000000006181c
- (id)tv_siriData;	// IMP=0x001000000006180b
- (_Bool)tv_marqueeOnHighlight;	// IMP=0x001000000006178a
- (_Bool)tv_showOnHighlight;	// IMP=0x0010000000061699
- (_Bool)tv_isPrototypeView;	// IMP=0x001000000006162f
- (id)tv_elementName;	// IMP=0x0010000000061616
- (unsigned long long)tv_elementType;	// IMP=0x00100000000615ac
- (id)tv_highlightColor;	// IMP=0x0010000000061590
- (id)tv_backgroundColor;	// IMP=0x0010000000061574
- (double)tv_lineSpacing;	// IMP=0x0010000000061516
- (double)tv_interitemSpacing;	// IMP=0x00100000000614b8
- (double)tv_minWidth;	// IMP=0x001000000006145a
- (double)tv_minHeight;	// IMP=0x00100000000613fc
- (double)tv_maxWidth;	// IMP=0x001000000006139e
- (double)tv_maxHeight;	// IMP=0x0010000000061340
- (double)tv_itemHeight;	// IMP=0x00100000000612e2
- (double)tv_itemWidth;	// IMP=0x0010000000061284
- (long long)tv_position;	// IMP=0x00100000000611f8
- (long long)tv_contentAlignment;	// IMP=0x00100000000611aa
- (long long)tv_alignment;	// IMP=0x001000000006111e
- (struct UIEdgeInsets)tv_padding;	// IMP=0x0010000000061089
- (struct UIEdgeInsets)tv_focusMargin;	// IMP=0x0010000000060ff4
- (struct UIEdgeInsets)tv_nonDirectionalMargin;	// IMP=0x0010000000060fa9
- (struct UIEdgeInsets)tv_margin;	// IMP=0x0010000000060f14
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;	// IMP=0x0010000000060ef6
- (_Bool)tv_shouldReuseCachedSizeThatFits:(struct CGSize)arg1 previousTargetSize:(struct CGSize)arg2 newTargetSize:(struct CGSize)arg3;	// IMP=0x0010000000060e70
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withSizeCalculation:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060c69
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000060bb0
- (void)transferLayoutStylesFromElement:(id)arg1;	// IMP=0x0010000000060ae2
- (_Bool)tv_isAnimationDisabledForProperty:(id)arg1;	// IMP=0x0010000000060a79
- (void)tv_disableAnimation:(_Bool)arg1 forProperty:(id)arg2;	// IMP=0x00100000000608f7
- (id)tv_valueForTVViewTag:(id)arg1;	// IMP=0x001000000006087d
- (void)tv_setValue:(id)arg1 forTVViewTag:(id)arg2;	// IMP=0x00100000000607f2
- (id)valueForTVViewStyle:(id)arg1;	// IMP=0x001000000006074a
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;	// IMP=0x00100000000606a2
- (void)tv_setShowcaseFactor:(double)arg1;	// IMP=0x001000000006069c
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060696
- (void)didSelect;	// IMP=0x0010000000060690
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x001000000006068a
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000060684
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000060672
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000006066c
- (id)tv_impressionableElementsForDocument:(id)arg1 parentViewController:(id)arg2;	// IMP=0x0010000000192ba6
- (id)tv_impressionableElementsForDocument:(id)arg1;	// IMP=0x0010000000192b92
@end

