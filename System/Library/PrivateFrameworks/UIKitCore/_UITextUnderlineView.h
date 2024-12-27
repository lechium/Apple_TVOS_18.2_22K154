//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UITextSelectionHighlightView.h"

@class NSArray, NSMutableArray, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UITextUnderlineView : _UITextSelectionHighlightView
{
    NSMutableArray *_underlineViews;	// 64 = 0x40
    NSMutableArray *_trackedUnderlineRects;	// 72 = 0x48
    UIVisualEffectView *_baseView;	// 80 = 0x50
    _Bool _useDirectionalLightEffect;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000015de28f
@property(nonatomic) _Bool useDirectionalLightEffect; // @synthesize useDirectionalLightEffect=_useDirectionalLightEffect;
- (struct CGRect)underlineFrameFromRect:(id)arg1 underlineHeight:(double)arg2;	// IMP=0x00000000015de202
- (void)layoutSubviews;	// IMP=0x00000000015ddd23
- (void)clearAllUnderlinesAnimated:(_Bool)arg1;	// IMP=0x00000000015dda20
- (void)removeUnderlines:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000015dd58a
- (void)addUnderlines:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000015dd4a9
@property(retain, nonatomic) NSArray *underlineRects;
- (id)effectForProofreadingUnderlines;	// IMP=0x00000000015dd33b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000015dd177

@end

