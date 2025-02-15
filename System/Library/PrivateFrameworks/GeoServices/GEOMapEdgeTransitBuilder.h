//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOMapEdgeTransitBuilder
{
    struct deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>> _pieces;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x00000000009a3ae9
- (void).cxx_destruct;	// IMP=0x00000000009a3ad8
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x00000000009a3aaf
- (id)_lastTile;	// IMP=0x00000000009a3a6b
- (id)_firstTile;	// IMP=0x00000000009a3a32
- (Matrix_8746f91e)_lastPoint;	// IMP=0x00000000009a396e
- (Matrix_8746f91e)_firstPoint;	// IMP=0x00000000009a38b5
- (_Bool)_shouldFindEdgeBehind;	// IMP=0x00000000009a3781
- (_Bool)_shouldFindEdgeAhead;	// IMP=0x00000000009a3659
- (_Bool)_findEdgeBehindInTile:(id)arg1;	// IMP=0x00000000009a2d9c
- (_Bool)_findEdgeAheadInTile:(id)arg1;	// IMP=0x00000000009a212b
- (void)_buildCompleteEdge;	// IMP=0x00000000009a2038
- (unsigned long long)_maxTileCount;	// IMP=0x00000000009a202d
- (id)initWithMap:(id)arg1 firstPiece:(const struct TransitEdgePiece *)arg2;	// IMP=0x00000000009a1cc0

@end

