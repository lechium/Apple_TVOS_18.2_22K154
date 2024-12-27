//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOVectorTile;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeRoadBuilder
{
    struct deque<GEORoadEdge *, std::allocator<GEORoadEdge *>> _edges;	// 128 = 0x80
    GEOVectorTile *_retainedTile;	// 176 = 0xb0
}

- (id).cxx_construct;	// IMP=0x00000000012e06c5
- (void).cxx_destruct;	// IMP=0x00000000012e054c
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x00000000012e0523
- (id)_lastTile;	// IMP=0x00000000012e042c
- (id)_firstTile;	// IMP=0x00000000012e0340
- (Matrix_8746f91e)_lastPoint;	// IMP=0x00000000012e0261
- (Matrix_8746f91e)_firstPoint;	// IMP=0x00000000012e018d
- (unsigned long long)_connectionTypeForEdge:(id)arg1 points:(struct GeoCodecsVectorTilePoint *)arg2 connectingTilePoint:(Matrix_8746f91e)arg3;	// IMP=0x00000000012e0095
- (_Bool)_shouldFindEdgeBehind;	// IMP=0x00000000012e004c
- (_Bool)_shouldFindEdgeAhead;	// IMP=0x00000000012e000e
- (_Bool)_findEdgeBehindInTile:(id)arg1;	// IMP=0x00000000012df774
- (_Bool)_findEdgeAheadInTile:(id)arg1;	// IMP=0x00000000012de9b9
- (void)_buildCompleteEdge;	// IMP=0x00000000012de796
- (unsigned long long)_maxTileCount;	// IMP=0x00000000012de78b
- (void)dealloc;	// IMP=0x00000000012de74a
- (id)initWithMap:(id)arg1 roadFeature:(id)arg2 shouldFlip:(_Bool)arg3;	// IMP=0x00000000012de29a

@end

