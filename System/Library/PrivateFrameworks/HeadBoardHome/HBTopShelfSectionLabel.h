//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface HBTopShelfSectionLabel : UICollectionReusableView
{
    UILabel *_textLabel;	// 8 = 0x8
}

+ (struct CGSize)sizeForString:(id)arg1;	// IMP=0x0060000000068a37
- (void).cxx_destruct;	// IMP=0x0000000000068ec6
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000068df9
- (void)_updateTextLabelAppearance;	// IMP=0x0000000000068c3b
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000000687b1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000068601

@end

