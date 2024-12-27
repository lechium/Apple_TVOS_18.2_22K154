//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSDaemon, NSMutableArray, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

@interface APSTaskListener : NSObject
{
    NSXPCListener *_taskListener;	// 8 = 0x8
    NSXPCInterface *_interface;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableArray *_activeServers;	// 32 = 0x20
    APSDaemon *_daemon;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000007d8af
@property(readonly, nonatomic) NSMutableArray *activeServers; // @synthesize activeServers=_activeServers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(readonly, nonatomic) NSXPCListener *taskListener; // @synthesize taskListener=_taskListener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000007d409
- (void)_cleanupConnection:(id)arg1;	// IMP=0x001000000007d26a
- (void)dealloc;	// IMP=0x001000000007d1d8
- (id)initWithQueue:(id)arg1 apsDaemon:(id)arg2;	// IMP=0x001000000007d02e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

