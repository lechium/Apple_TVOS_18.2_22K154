//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CAShapeLayer, NSObservation;

@interface TVSSProgressView : UIView
{
    double _progressLineWidth;	// 8 = 0x8
    double _indeterminateMaxProgress;	// 16 = 0x10
    CAShapeLayer *_outlineLayer;	// 24 = 0x18
    CAShapeLayer *_progressLayer;	// 32 = 0x20
    double _progress;	// 40 = 0x28
    NSObservation *_progressObservation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000135930
@property(readonly, nonatomic) NSObservation *progressObservation; // @synthesize progressObservation=_progressObservation;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(readonly, nonatomic) CAShapeLayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
@property(nonatomic) double indeterminateMaxProgress; // @synthesize indeterminateMaxProgress=_indeterminateMaxProgress;
@property(nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
- (void)_beginObservingProgress:(id)arg1;	// IMP=0x0010000000135510
- (void)_updateWithProgressFractionCompleted:(double)arg1;	// IMP=0x0010000000135210
- (void)_fadeOut;	// IMP=0x0010000000135090
- (void)_fadeIn;	// IMP=0x0010000000134fb0
- (void)_updateLayerPaths;	// IMP=0x0010000000134bd0
- (void)_setDefaults;	// IMP=0x0010000000134b50
- (void)setTintColor:(id)arg1;	// IMP=0x00100000001349f0
@property(nonatomic) double outlineLineWidth;
- (void)resetProgress;	// IMP=0x0010000000134880
- (void)startWithProgess:(id)arg1;	// IMP=0x00100000001347e0
- (void)startWithFuture:(id)arg1;	// IMP=0x0010000000133f40
- (void)layoutSubviews;	// IMP=0x0010000000133dd0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001339d0

@end

