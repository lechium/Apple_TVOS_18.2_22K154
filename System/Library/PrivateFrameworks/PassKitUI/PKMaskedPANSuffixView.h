//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface PKMaskedPANSuffixView : UIView
{
    MISSING_TYPE *fontSize;	// 8 = 0x8
    MISSING_TYPE *viewSpacing;	// 16 = 0x10
    MISSING_TYPE *suffix;	// 24 = 0x18
    MISSING_TYPE *foregroundColor;	// 40 = 0x28
    MISSING_TYPE *maskedPANLabel;	// 48 = 0x30
    MISSING_TYPE *suffixLabel;	// 56 = 0x38
    MISSING_TYPE *maskedSize;	// 64 = 0x40
    MISSING_TYPE *suffixSize;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000ab670
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ab610
- (void)layoutSubviews;	// IMP=0x00000000000ab300
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ab2a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ab100
- (id)initWithSuffix:(id)arg1 foregroundColor:(id)arg2;	// IMP=0x00000000000ab0c0

@end

