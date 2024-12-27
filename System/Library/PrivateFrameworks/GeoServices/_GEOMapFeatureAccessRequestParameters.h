//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOTileLoader;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOMapFeatureAccessRequestParameters : NSObject
{
    _Bool allowNetworkTileLoad;	// 8 = 0x8
    _Bool flipNegativeTravelDirectionRoads;	// 9 = 0x9
    _Bool visitDoubleTravelDirectionRoadsTwice;	// 10 = 0xa
    _Bool allowStaleData;	// 11 = 0xb
    _Bool preferStaleData;	// 12 = 0xc
    _Bool joinAllRoadsByMuid;	// 13 = 0xd
    _Bool cachedTilesCallbackImmediately;	// 14 = 0xe
    _Bool _allowOfflineData;	// 15 = 0xf
    GEOTileLoader *tileLoader;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *queue;	// 24 = 0x18
    GEOApplicationAuditToken *auditToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000010aa227
@property(nonatomic) _Bool allowOfflineData; // @synthesize allowOfflineData=_allowOfflineData;
@property(nonatomic) _Bool cachedTilesCallbackImmediately; // @synthesize cachedTilesCallbackImmediately;
@property(nonatomic) _Bool joinAllRoadsByMuid; // @synthesize joinAllRoadsByMuid;
@property(nonatomic) _Bool preferStaleData; // @synthesize preferStaleData;
@property(nonatomic) _Bool allowStaleData; // @synthesize allowStaleData;
@property(nonatomic) _Bool visitDoubleTravelDirectionRoadsTwice; // @synthesize visitDoubleTravelDirectionRoadsTwice;
@property(nonatomic) _Bool flipNegativeTravelDirectionRoads; // @synthesize flipNegativeTravelDirectionRoads;
@property(nonatomic) _Bool allowNetworkTileLoad; // @synthesize allowNetworkTileLoad;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
@property(retain, nonatomic) GEOTileLoader *tileLoader; // @synthesize tileLoader;

@end

