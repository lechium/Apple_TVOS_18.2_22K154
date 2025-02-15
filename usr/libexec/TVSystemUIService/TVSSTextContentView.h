//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIColor, UILabel;
@protocol TVSSVisualContent;

@interface TVSSTextContentView : UIView
{
    id <TVSSVisualContent> _content;	// 8 = 0x8
    unsigned long long _visualizedControlState;	// 16 = 0x10
    UIView *_backgroundColorView;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
    UIColor *_currentTintColor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000006dd60
@property(retain, nonatomic) UIColor *currentTintColor; // @synthesize currentTintColor=_currentTintColor;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(nonatomic) unsigned long long visualizedControlState; // @synthesize visualizedControlState=_visualizedControlState;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N,V_visualizedControlState

@property(copy, nonatomic) id <TVSSVisualContent> content; // @synthesize content=_content;
- (void)_updateAppearance;	// IMP=0x001000000006d7d0
- (void)_updateContent;	// IMP=0x001000000006d430
- (id)_textContent;	// IMP=0x001000000006d310
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000006d1a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000006c9b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

