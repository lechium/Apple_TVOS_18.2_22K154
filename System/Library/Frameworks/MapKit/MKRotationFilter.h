//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKMapView;
@protocol MKRotationFilterDelegate;

__attribute__((visibility("hidden")))
@interface MKRotationFilter : NSObject
{
    VKMapView *_mapLayer;	// 8 = 0x8
    double _gestureStartAngle;	// 16 = 0x10
    _Bool _userRotatedAwayFromVerticalYaw;	// 24 = 0x18
    double _previousVerticalYawOverride;	// 32 = 0x20
    _Bool _snappedToNorth;	// 40 = 0x28
    _Bool _snappedAtStart;	// 41 = 0x29
    _Bool _snappingEnabled;	// 42 = 0x2a
    double _additionalSnappingAngle;	// 48 = 0x30
    id <MKRotationFilterDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001e159a
@property(nonatomic) __weak id <MKRotationFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double additionalSnappingAngle; // @synthesize additionalSnappingAngle=_additionalSnappingAngle;
@property(nonatomic, getter=isSnappedToNorth) _Bool snappedToNorth; // @synthesize snappedToNorth=_snappedToNorth;
- (_Bool)hasAdditionalSnappingAngle;	// IMP=0x00000000001e14b5
- (void)updateSnappedToNorth;	// IMP=0x00000000001e12c1
- (void)snapToNorthAnimated:(_Bool)arg1 forceTrueNorth:(_Bool)arg2;	// IMP=0x00000000001e10e7
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000001e109f
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;	// IMP=0x00000000001e0df6
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1 withSnapping:(_Bool)arg2;	// IMP=0x00000000001e0ce1
- (id)initWithMapLayer:(id)arg1;	// IMP=0x00000000001e0c7d
- (id)init;	// IMP=0x00000000001e0c53

@end

