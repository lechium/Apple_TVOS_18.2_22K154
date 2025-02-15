//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, SDStatusMonitor;
@protocol OS_dispatch_source, SDAirDropPublisherDelegate;

@interface SDAirDropPublisher : NSObject
{
    NSNumber *_port;	// 8 = 0x8
    long long _retryCount;	// 16 = 0x10
    struct __SecIdentity *_identity;	// 24 = 0x18
    struct __CFNetService *_service;	// 32 = 0x20
    SDStatusMonitor *_monitor;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_restartTimer;	// 48 = 0x30
    NSMutableDictionary *_txtRecord;	// 56 = 0x38
    NSMutableDictionary *_properties;	// 64 = 0x40
    _Bool _bonjourNameConflictDetected;	// 72 = 0x48
    id <SDAirDropPublisherDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000002108a
@property __weak id <SDAirDropPublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;	// IMP=0x0010000000021020
- (void)stop;	// IMP=0x0010000000020efa
- (void)start;	// IMP=0x0010000000020e99
- (void)publish;	// IMP=0x0010000000020c21
- (void)removeObservers;	// IMP=0x0010000000020bce
- (void)addObservers;	// IMP=0x0010000000020b05
- (void)somethingChanged:(id)arg1;	// IMP=0x0010000000020af3
- (void)updateTXTRecordAndNotify;	// IMP=0x00100000000207fb
- (void)publishCallBack:(CDStruct_87dc826d *)arg1;	// IMP=0x001000000002059f
- (void)dealloc;	// IMP=0x0010000000020553
- (id)initWithPort:(id)arg1 identity:(struct __SecIdentity *)arg2;	// IMP=0x0010000000020396

@end

