//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchingSegment : NSObject
{
    unsigned int _startPointIndex;	// 8 = 0x8
    float _startRouteCoordinateOffset;	// 12 = 0xc
    float _endRouteCoordinateOffset;	// 16 = 0x10
    CDStruct_2c43369c _startCoordinate;	// 24 = 0x18
    CDStruct_2c43369c _endCoordinate;	// 40 = 0x28
    GEOComposedRouteStep *_step;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000117e838
- (id)description;	// IMP=0x000000000117e772

@end

