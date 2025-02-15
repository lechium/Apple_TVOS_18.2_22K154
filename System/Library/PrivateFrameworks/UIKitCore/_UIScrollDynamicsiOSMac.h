//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIScrollDynamicsiOSMac
{
    double _durationUntilStop;	// 8 = 0x8
    double _durationUntilStopIgnoringRubberbanding;	// 16 = 0x10
    struct CGSize _absDisplacementVectorIgnoringRubberbanding;	// 24 = 0x18
    double _linearDisplacementIgnoringRubberbanding;	// 40 = 0x28
    struct CGPoint _destinationIgnoringRubberbanding;	// 48 = 0x30
    double _durationUntilRubberband;	// 64 = 0x40
    struct CGPoint _initialRubberbandingOrigin;	// 72 = 0x48
    struct CGVector _initialRubberbandingVelocity;	// 88 = 0x58
    unsigned long long _rubberBandingAxis;	// 104 = 0x68
    double _decelerationRate;	// 112 = 0x70
}

- (_Bool)isRubberBandingAfterDuration:(double)arg1;	// IMP=0x000000000166e838
- (struct CGPoint)positionAfterDuration:(double)arg1;	// IMP=0x000000000166e464
- (struct CGVector)velocityAfterDuration:(double)arg1;	// IMP=0x000000000166e3d4
- (double)speedAfterDuration:(double)arg1;	// IMP=0x000000000166e27e
- (double)durationUntilStop;	// IMP=0x000000000166e26c
- (void)calculateToReachDecelerationTarget;	// IMP=0x000000000166d843
- (void)calculateDecelerationTarget;	// IMP=0x000000000166ca50
- (id)init;	// IMP=0x000000000166ca07

@end

