//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _GEORouteMatchingSegment;

__attribute__((visibility("hidden")))
@interface _GEOCandidateRouteMatch : NSObject
{
    _Bool _isGoodMatch;	// 8 = 0x8
    double _score;	// 16 = 0x10
    struct PolylineCoordinate _routeCoordinate;	// 24 = 0x18
    unsigned long long _stepIndex;	// 32 = 0x20
    double _distanceFromRoute;	// 40 = 0x28
    double _maxDistance;	// 48 = 0x30
    double _distanceMatchScore;	// 56 = 0x38
    double _distanceWeight;	// 64 = 0x40
    double _courseDelta;	// 72 = 0x48
    double _maxCourseDelta;	// 80 = 0x50
    double _courseMatchScore;	// 88 = 0x58
    double _courseWeight;	// 96 = 0x60
    double _distanceTraveledMatchScore;	// 104 = 0x68
    double _distanceTraveledWeight;	// 112 = 0x70
    double _distanceAlongRouteFromPreviousMatch;	// 120 = 0x78
    _GEORouteMatchingSegment *_segment;	// 128 = 0x80
    NSArray *_scoreInfos;	// 136 = 0x88
    CDStruct_2c43369c _locationCoordinate;	// 144 = 0x90
}

- (id).cxx_construct;	// IMP=0x000000000117ecd5
- (void).cxx_destruct;	// IMP=0x000000000117ecaa
- (id)description;	// IMP=0x000000000117ec2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000117eb07
- (id)initWithRoute:(id)arg1;	// IMP=0x000000000117e9f7

@end

