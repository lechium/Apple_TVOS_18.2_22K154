//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIImageView, _TVSSSleepTimerShapeView;

@interface TVSSSleepTimerGlyphView : UIView
{
    double _percentComplete;	// 8 = 0x8
    unsigned long long _timerSize;	// 16 = 0x10
    _TVSSSleepTimerShapeView *_gutterView;	// 24 = 0x18
    _TVSSSleepTimerShapeView *_progressView;	// 32 = 0x20
    UIImageView *_timerHandView;	// 40 = 0x28
    NSArray *_constraints;	// 48 = 0x30
}

+ (double)lineWidthForTimerSize:(unsigned long long)arg1;	// IMP=0x00400000000195e0
+ (struct CGAffineTransform)currentRotationTransformForPercentComplete:(double)arg1;	// IMP=0x0010000000019590
+ (struct CGPath *)arcPathForBounds:(struct CGRect)arg1 percentComplete:(double)arg2 timerSize:(unsigned long long)arg3;	// IMP=0x00100000000192f0
+ (struct CGPath *)circlePathForBounds:(struct CGRect)arg1 timerSize:(unsigned long long)arg2;	// IMP=0x00100000000191d0
+ (id)staticTimerImageForTimerSize:(unsigned long long)arg1;	// IMP=0x0010000000018210
- (void).cxx_destruct;	// IMP=0x002000000001a250
@property(readonly, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UIImageView *timerHandView; // @synthesize timerHandView=_timerHandView;
@property(readonly, nonatomic) _TVSSSleepTimerShapeView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) _TVSSSleepTimerShapeView *gutterView; // @synthesize gutterView=_gutterView;
@property(nonatomic) unsigned long long timerSize; // @synthesize timerSize=_timerSize;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void)_updateConstraintsForTimerSize:(unsigned long long)arg1;	// IMP=0x0010000000019950
- (void)_updateLayerLineWidth;	// IMP=0x0010000000019870
- (void)_updateTintColor;	// IMP=0x00100000000196d0
- (void)tintColorDidChange;	// IMP=0x0010000000019680
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000018f00
- (void)layoutSubviews;	// IMP=0x0010000000018d50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000018900

@end

