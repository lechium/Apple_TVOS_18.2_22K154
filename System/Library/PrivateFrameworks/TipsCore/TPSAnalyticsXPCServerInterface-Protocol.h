//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/NSObject-Protocol.h>

@class NSArray, TPSAnalyticsEvent;

@protocol TPSAnalyticsXPCServerInterface <NSObject>
- (oneway void)logAnalyticsEvents:(NSArray *)arg1;
- (oneway void)logAnalyticsEvent:(TPSAnalyticsEvent *)arg1;
@end

