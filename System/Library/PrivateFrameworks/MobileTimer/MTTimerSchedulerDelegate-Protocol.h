//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTScheduledObject, MTTimer, MTTimerScheduler;

@protocol MTTimerSchedulerDelegate <NSObject>
- (void)scheduler:(MTTimerScheduler *)arg1 didFireTimer:(MTScheduledObject *)arg2;
- (void)scheduler:(MTTimerScheduler *)arg1 didChangeNextTimer:(MTTimer *)arg2;
@end

