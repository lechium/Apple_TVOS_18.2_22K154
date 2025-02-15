//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEORouteBuilder : NSObject
{
}

+ (id)_cellularCoverageForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2;	// IMP=0x0000000000fb3ff0
+ (id)_visualInfosForGuidanceEvents:(id)arg1 steps:(id)arg2 coordinates:(id)arg3;	// IMP=0x0000000000fb3b43
+ (_Bool)_isGuidanceEventAtEndOfLeg:(int)arg1;	// IMP=0x0000000000fb3b34
+ (id)_guidanceEventsForGeoWaypointRoute:(id)arg1 legs:(id)arg2 steps:(id)arg3 coordinates:(id)arg4;	// IMP=0x0000000000fb331f
+ (id)buildMapRegionFromPointSections:(id)arg1;	// IMP=0x0000000000fb2f71
+ (unsigned long long)segmentIndexForPointIndex:(unsigned long long)arg1 withSegments:(id)arg2;	// IMP=0x0000000000fb2d67
+ (id)_segmentForStepIndex:(unsigned long long)arg1 withSegments:(id)arg2;	// IMP=0x0000000000fb2bb3
+ (unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1 withSteps:(id)arg2;	// IMP=0x0000000000fb29a9
+ (id)segmentForPointIndex:(unsigned long long)arg1 withSegments:(id)arg2 andSteps:(id)arg3;	// IMP=0x0000000000fb2900
+ (id)buildPointSectionsWithSteps:(id)arg1 segments:(id)arg2 coordinates:(id)arg3;	// IMP=0x0000000000fb20fd
+ (id)_composedRouteLegForStartStep:(id)arg1 endStep:(id)arg2 startSegment:(id)arg3 endSegment:(id)arg4 custodian:(id)arg5 geoRouteLeg:(id)arg6 legIndex:(unsigned long long)arg7 origin:(id)arg8 destination:(id)arg9 arrivalParameters:(id)arg10 legLength:(double)arg11;	// IMP=0x0000000000fb1d5c
+ (id)_composedRouteSegmentForStartStep:(id)arg1 andEndStep:(id)arg2 segmentIndex:(unsigned long long)arg3 andCustodian:(id)arg4;	// IMP=0x0000000000fb194c
+ (id)_composedRouteStepWithTransportType:(int)arg1 andCustodian:(id)arg2 geoRouteLeg:(id)arg3 forGeoStep:(id)arg4 withStepIndex:(unsigned long long)arg5 stepStartPointIndex:(unsigned long long)arg6 legStartPointIndex:(unsigned long long)arg7;	// IMP=0x0000000000fb1683
+ (id)_composedRouteStepWithTransportType:(int)arg1 andCustodian:(id)arg2 geoRouteLeg:(id)arg3 forGeoStep:(id)arg4 withStepIndex:(unsigned long long)arg5 startRouteCoordinate:(struct PolylineCoordinate)arg6 endRouteCoordinate:(struct PolylineCoordinate)arg7 maneuverStartRouteCoordinate:(struct PolylineCoordinate)arg8;	// IMP=0x0000000000fb14d5
+ (void)_componentsForGeoWaypointRoute:(id)arg1 initializerData:(id)arg2 coordinates:(id)arg3 custodian:(id)arg4 outLegs:(out id *)arg5 outSegments:(out id *)arg6 outSteps:(out id *)arg7;	// IMP=0x0000000000faf5e0
+ (id)_unpackedPointsDataForGeoRoute:(id)arg1;	// IMP=0x0000000000faf387
+ (id)_coordinatesForGeoWaypointRoute:(id)arg1;	// IMP=0x0000000000fae7bf
+ (_Bool)_shouldPreserveRouteSourceForPurpose:(int)arg1;	// IMP=0x0000000000fae7a6
+ (id)outputForGeoWaypointRoute:(id)arg1 initializerData:(id)arg2 custodian:(id)arg3;	// IMP=0x0000000000fadcf4

@end

