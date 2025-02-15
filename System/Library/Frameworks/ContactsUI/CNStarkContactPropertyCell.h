//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNStarkContactPropertyCell
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
}

+ (_Bool)wantsHorizontalLayout;	// IMP=0x00600000000aac46
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_cnui_applyContactStyle;	// IMP=0x00000000000ab7f3
- (id)variableConstraints;	// IMP=0x00000000000ab2bb
- (id)constantConstraints;	// IMP=0x00000000000ab00f
- (double)bottomBaselineConstant;	// IMP=0x00000000000ab001
- (void)transportButtonClicked:(id)arg1;	// IMP=0x00000000000aaf55
- (id)standardStarView;	// IMP=0x00000000000aaf4d
- (id)standardTransportIcon;	// IMP=0x00000000000aaed0
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000aae8f
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000aae4e
- (void)performDefaultAction;	// IMP=0x00000000000aad35
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000aac4e

@end

