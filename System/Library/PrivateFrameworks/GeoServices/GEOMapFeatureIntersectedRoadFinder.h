//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapFeatureMultiSegmentRoadFinder;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureIntersectedRoadFinder
{
    GEOMapFeatureMultiSegmentRoadFinder *_multiSegmentRoadFinder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006d458e
- (void)_tilesBorderingTile:(struct _GEOTileKey)arg1 atPoint:(struct GeoCodecsVectorTilePoint)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006d429a
- (id)_old_intersectedRoadsInAdjacentTile:(id)arg1 tileBorderPoint:(struct GeoCodecsVectorTilePoint)arg2 junction:(id)arg3 desiredRoadDirectionality:(unsigned long long)arg4 featuresToIgnore:(id)arg5;	// IMP=0x00000000006d3cfc
- (id)_intersectedRoadsInAdjacentTile:(id)arg1 tileBorderPoint:(struct GeoCodecsVectorTilePoint)arg2 junction:(id)arg3 desiredRoadDirectionality:(unsigned long long)arg4 muid:(unsigned long long)arg5 requireExactMuidMatch:(_Bool)arg6 featuresToIgnore:(id)arg7 shouldStop:(_Bool *)arg8;	// IMP=0x00000000006d3645
- (id)findUnjoinedRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 muid:(unsigned long long)arg3 requireExactMuidMatch:(_Bool)arg4 featuresToIgnore:(id)arg5 handler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000006d2266
- (id)_findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 muid:(unsigned long long)arg3 featuresToIgnore:(id)arg4 handler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000006d1b6e
- (id)findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006d1b39
- (id)findRoadsAtNextIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006d18fa
- (id)findRoadsAtPreviousIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006d16bb

@end

