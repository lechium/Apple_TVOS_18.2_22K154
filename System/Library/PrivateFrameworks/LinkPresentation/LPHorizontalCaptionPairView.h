//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPCaptionButtonPresentationProperties, LPSubtitleButtonView, LPTextView, NSRegularExpression, NSString;

__attribute__((visibility("hidden")))
@interface LPHorizontalCaptionPairView
{
    LPTextView *_leftView;	// 8 = 0x8
    LPTextView *_rightView;	// 16 = 0x10
    LPCaptionButtonPresentationProperties *_buttonProperties;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 32 = 0x20
    long long _balancingMode;	// 64 = 0x40
    LPSubtitleButtonView *_button;	// 72 = 0x48
    long long _overrideMaximumNumberOfLines;	// 80 = 0x50
    NSRegularExpression *_emphasizedTextExpression;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000029897
@property(copy, nonatomic) NSRegularExpression *emphasizedTextExpression; // @synthesize emphasizedTextExpression=_emphasizedTextExpression;
@property(nonatomic) long long overrideMaximumNumberOfLines; // @synthesize overrideMaximumNumberOfLines=_overrideMaximumNumberOfLines;
- (id)subtitleButton;	// IMP=0x0000000000029860
- (struct CGSize)_layoutCaptionPairForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;	// IMP=0x00000000000290d1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000290bd
- (void)layoutComponentView;	// IMP=0x000000000002906f
- (long long)computedNumberOfLines;	// IMP=0x0000000000028fae
- (double)descender;	// IMP=0x0000000000028e61
- (double)ascender;	// IMP=0x0000000000028d14
- (double)lastLineDescent;	// IMP=0x0000000000028bc7
- (double)firstLineLeading;	// IMP=0x0000000000028a7a
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000028977
- (id)initWithHost:(id)arg1 leadingText:(id)arg2 leadingStyle:(id)arg3 trailingText:(id)arg4 trailingStyle:(id)arg5 button:(id)arg6 balancingMode:(long long)arg7;	// IMP=0x000000000002804d
- (id)initWithHost:(id)arg1;	// IMP=0x000000000002803f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

