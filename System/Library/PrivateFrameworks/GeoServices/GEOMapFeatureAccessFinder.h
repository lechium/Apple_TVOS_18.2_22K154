//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _GEOMapFeatureAccessRequest, _GEOMapFeatureAccessRequestParameters;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureAccessFinder : NSObject
{
    _GEOMapFeatureAccessRequest *_existingRequest;	// 8 = 0x8
    _GEOMapFeatureAccessRequestParameters *_requestParameters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001356585
@property(retain, nonatomic) _GEOMapFeatureAccessRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
- (void)setExistingRequest:(id)arg1;	// IMP=0x00000000013564e0
- (id)initWithRequestParameters:(id)arg1;	// IMP=0x0000000001356461
- (id)init;	// IMP=0x000000000135641d
- (_Bool)_boundingCircle:(const void *)arg1 intersectsPoints:(struct GeoCodecsVectorTilePoint *)arg2 pointCount:(unsigned long long)arg3;	// IMP=0x000000000135684b
- (_Bool)_boundingCircle:(const void *)arg1 intersectsTransitLink:(id)arg2;	// IMP=0x000000000135678e
- (_Bool)_boundingCircle:(const void *)arg1 withBuildingTilePoints:(vector_8ad7b88a)arg2;	// IMP=0x000000000135676b
- (_Bool)_boundingCircle:(const void *)arg1 intersectsFeature:(id)arg2;	// IMP=0x00000000013566af
- (Sphere_67aef8b0)_boundingCircleWithCenter:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 inTile:(struct _GEOTileKey)arg3;	// IMP=0x0000000001356645
- (_Bool)_featureHasValidGeometry:(id)arg1;	// IMP=0x00000000013565ad

@end

