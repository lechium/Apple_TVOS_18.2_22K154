//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface VUIContentRatingTextBadgeView : UIView
{
    NSAttributedString *_contentRatingAttributedText;	// 8 = 0x8
    UILayoutGuide *_contentGuide;	// 16 = 0x10
}

+ (struct UIEdgeInsets)_paddingEdgeInsets;	// IMP=0x006000000000d54a
+ (void)_drawBadgeWithAttributedRatingText:(id)arg1 inContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 color:(id)arg4;	// IMP=0x006000000000d3f7
+ (struct CGSize)_badgeSizeForAttributedRatingText:(id)arg1;	// IMP=0x006000000000d26d
+ (id)_attributedRatingTextForText:(id)arg1 color:(id)arg2;	// IMP=0x006000000000d07b
+ (id)_badgeImageWithAttributedRatingText:(id)arg1 andColor:(id)arg2;	// IMP=0x006000000000cc34
- (void).cxx_destruct;	// IMP=0x000000000000d597
@property(retain, nonatomic) UILayoutGuide *contentGuide; // @synthesize contentGuide=_contentGuide;
@property(copy, nonatomic) NSAttributedString *contentRatingAttributedText; // @synthesize contentRatingAttributedText=_contentRatingAttributedText;
- (struct CGSize)_intrinsicContentSize;	// IMP=0x000000000000d00c
- (void)_updateContentRatingAttributedText:(id)arg1;	// IMP=0x000000000000cf6b
- (void)tintColorDidChange;	// IMP=0x000000000000ceed
- (id)lastBaselineAnchor;	// IMP=0x000000000000cedb
- (id)firstBaselineAnchor;	// IMP=0x000000000000ce7f
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000000cdc9
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000cdb7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000cda5
@property(copy, nonatomic) NSString *contentRatingText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000cad4
- (id)initWithBaselineOffsetFromBottom:(double)arg1;	// IMP=0x000000000000c844

@end

