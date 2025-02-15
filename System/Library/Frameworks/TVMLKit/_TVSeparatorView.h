//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _TVSeparatorView : UIView
{
    UIView *_line1;	// 8 = 0x8
    UIView *_line2;	// 16 = 0x10
    UIView *_separatorComponent;	// 24 = 0x18
    UIColor *_tintColor;	// 32 = 0x20
    double _lineHeight;	// 40 = 0x28
}

+ (id)separatorViewWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x006000000014a04c
- (void).cxx_destruct;	// IMP=0x000000000014ad8a
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) __weak UIView *separatorComponent; // @synthesize separatorComponent=_separatorComponent;
- (void)layoutSubviews;	// IMP=0x000000000014a731
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000014a671
- (id)preferredFocusEnvironments;	// IMP=0x000000000014a4f0
- (_Bool)canBecomeFocused;	// IMP=0x000000000014a476

@end

