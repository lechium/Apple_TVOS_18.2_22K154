//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection, TaskQueue, XPCClient;

@interface RequestBrokerClient : NSObject
{
    XPCClient *_client;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableArray *_requests;	// 24 = 0x18
    TaskQueue *_taskQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000211257
- (id)description;	// IMP=0x001000000021117e
- (void)submitRequest:(id)arg1 delegate:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000021105e
- (void)cancelAllRequestsWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000210d27

@end

