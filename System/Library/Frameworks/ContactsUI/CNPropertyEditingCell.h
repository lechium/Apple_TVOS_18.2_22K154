//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNRepeatingGradientSeparatorView, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface CNPropertyEditingCell
{
    UIButton *_labelButton;	// 56 = 0x38
    CNRepeatingGradientSeparatorView *_vseparator;	// 64 = 0x40
}

+ (id)keyPathsForValuesAffectingEffectiveLabelWidth;	// IMP=0x001000000007d8d8
+ (_Bool)wantsStandardConstraints;	// IMP=0x001000000007cfdd
+ (_Bool)wantsChevron;	// IMP=0x001000000007cfd5
- (void).cxx_destruct;	// IMP=0x000000000007e19f
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator; // @synthesize vseparator=_vseparator;
@property(readonly, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x000000000007e080
- (void)pickerDidCancel:(id)arg1;	// IMP=0x000000000007e015
- (id)constantConstraints;	// IMP=0x000000000007d99e
- (double)effectiveLabelWidth;	// IMP=0x000000000007d8f8
- (double)minCellHeight;	// IMP=0x000000000007d8ca
@property(readonly, nonatomic) double leftValueMargin;
- (id)valueString;	// IMP=0x000000000007d86c
- (void)setValueTextAttributes:(id)arg1;	// IMP=0x000000000007d754
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x000000000007d3c5
- (void)labelButtonClicked:(id)arg1;	// IMP=0x000000000007d292
- (id)labelView;	// IMP=0x000000000007d130
- (void)dealloc;	// IMP=0x000000000007d0bb
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000007cfe5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

