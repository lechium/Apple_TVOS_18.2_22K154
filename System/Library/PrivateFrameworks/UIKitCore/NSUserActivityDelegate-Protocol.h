//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSInputStream, NSOutputStream, NSUserActivity;

@protocol NSUserActivityDelegate <NSObject>

@optional
- (void)userActivity:(NSUserActivity *)arg1 didReceiveInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
- (void)userActivityWasContinued:(NSUserActivity *)arg1;
- (void)userActivityWillSave:(NSUserActivity *)arg1;
@end

