//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDeviceActivationEvent, CSDeviceActivationEventNotificationHandler;

@protocol CSDeviceActivationEventNotificationHandlerDelegate <NSObject>
- (void)activationEventNotificationHandler:(CSDeviceActivationEventNotificationHandler *)arg1 event:(CSDeviceActivationEvent *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

