//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UIKeyboardHostedCandidateInlineFloatingViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardHostedCandidateInlineFloatingView
{
    id <UIKeyboardHostedCandidateInlineFloatingViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000123b3a6
@property(nonatomic) __weak id <UIKeyboardHostedCandidateInlineFloatingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hostIsTextVerticalDidChange:(id)arg1;	// IMP=0x000000000123b2c5
- (_Bool)inlineRectIsVertical;	// IMP=0x000000000123b2b3
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3;	// IMP=0x000000000123b2ad
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000000123b19c
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000123b121
- (void)setInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3 layout:(_Bool)arg4;	// IMP=0x000000000123b11b
- (_Bool)shouldExtendUpwards;	// IMP=0x000000000123b113
- (id)initWithContainer:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000123acba
- (_Bool)hostInlineRectIsVertical;	// IMP=0x000000000012ecb0

@end

