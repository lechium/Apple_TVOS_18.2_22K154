//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol ADDeviceContextConnectionDelegate, OS_dispatch_queue;

@interface ADDeviceContextConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    id <ADDeviceContextConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _isInvalid;	// 32 = 0x20
    _Bool _isUpdatingLocalDeviceContext;	// 33 = 0x21
    CDUnknownBlockType _updateLocalDeviceContextReply;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000153d01
- (void)_endUpdateLocalDeviceContext;	// IMP=0x0010000000153bda
- (void)_beginUpdateLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000153aed
- (id)_remoteServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000153965
- (void)_invalidate;	// IMP=0x001000000015385e
- (void)_clearXPCConnection;	// IMP=0x001000000015377c
- (void)_handleXPCConnectionInterruption;	// IMP=0x00100000001536bd
- (void)_handleXPCConnectionInvalidation;	// IMP=0x00100000001535fe
- (void)invalidate;	// IMP=0x00100000001535b3
- (oneway void)donateSerializedContextMapByPrivacyClass:(id)arg1 withMetadataMap:(id)arg2 forType:(id)arg3 pushToRemote:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000015343f
- (oneway void)endUpdateLocalDeviceContext;	// IMP=0x001000000015342d
- (oneway void)beginUpdateLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000015341b
- (oneway void)getLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000153227
- (void)updateLocalDeviceContext:(id)arg1;	// IMP=0x001000000015319a
- (id)initWithQueue:(id)arg1 xpcConnection:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000152e36
- (void)dealloc;	// IMP=0x0010000000152d81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

