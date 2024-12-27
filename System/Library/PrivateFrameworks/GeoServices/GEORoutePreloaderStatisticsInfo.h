//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEORoutePreloaderStatisticsInfo : NSObject
{
    geo_isolater *_isolation;	// 8 = 0x8
    int _transportType;	// 16 = 0x10
    double _startMonotonicTimestamp;	// 24 = 0x18
    unsigned long long _nonPreloadedTilesLoadedFromNetwork;	// 32 = 0x20
    unsigned long long _nonPreloadedTilesFailed;	// 40 = 0x28
    _Bool _loggingEnabled;	// 48 = 0x30
    unsigned long long _counts[7];	// 56 = 0x38
    NSMutableDictionary *_tileTypeToCount;	// 112 = 0x70
    NSMutableDictionary *_tileTypeToBytes;	// 120 = 0x78
    NSMutableDictionary *_tileTypeToMissedCount;	// 128 = 0x80
    NSMutableDictionary *_tileTypeToMissedBytes;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000013df191
- (void)finishAndReportIfNecessaryForDistance:(double)arg1;	// IMP=0x00000000013dd373
- (void)missedTileKey:(const struct _GEOTileKey *)arg1 loadedSuccessfully:(_Bool)arg2 sizeInBytes:(unsigned long long)arg3;	// IMP=0x00000000013dd04e
- (void)loadedTileKey:(const struct _GEOTileKey *)arg1 source:(long long)arg2 sizeInBytes:(unsigned long long)arg3;	// IMP=0x00000000013dcd41
- (void)incrementTileLoadStatistic:(long long)arg1 amount:(unsigned long long)arg2;	// IMP=0x00000000013dccce
- (id)initWithTransportType:(int)arg1;	// IMP=0x00000000013dcc18
- (id)init;	// IMP=0x00000000013dcbd4

@end

