//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUISnippetViewController.h>

@class SAUIButton, SRBigButtonView;

@interface SRBigButtonController : SiriUISnippetViewController
{
    SRBigButtonView *_buttonView;	// 8 = 0x8
    SAUIButton *_buttonObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000924e
- (void)_bigButtonHit:(id)arg1;	// IMP=0x00100000000091d5
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0010000000009173
- (void)loadView;	// IMP=0x0010000000008faf
- (_Bool)usePlatterStyle;	// IMP=0x0010000000008fa7
- (struct UIEdgeInsets)defaultViewInsets;	// IMP=0x0010000000008f89
- (id)snippet;	// IMP=0x0010000000008f81
- (void)setAceObject:(id)arg1;	// IMP=0x0010000000008f28
- (void)dealloc;	// IMP=0x0010000000008ea2

@end

