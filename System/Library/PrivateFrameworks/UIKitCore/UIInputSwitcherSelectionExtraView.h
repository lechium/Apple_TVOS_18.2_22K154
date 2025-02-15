//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSelectionExtraView : UIView
{
    double m_pointerOffset;	// 8 = 0x8
    unsigned long long _roundedCorners;	// 16 = 0x10
    UIKeyboardMenuView *_menu;	// 24 = 0x18
    struct CGRect _keyRect;	// 32 = 0x20
}

@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) struct CGRect keyRect; // @synthesize keyRect=_keyRect;
@property(nonatomic) double pointerOffset; // @synthesize pointerOffset=m_pointerOffset;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000c2b34f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000c2b2fd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000c2b275

@end

