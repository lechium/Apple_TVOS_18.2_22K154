//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCController, NSString;
@protocol GCGameIntentXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCGameIntentXPCProxyClientEndpoint : NSObject
{
    GCController *_controller;	// 8 = 0x8
    id <GCGameIntentXPCProxyRemoteServerEndpointInterface> _serverEndpoint;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003e772
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)triggerGestureGameIntentGameCenter;	// IMP=0x000000000003e679
- (void)triggerGestureGameIntentAppLibrary;	// IMP=0x000000000003e594
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e534
- (void)invalidateConnection;	// IMP=0x000000000003e490
- (void)setController:(id)arg1;	// IMP=0x000000000003e47f
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x000000000003e261
- (id)init;	// IMP=0x000000000003e236
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000003e132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

