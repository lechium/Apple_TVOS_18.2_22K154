//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@protocol _MKOverlayTileDataSource <NSObject>
@property(readonly, getter=isGeometryFlipped) _Bool geometryFlipped;
- (void)_cancelLoadingTileAtPath:(CDStruct_cbb88d5e)arg1;
- (void)loadTileAtPath:(CDStruct_cbb88d5e)arg1 result:(void (^)(id, NSError *))arg2;
@end

