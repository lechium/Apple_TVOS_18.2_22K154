//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/NSObject-Protocol.h>

@class GEOMapRegion;

@protocol VKCameraController <NSObject>
@property(readonly, nonatomic) struct RunLoopController *runLoopController;
@property(readonly, nonatomic) struct AnimationRunner *animationRunner;
@property(readonly, nonatomic) void *mapDataAccess;
@property(readonly, nonatomic) _Bool isFullyPitched;
@property(readonly, nonatomic) _Bool isRotated;
@property(readonly, nonatomic) _Bool isPitched;
@property(readonly, nonatomic) double maxPitch;
@property(readonly, nonatomic) double minPitch;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) GEOMapRegion *mapRegionIgnoringEdgeInsets;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(nonatomic) double pitch;
@property(nonatomic) double heading;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_2c43369c centerCoordinate;
- (long long)tileSize;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
@end

