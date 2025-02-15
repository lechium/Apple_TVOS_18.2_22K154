//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteSection, NSArray, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface VKPolylinePath : NSObject
{
    VKPolylineOverlay *_overlay;	// 8 = 0x8
    GEOComposedRouteSection *_section;	// 16 = 0x10
    NSArray *_matchedPathSegments;	// 24 = 0x18
    struct vector<gm::Matrix<float, 3, 1>, std::allocator<gm::Matrix<float, 3, 1>>> _points;	// 32 = 0x20
    struct vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> _polylineCoordinates;	// 56 = 0x38
    _Bool _distanceSnapping;	// 80 = 0x50
    struct PolylineCoordinate _routeStart;	// 84 = 0x54
    struct PolylineCoordinate _routeEnd;	// 92 = 0x5c
    double _startDistance;	// 104 = 0x68
    unsigned char _trafficSpeed;	// 112 = 0x70
    double _sectionLengthScaleFactor;	// 120 = 0x78
    struct GradientTraffic _gradientTraffic;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x000000000062f5c0
- (void).cxx_destruct;	// IMP=0x000000000062f560
@property(nonatomic) double startDistance; // @synthesize startDistance=_startDistance;
@property(readonly, nonatomic) NSArray *matchedPathSegments; // @synthesize matchedPathSegments=_matchedPathSegments;
@property(readonly, nonatomic) __weak GEOComposedRouteSection *section; // @synthesize section=_section;
@property(nonatomic) struct PolylineCoordinate routeEnd; // @synthesize routeEnd=_routeEnd;
@property(nonatomic) struct PolylineCoordinate routeStart; // @synthesize routeStart=_routeStart;
- (id)description;	// IMP=0x000000000062f460
- (Matrix_811b2232)convertCoordinateToTile:(const CDStruct_071ac149 *)arg1;	// IMP=0x000000000062f360
@property(readonly) _Bool isMapMatched;
@property(readonly) _Bool hasCompletedMapMatching;
- (float)laneHalfWidthAtIndex:(unsigned int)arg1;	// IMP=0x000000000062f330
@property(readonly, nonatomic) const void *polylineCoordinates;
@property(readonly, nonatomic) void *points;
@property(readonly, nonatomic) unsigned int pointCount;
- (const struct GradientTraffic *)gradientTrafficAtIndex:(unsigned int)arg1;	// IMP=0x000000000062f2e0
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4 matchedPathSegments:(id)arg5 elevationSource:(void *)arg6 elevationSourceContext:(void *)arg7;	// IMP=0x000000000062ddb0
- (id)initWithOverlay:(id)arg1 section:(id)arg2 matchedPathSegments:(id)arg3;	// IMP=0x000000000062dcb0

@end

