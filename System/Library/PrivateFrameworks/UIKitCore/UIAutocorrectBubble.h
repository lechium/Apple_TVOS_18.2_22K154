//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface UIAutocorrectBubble : UIView
{
    UILabel *_textLabel;	// 8 = 0x8
    UIImageView *_backgroundView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000fec704
@property(readonly, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (id)lastBaselineAnchor;	// IMP=0x0000000000fec692
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000fec675
- (void)updateWithAutocorrectionText:(id)arg1;	// IMP=0x0000000000fec5f6
- (id)init;	// IMP=0x0000000000febe51

@end

