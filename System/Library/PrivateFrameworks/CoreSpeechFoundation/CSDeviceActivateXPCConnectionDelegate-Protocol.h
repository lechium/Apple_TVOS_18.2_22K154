//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/NSObject-Protocol.h>

@class CSDeviceActivationXPCConnection, NSObject;
@protocol OS_xpc_object;

@protocol CSDeviceActivateXPCConnectionDelegate <NSObject>

@optional
- (void)CSActivationXPCConnectionReceivedClientError:(CSDeviceActivationXPCConnection *)arg1 clientError:(NSObject<OS_xpc_object> *)arg2 client:(NSObject<OS_xpc_object> *)arg3;
- (void)handleXPCMessage:(NSObject<OS_xpc_object> *)arg1 messageBody:(NSObject<OS_xpc_object> *)arg2 client:(NSObject<OS_xpc_object> *)arg3;
@end

