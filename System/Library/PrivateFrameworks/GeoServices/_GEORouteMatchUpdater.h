//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOComposedRoute, GEOMapFeatureAccess, GEOMotionContext, GEOTransitRouteMatcher;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater : NSObject
{
    GEOTransitRouteMatcher *_routeMatcher;	// 8 = 0x8
    GEOComposedRoute *_route;	// 16 = 0x10
    GEOMapFeatureAccess *_mapFeatureAccess;	// 24 = 0x18
    GEOMotionContext *_motionContext;	// 32 = 0x20
    GEOApplicationAuditToken *_auditToken;	// 40 = 0x28
    double _stationRadius;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000113e2dc
- (double)_stationRadiusForStation:(id)arg1 accessPoint:(id)arg2 adjacentWalkingLegCoordinate:(CDStruct_c3b9c2ee)arg3;	// IMP=0x000000000113e10e
- (_Bool)_isLocation:(id)arg1 nearTransitPoint:(CDStruct_c3b9c2ee)arg2 transitID:(unsigned long long)arg3 featureSize:(double)arg4;	// IMP=0x000000000113d978
- (_Bool)_isLocation:(id)arg1 nearStation:(id)arg2;	// IMP=0x000000000113d850
- (_Bool)_isLocation:(id)arg1 nearStop:(id)arg2;	// IMP=0x000000000113d750
- (unsigned long long)priority;	// IMP=0x000000000113d748
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x000000000113d740
- (id)initWithTransitRouteMatcher:(id)arg1;	// IMP=0x000000000113d5c4

@end

