//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, NSTextRange, UITextView;

__attribute__((visibility("hidden")))
@interface _UITextEmphasisBackgroundView : UIView
{
    UITextView *_textView;	// 8 = 0x8
    NSTextRange *_textRange;	// 16 = 0x10
    struct CGPoint _origin;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000011fed6e
@property struct CGPoint origin; // @synthesize origin=_origin;
@property(retain) NSTextRange *textRange; // @synthesize textRange=_textRange;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000011fec81
- (_Bool)shouldBeArchived;	// IMP=0x00000000011fec79
- (id)initWithTextView:(id)arg1;	// IMP=0x00000000011feb8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

