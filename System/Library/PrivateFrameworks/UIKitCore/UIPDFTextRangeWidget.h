//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSString, UIPDFPageView;

__attribute__((visibility("hidden")))
@interface UIPDFTextRangeWidget : NSObject
{
    CALayer *_startSelectionGrabber;	// 8 = 0x8
    CALayer *_startBar;	// 16 = 0x10
    CALayer *_endSelectionGrabber;	// 24 = 0x18
    CALayer *_endBar;	// 32 = 0x20
    CALayer *_startHandle;	// 40 = 0x28
    CALayer *_endHandle;	// 48 = 0x30
    CALayer *_fixedSelectionGrabber;	// 56 = 0x38
    UIPDFPageView *_pageView;	// 64 = 0x40
    double _handleHeight;	// 72 = 0x48
    double _handleWidth;	// 80 = 0x50
    struct CGPoint _initialSelectionPointOnPage;	// 88 = 0x58
    double _offsetX;	// 104 = 0x68
    double _offsetY;	// 112 = 0x70
    unsigned long long _startIndex;	// 120 = 0x78
    unsigned long long _endIndex;	// 128 = 0x80
    struct CGColor *_grabberColor;	// 136 = 0x88
    long long _startRectangle;	// 144 = 0x90
    long long _endRectangle;	// 152 = 0x98
    _Bool _startLeft;	// 160 = 0xa0
    _Bool _endRight;	// 161 = 0xa1
    double _startX;	// 168 = 0xa8
    double _endX;	// 176 = 0xb0
}

@property(readonly, nonatomic) struct CGPoint initialSelectionPointOnPage; // @synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage;
@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
@property(readonly, copy) NSString *description;
- (void)hide;	// IMP=0x00000000011ca118
@property(readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;
- (struct CGRect)selectionRectangle;	// IMP=0x00000000011c9f38
- (void)endTracking;	// IMP=0x00000000011c9f32
- (void)track:(struct CGPoint)arg1;	// IMP=0x00000000011c9f2c
- (void)layout;	// IMP=0x00000000011c9f1a
- (struct CGPoint)viewOffset;	// IMP=0x00000000011c9dfe
- (_Bool)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(_Bool *)arg3;	// IMP=0x00000000011c9840
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;	// IMP=0x00000000011c9821
- (void)remove;	// IMP=0x00000000011c97dd
- (void)setSelection:(id)arg1;	// IMP=0x00000000011c9633
- (void)setSelectedGrabber:(unsigned long long)arg1;	// IMP=0x00000000011c9618
- (void)layoutWidget;	// IMP=0x00000000011c9238
- (void)layoutEndSelectionGrabber:(struct CGRect)arg1 transform:(struct CGAffineTransform *)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize)arg5;	// IMP=0x00000000011c8cd3
- (void)layoutStartSelectionGrabber:(struct CGRect)arg1 transform:(struct CGAffineTransform *)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize)arg5;	// IMP=0x00000000011c876e
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000011c870c
- (void)dealloc;	// IMP=0x00000000011c86bf
- (id)init;	// IMP=0x00000000011c83cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

