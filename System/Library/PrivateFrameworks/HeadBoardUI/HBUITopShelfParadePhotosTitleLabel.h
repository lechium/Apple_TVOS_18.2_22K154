//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadePhotosTitleLabel : UILabel
{
    double _maximumLineHeight;	// 8 = 0x8
    double _additionalCharacterSpacing;	// 16 = 0x10
    struct UIEdgeInsets _textInsets;	// 24 = 0x18
}

@property(nonatomic) double additionalCharacterSpacing; // @synthesize additionalCharacterSpacing=_additionalCharacterSpacing;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) double maximumLineHeight; // @synthesize maximumLineHeight=_maximumLineHeight;
- (_Bool)_isSupportedCharacterSetForFont:(id)arg1 string:(id)arg2;	// IMP=0x0000000000001ccd
- (void)setText:(id)arg1;	// IMP=0x0000000000001b46
- (double)_firstBaselineOffsetFromTop;	// IMP=0x00000000000019b5
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000000001939
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000018e2

@end

