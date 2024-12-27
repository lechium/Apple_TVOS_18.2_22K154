//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, MKAnnotationView, NSSet, UIView, _MKAnnotationSelectionEngineDebugView, _MKAnnotationSelectionPanGestureRecognizer, _MKGamepadStickGestureRecognizer, _UIRepeatingPressGestureRecognizer;
@protocol _MKAnnotationSelectionEngineDelegate;

__attribute__((visibility("hidden")))
@interface _MKAnnotationSelectionEngine : NSObject
{
    _MKAnnotationSelectionEngineDebugView *_debugView;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    NSSet *_candidateViews;	// 24 = 0x18
    MKAnnotationView *_selectedAnnotationView;	// 32 = 0x20
    _MKAnnotationSelectionPanGestureRecognizer *_panRecognizer;	// 40 = 0x28
    _UIRepeatingPressGestureRecognizer *_leftPressRecognizer;	// 48 = 0x30
    _UIRepeatingPressGestureRecognizer *_rightPressRecognizer;	// 56 = 0x38
    _UIRepeatingPressGestureRecognizer *_upPressRecognizer;	// 64 = 0x40
    _UIRepeatingPressGestureRecognizer *_downPressRecognizer;	// 72 = 0x48
    _MKGamepadStickGestureRecognizer *_gamepadStickRecognizer;	// 80 = 0x50
    struct CGPoint _lastKnownTouchPoint;	// 88 = 0x58
    struct Matrix<double, 2, 1> _progressAccumulator;	// 104 = 0x68
    CADisplayLink *_gameControllerDisplayLink;	// 120 = 0x78
    _Bool _isPanning;	// 128 = 0x80
    id <_MKAnnotationSelectionEngineDelegate> _delegate;	// 136 = 0x88
}

- (id).cxx_construct;	// IMP=0x000000000011f5fd
- (void).cxx_destruct;	// IMP=0x000000000011f571
@property(retain, nonatomic) MKAnnotationView *selectedAnnotationView; // @synthesize selectedAnnotationView=_selectedAnnotationView;
@property(retain, nonatomic) NSSet *candidateViews; // @synthesize candidateViews=_candidateViews;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <_MKAnnotationSelectionEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateFromGameController:(id)arg1;	// IMP=0x000000000011f315
- (void)_handleGamepadDirectionalPress:(id)arg1;	// IMP=0x000000000011f1ac
- (void)_handleDirectionalPress:(id)arg1;	// IMP=0x000000000011f061
- (void)_handlePan:(id)arg1;	// IMP=0x000000000011ef19
- (void)_considerChangingSelection;	// IMP=0x000000000011ea0e
- (void)_updateDebugView;	// IMP=0x000000000011e711
@property(readonly, nonatomic) UIView *debugView;
- (id)initWithGestureTargetView:(id)arg1 moreImportantGestureRecognizers:(id)arg2;	// IMP=0x000000000011dfe2
- (id)init;	// IMP=0x000000000011df9e

@end

