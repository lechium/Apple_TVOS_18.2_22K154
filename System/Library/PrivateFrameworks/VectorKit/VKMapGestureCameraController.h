//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapGestureCameraController
{
    struct CGPoint _panLastScreenPoint;	// 176 = 0xb0
    _Bool _isPitchIncreasing;	// 192 = 0xc0
    double _beganPitch;	// 200 = 0xc8
    double _currentPitch;	// 208 = 0xd0
    VKTimedAnimation *_zoomAnimation;	// 216 = 0xd8
    optional_fcefa02e _rubberbandZoomStartFactor;	// 224 = 0xe0
    optional_fcefa02e _zoomPreviousT;	// 240 = 0xf0
}

- (id).cxx_construct;	// IMP=0x00000000007c4e30
- (void).cxx_destruct;	// IMP=0x00000000007c4e10
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1 delta:(Matrix_6e1d3589)arg2;	// IMP=0x00000000007c4940
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1;	// IMP=0x00000000007c44d0
- (_Bool)isPitchIncreasing;	// IMP=0x00000000007c44b0
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;	// IMP=0x00000000007c3d40
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x00000000007c35b0
- (void)beginPitch:(struct CGPoint)arg1;	// IMP=0x00000000007c3510
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000007c32e0
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000007c2930
- (void)endZoom:(struct CGPoint)arg1;	// IMP=0x00000000007c2900
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000007c24a0

@end

