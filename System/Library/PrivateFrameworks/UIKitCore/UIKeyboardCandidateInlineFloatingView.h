//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView
{
    _Bool _reducedWidth;	// 8 = 0x8
    _Bool _tewObserverIsSet;	// 9 = 0x9
    _Bool _inlineRectIsVertical;	// 10 = 0xa
    int _position;	// 12 = 0xc
    int _adjustMode;	// 16 = 0x10
    NSString *_inlineText;	// 24 = 0x18
    double _maxX;	// 32 = 0x20
    double _extendedStateAdditionalHeight;	// 40 = 0x28
    struct CGSize _preferredSize;	// 48 = 0x30
    struct CGRect _inlineRect;	// 64 = 0x40
    struct CGRect _previousCollapsedFrame;	// 96 = 0x60
    struct UIEdgeInsets _extraInsets;	// 128 = 0x80
    struct UIEdgeInsets _cellPadding;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000bec4e8
@property(nonatomic) struct UIEdgeInsets cellPadding; // @synthesize cellPadding=_cellPadding;
@property(nonatomic) struct UIEdgeInsets extraInsets; // @synthesize extraInsets=_extraInsets;
@property(nonatomic) int adjustMode; // @synthesize adjustMode=_adjustMode;
@property(nonatomic) struct CGRect previousCollapsedFrame; // @synthesize previousCollapsedFrame=_previousCollapsedFrame;
@property(nonatomic) int position; // @synthesize position=_position;
@property(readonly, nonatomic, getter=isReducedWidth) _Bool reducedWidth; // @synthesize reducedWidth=_reducedWidth;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(nonatomic) double extendedStateAdditionalHeight; // @synthesize extendedStateAdditionalHeight=_extendedStateAdditionalHeight;
@property(nonatomic) double maxX; // @synthesize maxX=_maxX;
@property(nonatomic) _Bool inlineRectIsVertical; // @synthesize inlineRectIsVertical=_inlineRectIsVertical;
@property(nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=_inlineRect;
@property(copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
- (id)traitCollection;	// IMP=0x0000000000bec234
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000bec009
- (void)layoutSubviews;	// IMP=0x0000000000bebe5b
- (void)setInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3 layout:(_Bool)arg4;	// IMP=0x0000000000beb656
- (_Bool)shouldExtendUpwards;	// IMP=0x0000000000beb42a
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3;	// IMP=0x0000000000bea973
- (struct CGRect)adjustedFrameFromDesiredFrame:(struct CGRect)arg1 textWidth:(double)arg2;	// IMP=0x0000000000bea690
- (struct CGRect)adjustedFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(double)arg2;	// IMP=0x0000000000bea20c
- (_Bool)isAcceptableFrame:(struct CGRect)arg1 afterScrollBy:(double)arg2;	// IMP=0x0000000000be9970
- (struct CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect)arg2;	// IMP=0x0000000000be98ef
- (void)dealloc;	// IMP=0x0000000000be9836
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000be976b

@end

