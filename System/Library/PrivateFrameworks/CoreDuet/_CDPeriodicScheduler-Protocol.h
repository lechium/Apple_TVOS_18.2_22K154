//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/NSObject-Protocol.h>

@class NSString, _CDPeriodicSchedulerJob;

@protocol _CDPeriodicScheduler <NSObject>
- (void)unregisterJob:(NSString *)arg1;
- (void)registerJob:(_CDPeriodicSchedulerJob *)arg1;
@end

