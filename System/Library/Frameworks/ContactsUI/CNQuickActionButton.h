//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNQuickAction, NSArray, UIButton, UILabel;
@protocol CNQuickActionButtonDelegate;

__attribute__((visibility("hidden")))
@interface CNQuickActionButton : UIView
{
    _Bool _showTitle;	// 8 = 0x8
    _Bool _showBackgroundPlatter;	// 9 = 0x9
    CNQuickAction *_action;	// 16 = 0x10
    id <CNQuickActionButtonDelegate> _delegate;	// 24 = 0x18
    UIButton *_button;	// 32 = 0x20
    UILabel *_label;	// 40 = 0x28
    NSArray *_activatedConstraints;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009deec
@property(retain, nonatomic) NSArray *activatedConstraints; // @synthesize activatedConstraints=_activatedConstraints;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <CNQuickActionButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showBackgroundPlatter; // @synthesize showBackgroundPlatter=_showBackgroundPlatter;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(retain, nonatomic) CNQuickAction *action; // @synthesize action=_action;
- (void)onLongPress:(id)arg1;	// IMP=0x000000000009db63
- (void)performAction;	// IMP=0x000000000009da84
- (void)updateConstraints;	// IMP=0x000000000009d659
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009d11d

@end

