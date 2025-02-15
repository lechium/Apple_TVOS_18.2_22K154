//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDRequest, RequestBrokerClient;
@protocol ASDRequestDelegate, RequestController;

@interface RequestProxy : NSObject
{
    RequestBrokerClient *_broker;	// 8 = 0x8
    id <ASDRequestDelegate> _delegate;	// 16 = 0x10
    ASDRequest<RequestController> *_request;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000c6d7f
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c6d66
- (id)remoteObjectProxy;	// IMP=0x00100000000c6d4d
- (void)startWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c6bff
- (void)cancelWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c6ab1
- (id)init;	// IMP=0x00100000000c69e1

@end

