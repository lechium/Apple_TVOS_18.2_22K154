//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoadGraph : NSObject
{
    struct unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _tiles;	// 8 = 0x8
    struct unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _duplicateTiles;	// 64 = 0x40
    NSMutableDictionary *_tileDatasByIndex;	// 120 = 0x78
    NSMutableArray *_junctions;	// 128 = 0x80
    NSMutableArray *_intersections;	// 136 = 0x88
    _Bool _oppositeCarriagewayJunctionsValid;	// 144 = 0x90
    NSMutableArray *_oppositeCarriagewayJunctions;	// 152 = 0x98
    Matrix_8746f91e _unitHeading;	// 160 = 0xa0
    _Bool _offRouteJunctionsValid;	// 168 = 0xa8
    Box_3d7e3c2c _offRouteJunctionSelectRect;	// 176 = 0xb0
    NSMutableArray *_offRouteJunctions;	// 208 = 0xd0
    struct PolylineCoordinate _routeUserOffset;	// 216 = 0xd8
    _Bool _routeFeatureMapValid;	// 224 = 0xe0
    struct unordered_map<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, geo::StdAllocator<std::pair<const std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, mdm::Allocator>> _routeFeatureMap;	// 232 = 0xe8
    _Bool _simplifiedRouteValid;	// 288 = 0x120
    struct vector<md::LabelPoint, geo::StdAllocator<md::LabelPoint, mdm::Allocator>> _simplifiedRoutePoints;	// 296 = 0x128
    unsigned long long _currentRoadStartSimplifiedPointIndex;	// 328 = 0x148
    _Bool _screenRouteValid;	// 336 = 0x150
    struct vector<RouteSegment, geo::StdAllocator<RouteSegment, mdm::Allocator>> _screenRouteSegments;	// 344 = 0x158
    unsigned long long _firstPOIAligningRouteSegment;	// 376 = 0x178
}

- (id).cxx_construct;	// IMP=0x0000000000cbcba0
- (void).cxx_destruct;	// IMP=0x0000000000cbc920
@property(retain, nonatomic) NSMutableArray *junctions; // @synthesize junctions=_junctions;
- (id)_nextIntersectionForRoad:(id)arg1;	// IMP=0x0000000000cbc600
- (id)nextRoadSegmentForRoad:(id)arg1;	// IMP=0x0000000000cbc220
- (id)_findInterTileJunctionForJunction:(id)arg1;	// IMP=0x0000000000cbbe30
- (id)_junctionForRoadEdge:(const struct GeoCodecsRoadEdge *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const void *)arg4;	// IMP=0x0000000000cbbc20
- (Matrix_8746f91e)unitHeading;	// IMP=0x0000000000cbbc10
- (id)junctionForRoad:(id)arg1 nearJunction:(_Bool)arg2 crossTileEdge:(_Bool)arg3;	// IMP=0x0000000000cbbaf0
- (void)setTiles:(const void *)arg1;	// IMP=0x0000000000cbb730
- (void)startingLabelLayoutWithContext:(struct NavContext *)arg1 routeUserOffset:(struct PolylineCoordinate)arg2;	// IMP=0x0000000000cbb6e0
- (void)routeJunctionsHaveChanged;	// IMP=0x0000000000cbb540
- (void)reset;	// IMP=0x0000000000cbb2e0
- (id)initWithJunctions:(id)arg1;	// IMP=0x0000000000cbaee0
- (void)debugDraw:(id)arg1 overlayConsole:(void *)arg2 navContext:(struct NavContext *)arg3;	// IMP=0x0000000000cc3c00
- (_Bool)prepareOppositeCarriagewayJunctions;	// IMP=0x0000000000cc2580
- (id)oppositeCarriagewayJunctions;	// IMP=0x0000000000cc2560
- (unsigned char)computeRoutePositionForPOIAtPixel:(const void *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;	// IMP=0x0000000000cc21f0
- (_Bool)collideRouteWithLabel:(id)arg1 routeCrossProduct:(float *)arg2 context:(struct NavContext *)arg3;	// IMP=0x0000000000cc20b0
- (void)_transformRouteToScreenWithContext:(struct NavContext *)arg1;	// IMP=0x0000000000cc1950
- (void)_updateSimplifiedRoute;	// IMP=0x0000000000cc1270
- (_Bool)isPriorRouteCollinearWithRoad:(id)arg1 distance:(float)arg2;	// IMP=0x0000000000cc0fc0
- (void)_findOffRouteJunctions;	// IMP=0x0000000000cc0d60
- (id)offRouteGraphJunctionsWithNavContext:(struct NavContext *)arg1 maxJunctions:(unsigned long long)arg2 isOnRoute:(_Bool)arg3;	// IMP=0x0000000000cc0220
- (void)_updateIntersectionsForDepth:(unsigned long long)arg1;	// IMP=0x0000000000cbfcc0
- (id)offRouteJunctionList;	// IMP=0x0000000000cbfca0
- (id)junctionListForDepth:(unsigned long long)arg1;	// IMP=0x0000000000cbfc10
- (unsigned long long)countReadyJunctionLists;	// IMP=0x0000000000cbfbc0
- (void)evaluateDualCarriagewayForJunction:(id)arg1 outputJunctionList:(id)arg2;	// IMP=0x0000000000cbe390
- (_Bool)_checkIfDualCarriageWayConnectorRoad:(id)arg1 fromJunction:(id)arg2 toJunction:(id)arg3 checkShields:(_Bool)arg4;	// IMP=0x0000000000cbdbd0
- (id)overpassJunctionForJunction:(id)arg1;	// IMP=0x0000000000cbd8a0
- (void)addRouteRoadEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2 isRouteRefineJunction:(_Bool)arg3 tile:(const void *)arg4 junctionList:(id)arg5;	// IMP=0x0000000000cbd770

@end

