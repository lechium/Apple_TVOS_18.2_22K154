//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCListener;
@protocol SHServiceProvider;

@interface SHConnectionListener : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_connectionHandles;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
    id <SHServiceProvider> _serviceProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000059a7
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) id <SHServiceProvider> serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSMutableArray *connectionHandles; // @synthesize connectionHandles=_connectionHandles;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000005218
- (void)stopListening;	// IMP=0x00100000000051db
- (void)listen;	// IMP=0x001000000000519e
- (id)initWithServiceProvider:(id)arg1 listener:(id)arg2;	// IMP=0x00100000000050be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

