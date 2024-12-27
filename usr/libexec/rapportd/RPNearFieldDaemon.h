//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, RPNearFieldDaemonController;
@protocol OS_dispatch_queue;

@interface RPNearFieldDaemon : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    _Bool _invalidateDone;	// 10 = 0xa
    _Bool _prefEnableDiscovery;	// 11 = 0xb
    NSXPCListener *_xpcListener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    CDUnknownBlockType _transactionChangedHandler;	// 32 = 0x20
    RPNearFieldDaemonController *_nearFieldController;	// 40 = 0x28
}

+ (id)sharedNearFieldDaemon;	// IMP=0x002000000005bfdf
- (void).cxx_destruct;	// IMP=0x002000000005cac6
@property(retain, nonatomic) RPNearFieldDaemonController *nearFieldController; // @synthesize nearFieldController=_nearFieldController;
@property(copy, nonatomic) CDUnknownBlockType transactionChangedHandler; // @synthesize transactionChangedHandler=_transactionChangedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)_exportedInterface;	// IMP=0x001000000005ca0e
- (id)_remoteObjectInterface;	// IMP=0x001000000005c92c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000005c55d
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x001000000005c555
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005c54d
- (void)prefsChanged;	// IMP=0x001000000005c53b
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x001000000005c533
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x001000000005c52d
- (void)_updateNearFieldDiscoveryPref;	// IMP=0x001000000005c4ad
- (void)_invalidated;	// IMP=0x001000000005c426
- (void)_invalidate;	// IMP=0x001000000005c355
- (void)invalidate;	// IMP=0x001000000005c2aa
- (void)_activate;	// IMP=0x001000000005c144
- (void)activate;	// IMP=0x001000000005c0d3
@property(readonly, nonatomic) _Bool hasCurrentTransaction;
- (id)init;	// IMP=0x001000000005c034

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

