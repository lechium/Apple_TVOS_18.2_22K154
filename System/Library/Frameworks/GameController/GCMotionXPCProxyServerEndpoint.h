//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GCMotionXPCProxyRemoteClientEndpointInterface, GCMotionXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription, _GCIPCEndpointConnection;

__attribute__((visibility("hidden")))
@interface GCMotionXPCProxyServerEndpoint : NSObject
{
    id <GCMotionXPCProxyRemoteClientEndpointInterface> _clientEndpoint;	// 8 = 0x8
    id <_GCIPCEndpointConnection> _connection;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    unsigned long long _pendingUpdates;	// 40 = 0x28
    _Bool _sensorsActive;	// 48 = 0x30
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 56 = 0x38
    id <GCMotionXPCProxyServerEndpointDelegate> _delegate;	// 64 = 0x40
    id _userInfo;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002c72c
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <GCMotionXPCProxyServerEndpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool sensorsActive; // @synthesize sensorsActive=_sensorsActive;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c66d
- (void)invalidateConnection;	// IMP=0x000000000002c5ba
- (void)fetchSensorsActiveWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c510
- (void)newSensorsActive:(_Bool)arg1;	// IMP=0x000000000002c466
- (_Bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002c083
- (void)invalidateClient;	// IMP=0x000000000002bfc2
@property(readonly, nonatomic) id <_GCControllerComponentDescription> receiverDescription;
- (id)initWithInitialValue:(_Bool)arg1;	// IMP=0x000000000002bf2a
- (id)initWithIdentifier:(id)arg1 initialValue:(_Bool)arg2;	// IMP=0x000000000002beab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

