//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/NSObject-Protocol.h>

@class CATTaskClient, NSDictionary, NSError, NSString;

@protocol CATTaskClientDelegate <NSObject>
- (void)client:(CATTaskClient *)arg1 didInterruptWithError:(NSError *)arg2;

@optional
- (void)clientDidInvalidate:(CATTaskClient *)arg1;
- (void)clientWillInvalidate:(CATTaskClient *)arg1;
- (void)clientDidDisconnect:(CATTaskClient *)arg1;
- (void)client:(CATTaskClient *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)clientDidConnect:(CATTaskClient *)arg1;
@end

