//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKARWalkingArrivalStoreFront : NSObject
{
    OrientedBox_11e3d904 _face;	// 8 = 0x8
    Unit_e1574806 _undulation;	// 96 = 0x60
    Matrix_8746f91e _dimensionsInMeters;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x000000000098b130
- (void).cxx_destruct;	// IMP=0x000000000098b120
@property(readonly, nonatomic) Unit_e1574806 appliedUndulation; // @synthesize appliedUndulation=_undulation;
@property(readonly, nonatomic) OrientedBox_11e3d904 face; // @synthesize face=_face;
- (id)description;	// IMP=0x000000000098aff0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000098ae70
@property(readonly, nonatomic) Matrix_6e1d3589 normal;
@property(readonly, nonatomic) Coordinate3D_b0aa8be1 bottomCenterCoordinate;
@property(readonly, nonatomic) Mercator3_d8bb135c bottomCenterPoint;
@property(readonly, nonatomic) Unit_e1574806 faceHeightInMeters;
@property(readonly, nonatomic) Unit_e1574806 faceWidthInMeters;
- (id)initWithOrientedRect:(const void *)arg1 undulationProvider:(CDUnknownBlockType)arg2;	// IMP=0x000000000098a580
- (id)initWithYaw:(float)arg1 pitch:(float)arg2 roll:(float)arg3 x:(double)arg4 y:(double)arg5 z:(double)arg6 w:(float)arg7 h:(float)arg8 undulationProvider:(CDUnknownBlockType)arg9;	// IMP=0x000000000098a350
- (id)initWithGEOOrientedBox:(id)arg1 undulationProvider:(CDUnknownBlockType)arg2;	// IMP=0x000000000098a0b0
- (id)initWithOrientedRect:(const void *)arg1;	// IMP=0x000000000098a090

@end

