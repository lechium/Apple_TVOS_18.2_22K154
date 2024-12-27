//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, NSString, VKCamera;
@protocol MDRenderTarget, VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraController : NSObject
{
    VKCamera *_vkCamera;	// 8 = 0x8
    shared_ptr_46708168 _camera;	// 16 = 0x10
    id <MDRenderTarget> _canvas;	// 32 = 0x20
    id <VKMapViewCameraDelegate> _cameraDelegate;	// 40 = 0x28
    _Bool _gesturing;	// 48 = 0x30
    unsigned long long _regionChangeCount;	// 56 = 0x38
    _Bool _inProgressRegionChangeIsAnimated;	// 64 = 0x40
    struct VKEdgeInsets _edgeInsets;	// 68 = 0x44
    _Bool _edgeInsetsAnimating;	// 84 = 0x54
    void *_mapDataAccess;	// 88 = 0x58
    struct AnimationRunner *_animationRunner;	// 96 = 0x60
    struct RunLoopController *_runLoopController;	// 104 = 0x68
    long long _baseDisplayRate;	// 112 = 0x70
    long long _maxDisplayRate;	// 120 = 0x78
    _Bool _staysCenteredDuringPinch;	// 128 = 0x80
    _Bool _staysCenteredDuringRotation;	// 129 = 0x81
    _Bool _isPitchEnabled;	// 130 = 0x82
    _Bool _isRotateEnabled;	// 131 = 0x83
}

- (id).cxx_construct;	// IMP=0x00000000002769f0
- (void).cxx_destruct;	// IMP=0x0000000000276990
@property(readonly, nonatomic) struct RunLoopController *runLoopController; // @synthesize runLoopController=_runLoopController;
@property(readonly, nonatomic) struct AnimationRunner *animationRunner; // @synthesize animationRunner=_animationRunner;
@property(readonly, nonatomic) void *mapDataAccess; // @synthesize mapDataAccess=_mapDataAccess;
@property(nonatomic) _Bool isRotateEnabled; // @synthesize isRotateEnabled=_isRotateEnabled;
@property(nonatomic) _Bool isPitchEnabled; // @synthesize isPitchEnabled=_isPitchEnabled;
@property(nonatomic) _Bool staysCenteredDuringRotation; // @synthesize staysCenteredDuringRotation=_staysCenteredDuringRotation;
@property(nonatomic) _Bool staysCenteredDuringPinch; // @synthesize staysCenteredDuringPinch=_staysCenteredDuringPinch;
- (_Bool)usesVKCamera;	// IMP=0x00000000002768d0
- (void)populateDebugNode:(void *)arg1 withOptions:(const void *)arg2;	// IMP=0x00000000002767f0
- (_Bool)centerCoordinate:(CDStruct_2c43369c *)arg1 andDistanceFromCenter:(double *)arg2 forMapRegion:(id)arg3;	// IMP=0x00000000002767e0
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000002767d0
- (_Bool)wantsTimerTick;	// IMP=0x00000000002767c0
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double maxPitch;
@property(readonly, nonatomic) double minPitch;
@property(nonatomic) double pitch;
@property(readonly, nonatomic) double presentationHeading;
@property(nonatomic) double heading;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_2c43369c centerCoordinate;
@property(readonly, nonatomic) GEOMapRegion *mapRegionIgnoringEdgeInsets;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)updateCameraToPositionOrientationLimits;	// IMP=0x0000000000276130
- (void)stylesheetDidReload;	// IMP=0x0000000000276120
- (void)stylesheetDidChange;	// IMP=0x0000000000276110
@property(readonly, nonatomic) unsigned long long regionChangeCount;
@property(readonly, nonatomic) _Bool isRotated;
@property(readonly, nonatomic) _Bool isFullyPitched;
@property(readonly, nonatomic) _Bool isPitched;
@property(readonly, nonatomic) _Bool canRotate;
@property(readonly, nonatomic) _Bool canPitch;
- (long long)tileSize;	// IMP=0x00000000002760a0
- (_Bool)canZoomOutForTileSize:(long long)arg1;	// IMP=0x0000000000276040
- (_Bool)canZoomInForTileSize:(long long)arg1;	// IMP=0x0000000000275fe0
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;	// IMP=0x0000000000275f90
- (double)currentZoomLevelForTileSize:(long long)arg1;	// IMP=0x0000000000275f40
- (double)maximumZoomLevelForTileSize:(long long)arg1;	// IMP=0x0000000000275ef0
- (double)minimumZoomLevelForTileSize:(long long)arg1;	// IMP=0x0000000000275ea0
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;	// IMP=0x0000000000275e40
- (double)topDownMinimumZoomLevel;	// IMP=0x0000000000275e20
- (double)currentZoomLevel;	// IMP=0x0000000000275e00
- (double)maximumZoomLevel;	// IMP=0x0000000000275de0
- (double)minimumZoomLevel;	// IMP=0x0000000000275dc0
- (_Bool)edgeInsetsAnimating;	// IMP=0x0000000000275db0
- (void)setEdgeInsetsAnimating:(_Bool)arg1;	// IMP=0x0000000000275da0
- (struct VKEdgeInsets)edgeInsets;	// IMP=0x0000000000275d90
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;	// IMP=0x0000000000275d80
- (Matrix_443f5d51)cursorFromScreenPoint:(struct CGPoint)arg1;	// IMP=0x0000000000275c50
- (struct CGPoint)scaledScreenPointForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000275bb0
- (struct CGPoint)centerScreenPoint;	// IMP=0x0000000000275a40
- (id)detailedDescription;	// IMP=0x0000000000275920
- (void)checkAndResetRegionChangeCount;	// IMP=0x0000000000275910
- (_Bool)isChangingRegion;	// IMP=0x0000000000275900
- (_Bool)isAnimating;	// IMP=0x00000000002758d0
- (void)endRegionChange;	// IMP=0x0000000000275840
- (void)beginRegionChange:(_Bool)arg1;	// IMP=0x00000000002757c0
- (id)getMapEngineModeType:(unsigned char)arg1;	// IMP=0x0000000000275780
- (id)getCameraType:(unsigned char)arg1;	// IMP=0x0000000000275750
- (id)getWorldType:(unsigned char)arg1;	// IMP=0x0000000000275720
- (void)canvasDidLayout;	// IMP=0x0000000000275710
- (void)setGesturing:(_Bool)arg1;	// IMP=0x0000000000275700
- (_Bool)isGesturing;	// IMP=0x00000000002756f0
- (void)setCameraDelegate:(id)arg1;	// IMP=0x0000000000275690
- (id)cameraDelegate;	// IMP=0x0000000000275670
- (void)setCanvas:(id)arg1;	// IMP=0x0000000000275610
- (id)canvas;	// IMP=0x00000000002755f0
- (shared_ptr_46708168)camera;	// IMP=0x00000000002755c0
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x0000000000275560
- (id)vkCamera;	// IMP=0x0000000000275550
- (void)setVkCamera:(id)arg1;	// IMP=0x0000000000275500
@property(nonatomic) long long maxDisplayRate;
@property(nonatomic) long long baseDisplayRate;
- (id)initWithMapDataAccess:(void *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;	// IMP=0x0000000000275400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

