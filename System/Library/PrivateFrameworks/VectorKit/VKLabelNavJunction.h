//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VKLabelNavRoad, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavJunction : NSObject
{
    struct shared_ptr<md::LabelTile> _tile;	// 8 = 0x8
    Matrix_8746f91e _tileCoordinate;	// 24 = 0x18
    struct GeoCodecsConnectivityJunction *_geoJunction;	// 32 = 0x20
    struct PolylineCoordinate _routeOffset;	// 40 = 0x28
    NSMutableArray *_roads;	// 48 = 0x30
    VKLabelNavRoad *_incomingRoad;	// 56 = 0x38
    VKLabelNavRoad *_outgoingRoad;	// 64 = 0x40
    float _distanceFromPreviousShieldLabel;	// 72 = 0x48
    int _preferredLabelPlacement;	// 76 = 0x4c
    _Bool _isOnDualCarriageway;	// 80 = 0x50
    _Bool _hasSharedRouteDirection;	// 81 = 0x51
    Matrix_8746f91e _sharedRouteDirection;	// 84 = 0x54
    _Bool _foundRoads;	// 92 = 0x5c
    _Bool _isOverpass;	// 93 = 0x5d
    _Bool _isRouteOverpass;	// 94 = 0x5e
    unsigned char _largestRoadClass;	// 95 = 0x5f
    void *_labelFeature;	// 96 = 0x60
    NSString *_name;	// 104 = 0x68
    VKLabelNavRoadLabel *_junctionSign;	// 112 = 0x70
    _Bool _areLabelsDisabled;	// 120 = 0x78
    unsigned long long _depthFromRoute;	// 128 = 0x80
    double _worldUnitsPerMeter;	// 136 = 0x88
    VKLabelNavJunction *_overpassJunction;	// 144 = 0x90
    _Bool _cachedSignVisibility[8];	// 152 = 0x98
    _Bool _isVisibilityCached[8];	// 160 = 0xa0
    _Bool _isVisible;	// 168 = 0xa8
    _Bool _isPicked;	// 169 = 0xa9
    Mercator3_d8bb135c _mercatorCoordinate;	// 176 = 0xb0
    double _sortValue;	// 200 = 0xc8
    _Bool _isRouteRefineJunction;	// 208 = 0xd0
}

