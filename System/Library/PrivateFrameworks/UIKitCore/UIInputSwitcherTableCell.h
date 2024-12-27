//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCell.h"

@class UIInputSwitcherTableCellBackgroundView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCell : UITableViewCell
{
    _Bool _usesDarkTheme;	// 24 = 0x18
    _Bool _usesStraightLeftEdge;	// 25 = 0x19
    _Bool _first;	// 26 = 0x1a
    _Bool _last;	// 27 = 0x1b
    struct UIEdgeInsets _interactiveInsets;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x0060000000c1fe77
@property(nonatomic) struct UIEdgeInsets interactiveInsets; // @synthesize interactiveInsets=_interactiveInsets;
@property(nonatomic, getter=isLast) _Bool last; // @synthesize last=_last;
@property(nonatomic, getter=isFirst) _Bool first; // @synthesize first=_first;
@property(nonatomic) _Bool usesStraightLeftEdge; // @synthesize usesStraightLeftEdge=_usesStraightLeftEdge;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
- (void)_updateRoundedCorners;	// IMP=0x0000000000c201d2
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c201cc
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000c20122
- (void)layoutSubviews;	// IMP=0x0000000000c1ff08
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000c1fe81

// Remaining properties
@property(retain, nonatomic) UIInputSwitcherTableCellBackgroundView *backgroundView; // @dynamic backgroundView;

@end

