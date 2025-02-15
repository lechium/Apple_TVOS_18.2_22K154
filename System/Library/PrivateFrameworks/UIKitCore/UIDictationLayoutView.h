//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIDictationView.h"

@class NSString, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIDictationLayoutView : UIDictationView
{
    _Bool _hideSwitcher;	// 64 = 0x40
    UIButton *_globeButton;	// 72 = 0x48
    UIButton *_keyboardButton;	// 80 = 0x50
    UILabel *_languageLabel;	// 88 = 0x58
    NSString *_currentDictationLanguage;	// 96 = 0x60
    UIView *_waveTapEndpointButtonView;	// 104 = 0x68
    _Bool _blackTextColor;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000da6759
- (_Bool)isShowing;	// IMP=0x0000000000da66ce
- (void)returnToKeyboard;	// IMP=0x0000000000da664f
- (void)finishReturnToKeyboard;	// IMP=0x0000000000da65d8
- (void)layoutSubviews;	// IMP=0x0000000000da5e32
- (void)setState:(int)arg1;	// IMP=0x0000000000da5b2c
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000da5abb
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3;	// IMP=0x0000000000da565d
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000da5537
- (void)updateLanguageLabel;	// IMP=0x0000000000da5156
- (void)keyboardButtonPressed:(id)arg1;	// IMP=0x0000000000da5026
- (id)darkGrayColor;	// IMP=0x0000000000da4fed
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000da4d23

@end