- (id).cxx_construct;	// IMP=0x0000000000c2dfe0
- (void).cxx_destruct;	// IMP=0x0000000000c2df50
@property(readonly, nonatomic) const void *tile; // @synthesize tile=_tile;
@property(readonly, nonatomic) const void *mercatorCoordinate; // @synthesize mercatorCoordinate=_mercatorCoordinate;
@property(nonatomic) _Bool isPicked; // @synthesize isPicked=_isPicked;
@property(readonly, nonatomic) VKLabelNavRoadLabel *junctionSign; // @synthesize junctionSign=_junctionSign;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isRouteRefineJunction; // @synthesize isRouteRefineJunction=_isRouteRefineJunction;
@property(nonatomic) _Bool isRouteOverpass; // @synthesize isRouteOverpass=_isRouteOverpass;
@property(readonly, nonatomic) _Bool isOverpass; // @synthesize isOverpass=_isOverpass;
@property(nonatomic) __weak VKLabelNavJunction *overpassJunction; // @synthesize overpassJunction=_overpassJunction;
@property(nonatomic) unsigned long long depthFromRoute; // @synthesize depthFromRoute=_depthFromRoute;
@property(nonatomic) Matrix_8746f91e sharedRouteDirection; // @synthesize sharedRouteDirection=_sharedRouteDirection;
@property(readonly, nonatomic) _Bool hasSharedRouteDirection; // @synthesize hasSharedRouteDirection=_hasSharedRouteDirection;
@property(nonatomic) _Bool isOnDualCarriageway; // @synthesize isOnDualCarriageway=_isOnDualCarriageway;
@property(nonatomic) float distanceFromPreviousShieldLabel; // @synthesize distanceFromPreviousShieldLabel=_distanceFromPreviousShieldLabel;
@property(nonatomic) int preferredLabelPlacement; // @synthesize preferredLabelPlacement=_preferredLabelPlacement;
@property(readonly, nonatomic) __weak VKLabelNavRoad *incomingRoad; // @synthesize incomingRoad=_incomingRoad;
@property(readonly, nonatomic) __weak VKLabelNavRoad *outgoingRoad; // @synthesize outgoingRoad=_outgoingRoad;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) Matrix_8746f91e tileCoordinate; // @synthesize tileCoordinate=_tileCoordinate;
@property(readonly, nonatomic) const struct GeoCodecsConnectivityJunction *geoJunction; // @synthesize geoJunction=_geoJunction;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isTrafficCameraFeature;
@property(readonly, nonatomic) _Bool isEtaFeature;
@property(readonly, nonatomic) _Bool isGuidanceStepStart;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) _Bool isInGuidance;
@property(readonly, nonatomic) _Bool isStartOfRoadName;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 isDrivingSideRight:(_Bool)arg2 artworkCache:(void *)arg3;	// IMP=0x0000000000c2d500
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;	// IMP=0x0000000000c2d0d0
@property(readonly, nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
- (void)layoutWithNavContext:(struct NavContext *)arg1;	// IMP=0x0000000000c2d060
- (void)_updateWithNavContext:(struct NavContext *)arg1;	// IMP=0x0000000000c2d040
- (void)_updateWithNavContext:(struct NavContext *)arg1 threshold:(double)arg2;	// IMP=0x0000000000c2cfb0
- (Mercator3_d8bb135c)_anchorCoordinateForSignOrientation:(unsigned char)arg1;	// IMP=0x0000000000c2cd20
- (unsigned char)_signOrientationWithDrivingSide:(_Bool)arg1;	// IMP=0x0000000000c2c960
@property(readonly, nonatomic) double worldUnitsPerMeter; // @synthesize worldUnitsPerMeter=_worldUnitsPerMeter;
@property(readonly, nonatomic) int requiredLabelPlacement;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;	// IMP=0x0000000000c2ba30
- (void)evaluateCrossStreets;	// IMP=0x0000000000c2ba10
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2;	// IMP=0x0000000000c2b670
- (void)findRoads;	// IMP=0x0000000000c2b130
@property(readonly, nonatomic) unsigned char largestRoadClass;
@property(readonly, nonatomic) NSArray *roads; // @synthesize roads=_roads;
@property(readonly, nonatomic) _Bool isMultiRoadIntersection;
@property(readonly, nonatomic) _Bool isIntraRamp;
@property(readonly, nonatomic) _Bool isOffRouteGraph;
@property(readonly, nonatomic) _Bool isAwayFromRoute;
@property(readonly, nonatomic) _Bool isRamp;
@property(readonly, nonatomic) long long intraRoadPriorityForShieldLabel;
@property(readonly, nonatomic) long long intraRoadPriorityForRoadLabel;
@property(readonly, nonatomic) _Bool isIntersection;
@property(readonly, nonatomic) _Bool isOnRoute;
@property(readonly, nonatomic) _Bool isRoadTerminus;
@property(readonly, nonatomic) _Bool isTileEdgeJunction;
- (_Bool)matchesLocationForJunction:(id)arg1;	// IMP=0x0000000000c2a9a0
- (id)description;	// IMP=0x0000000000c2a8f0
- (void)dealloc;	// IMP=0x0000000000c2a870
- (id)initWithRoadEdge:(const struct GeoCodecsRoadEdge *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const void *)arg4;	// IMP=0x0000000000c2a5e0
- (id)initWithGEOJunction:(struct GeoCodecsConnectivityJunction *)arg1 routeOffset:(struct PolylineCoordinate)arg2 tile:(const void *)arg3;	// IMP=0x0000000000c2a330

@end

