//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttendingStatesProvidingProxy, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSAttendingStatesServiceListener : NSObject
{
    CSAttendingStatesProvidingProxy *_attendingStatesProvidingProxy;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSXPCConnection *_activeConnection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000db553
- (void)setQueue:(id)arg1;	// IMP=0x00100000000db542
- (id)queue;	// IMP=0x00100000000db538
@property(retain, nonatomic) NSXPCConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic, setter=registerAttendingStatesProvidingProxy:) __weak CSAttendingStatesProvidingProxy *attendingStatesProvidingProxy; // @synthesize attendingStatesProvidingProxy=_attendingStatesProvidingProxy;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000db110
- (void)_cleanupConnection:(id)arg1 shouldInvalidate:(_Bool)arg2;	// IMP=0x00100000000daf84
- (void)listen;	// IMP=0x00100000000dae1a
- (id)init;	// IMP=0x00100000000dada8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

