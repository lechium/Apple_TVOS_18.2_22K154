//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface _UISearchControllerLimitedAccessView : UIView
{
    UIView *_backgroundView;	// 160 = 0xa0
    UILabel *_keyboardLimitedLabel;	// 168 = 0xa8
    UIButton *_backButton;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000001127a0b
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000011279a5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011270e2

@end

