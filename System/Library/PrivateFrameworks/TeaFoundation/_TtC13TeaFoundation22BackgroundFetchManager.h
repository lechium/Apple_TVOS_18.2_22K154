//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13TeaFoundation22BackgroundFetchManager : NSObject
{
    MISSING_TYPE *journal;	// 8 = 0x8
    MISSING_TYPE *workers;	// 16 = 0x10
    MISSING_TYPE *configuredTriggers;	// 24 = 0x18
    MISSING_TYPE *networkReachability;	// 32 = 0x20
    MISSING_TYPE *backgroundTaskSchedulingQueue;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_locationManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b3876
- (id)init;	// IMP=0x00000000000b102a
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000b41a9
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;	// IMP=0x00000000000b3b3e

@end

