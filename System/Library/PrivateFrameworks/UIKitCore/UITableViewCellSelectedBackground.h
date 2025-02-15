//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, UIColor, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView
{
    UIVisualEffectView *_selectionEffectsView;	// 160 = 0xa0
    _Bool _multiselect;	// 168 = 0xa8
    long long _selectionStyle;	// 176 = 0xb0
    UIColor *_multiselectBackgroundColor;	// 184 = 0xb8
    UIColor *_selectionTintColor;	// 192 = 0xc0
    UIColor *_noneStyleBackgroundColor;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000012c0e6a
@property(retain, nonatomic) UIColor *noneStyleBackgroundColor; // @synthesize noneStyleBackgroundColor=_noneStyleBackgroundColor;
@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property(nonatomic, getter=isMultiselect) _Bool multiselect; // @synthesize multiselect=_multiselect;
@property(retain, nonatomic) UIColor *multiselectBackgroundColor; // @synthesize multiselectBackgroundColor=_multiselectBackgroundColor;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
- (void)updateBackgroundColor;	// IMP=0x00000000012c0d70
- (void)tintColorDidChange;	// IMP=0x00000000012c0d2f
- (void)layoutSubviews;	// IMP=0x00000000012c0cba
@property(copy, nonatomic) NSArray *selectionEffects;

@end

