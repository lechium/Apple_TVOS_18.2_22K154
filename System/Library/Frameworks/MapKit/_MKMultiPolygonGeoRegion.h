//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MKMultiPolygonGeoRegion : NSObject
{
    NSArray *_polygons;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ddcac
@property(retain, nonatomic) NSArray *polygons; // @synthesize polygons=_polygons;
- (_Bool)_loadWithJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000dd878
- (_Bool)_loadWithRootJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000dd61f
- (_Bool)coordinateLiesInRegion:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000000dd4c4
- (id)initWithJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000dd452
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000dd330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

