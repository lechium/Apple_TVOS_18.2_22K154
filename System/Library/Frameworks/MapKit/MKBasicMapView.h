//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, VKMapView;

__attribute__((visibility("hidden")))
@interface MKBasicMapView : UIView
{
    UIView *_hostView;	// 8 = 0x8
    VKMapView *_mapView;	// 16 = 0x10
    double _mapModeStartTime;	// 24 = 0x18
    double _trafficStartTime;	// 32 = 0x20
    long long _changingViewSizeCount;	// 40 = 0x28
    _Bool _inactive;	// 48 = 0x30
    _Bool _hasRenderedSomething;	// 49 = 0x31
    _Bool _inBackground;	// 50 = 0x32
}

- (void).cxx_destruct;	// IMP=0x00000000000cd043
@property(readonly, nonatomic, getter=isInBackground) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) _Bool inactive; // @synthesize inactive=_inactive;
@property(nonatomic) _Bool hasRenderedSomething; // @synthesize hasRenderedSomething=_hasRenderedSomething;
@property(nonatomic) double trafficStartTime; // @synthesize trafficStartTime=_trafficStartTime;
@property(nonatomic) double mapModeStartTime; // @synthesize mapModeStartTime=_mapModeStartTime;
@property(readonly, nonatomic) VKMapView *mapView; // @synthesize mapView=_mapView;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x00000000000ccf98
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1 ignoreIfViewInWindow:(_Bool)arg2;	// IMP=0x00000000000ccdb6
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1;	// IMP=0x00000000000ccda2
- (void)updateStatsForSwitchingToMapType:(int)arg1;	// IMP=0x00000000000ccd7f
- (void)updateStatsForTrafficEnabledTime;	// IMP=0x00000000000ccd6b
- (void)_updateStatsForTrafficEnabledTime:(_Bool)arg1;	// IMP=0x00000000000ccc9c
- (void)updateStatsForEnablingTraffic:(_Bool)arg1;	// IMP=0x00000000000ccc79
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000000ccc38
- (void)didMoveToWindow;	// IMP=0x00000000000cca4d
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000000cc94b
- (void)_unregisterSceneNotifications;	// IMP=0x00000000000cc816
- (void)_sceneDidEnterBackground:(id)arg1;	// IMP=0x00000000000cc7ff
- (void)_sceneWillEnterForeground:(id)arg1;	// IMP=0x00000000000cc7e8
- (void)_registerSceneNotifications;	// IMP=0x00000000000cc69e
- (void)_updateForCurrentScreen;	// IMP=0x00000000000cc381
- (void)_updateMapViewHidden;	// IMP=0x00000000000cc2e7
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;	// IMP=0x00000000000cc2ca
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toCameraModelPointToView:(id)arg2;	// IMP=0x00000000000cc247
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;	// IMP=0x00000000000cc1c4
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;	// IMP=0x00000000000cc141
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000cbfe7
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000cbea0
- (void)_animateCanvasForBounds:(struct CGRect)arg1;	// IMP=0x00000000000cbb05
- (void)_updateForCurrentLocale;	// IMP=0x00000000000cba9d
@property(nonatomic) _Bool rendersInBackground;
- (double)calloutContainerCanvasScale;	// IMP=0x00000000000cb83f
- (struct CGSize)calloutContainerCanvasSize;	// IMP=0x00000000000cb7fa
- (void)addCalloutSubview:(id)arg1;	// IMP=0x00000000000cb7dd
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
- (void)dealloc;	// IMP=0x00000000000cb6c7
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3 allowsAntialiasing:(_Bool)arg4 carDisplayType:(long long)arg5;	// IMP=0x00000000000cb0f0
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3 allowsAntialiasing:(_Bool)arg4;	// IMP=0x00000000000cb0db
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3;	// IMP=0x00000000000cb0c6
- (void)_finishedSnapshot:(id)arg1;	// IMP=0x00000000000cb0a9
- (void)_didEnterBackground;	// IMP=0x00000000000caff2
- (void)_updateBackgroundState:(long long)arg1;	// IMP=0x00000000000cadc7
- (void)_updateBackgroundState;	// IMP=0x00000000000cac63
- (void)_finishChangingViewSize;	// IMP=0x00000000000cac46
- (void)_beginChangingViewSize;	// IMP=0x00000000000cac35
@property(readonly, nonatomic, getter=isChangingViewSize) _Bool changingViewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

