//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOActiveTileGroup;
@protocol GEOResourceManifestServerProxy;

@protocol GEOResourceManifestServerProxyDelegate <NSObject>
- (void)serverProxyNeedsWiFiResourceActivity:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxy:(id <GEOResourceManifestServerProxy>)arg1 didChangeActiveTileGroup:(GEOActiveTileGroup *)arg2 finishedCallback:(void (^)(void))arg3;
- (void)serverProxy:(id <GEOResourceManifestServerProxy>)arg1 didLoadActiveTileGroup:(GEOActiveTileGroup *)arg2;
@end

