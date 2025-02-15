//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, _UIGestureRecognizerTransformAnalyzer;

__attribute__((visibility("hidden")))
@interface _UIRotationGestureRecognizerDriver
{
    double _initialTouchDistance;	// 8 = 0x8
    double _initialTouchAngle;	// 16 = 0x10
    double _currentTouchAngle;	// 24 = 0x18
    long long _currentRotationCount;	// 32 = 0x20
    double _lastTouchTime;	// 40 = 0x28
    double _velocity;	// 48 = 0x30
    double _previousVelocity;	// 56 = 0x38
    _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;	// 64 = 0x40
    NSArray *_touches;	// 72 = 0x48
    float _preRecognitionWeight;	// 80 = 0x50
    float _postRecognitionWeight;	// 84 = 0x54
    struct {
        unsigned int receivedTwoTouches:1;
    } _flags;	// 88 = 0x58
    _Bool _hysteresisEnabled;	// 92 = 0x5c
    struct CGPoint _anchorPoint;	// 96 = 0x60
    struct CGPoint _initialAnchorPoint;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000bcf43c
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000bcf421
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000bcf37d
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000bcef1f
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000bcecd2
- (_Bool)shouldReceiveComponent:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000bcecbe
- (void)reset;	// IMP=0x0000000000bceb3f
- (id)init;	// IMP=0x0000000000bce9da

@end

