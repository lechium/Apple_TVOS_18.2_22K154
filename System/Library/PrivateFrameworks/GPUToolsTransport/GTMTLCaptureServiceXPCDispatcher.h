//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTURLAccessProviderXPCProxy;
@protocol GTMTLCaptureService;

@interface GTMTLCaptureServiceXPCDispatcher
{
    id <GTMTLCaptureService> _implInstance;	// 8 = 0x8
    GTURLAccessProviderXPCProxy *_urlService;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012650
- (void)nextRequestID:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00000000000125a4
- (void)query_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000012554
- (void)update_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00000000000122d0
- (void)startWithDescriptor_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000011e47
- (void)broadcastDisconnect:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000011dd4
- (void)deregisterObserver_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000011d2d
- (void)registerObserver_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000011c50
- (void)stop:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000011c33
- (id)initWithService:(id)arg1 properties:(id)arg2 notifyConnection:(id)arg3;	// IMP=0x0000000000011a74

@end

