//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFocusRegion.h"

__attribute__((visibility("hidden")))
@interface _UIFocusSpeedBumpRegion : _UIFocusRegion
{
    unsigned long long _speedBumpEdges;	// 8 = 0x8
}

@property(nonatomic) unsigned long long speedBumpEdges; // @synthesize speedBumpEdges=_speedBumpEdges;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;	// IMP=0x0000000000960ce2
- (_Bool)_shouldCropRegionToSearchArea;	// IMP=0x0000000000960cda
- (_Bool)_canBeOccludedByRegionsAbove;	// IMP=0x0000000000960cd2
- (_Bool)_canOccludeRegionsBelow;	// IMP=0x0000000000960cca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000960c5e
- (id)_focusRegionWithAdjustedFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000960bfe
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2 speedBumpEdges:(unsigned long long)arg3;	// IMP=0x0000000000960ba9
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000960b92

@end

