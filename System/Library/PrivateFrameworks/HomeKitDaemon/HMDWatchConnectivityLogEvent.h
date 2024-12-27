//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

__attribute__((visibility("hidden")))
@interface HMDWatchConnectivityLogEvent : HMMLogEvent
{
    _Bool _reportComplete;	// 8 = 0x8
    unsigned long long _watchAddedNotificationCount;	// 16 = 0x10
    unsigned long long _watchRemovedNotificationCount;	// 24 = 0x18
}

@property(nonatomic, getter=isReportComplete) _Bool reportComplete; // @synthesize reportComplete=_reportComplete;
@property(nonatomic) unsigned long long watchRemovedNotificationCount; // @synthesize watchRemovedNotificationCount=_watchRemovedNotificationCount;
@property(nonatomic) unsigned long long watchAddedNotificationCount; // @synthesize watchAddedNotificationCount=_watchAddedNotificationCount;
- (id)init;	// IMP=0x000000000064b876

@end

