//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCController, NSString;
@protocol GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCPlayerIndicatorXPCProxyClientEndpoint : NSObject
{
    GCController *_controller;	// 8 = 0x8
    id <GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface> _serverEndpoint;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
    long long _playerIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000f6e4e
@property long long playerIndex; // @synthesize playerIndex=_playerIndex;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f6dd0
- (void)invalidateConnection;	// IMP=0x00000000000f6d2c
- (void)refreshPlayerIndex;	// IMP=0x00000000000f6c6b
- (void)newPlayerIndex:(long long)arg1;	// IMP=0x00000000000f6bf6
- (void)_remoteEndpointSetPlayerIndex:(long long)arg1;	// IMP=0x00000000000f6b88
- (void)setController:(id)arg1;	// IMP=0x00000000000f6b5d
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x00000000000f692f
- (id)init;	// IMP=0x00000000000f6904
- (id)initWithIdentifier:(id)arg1 initialPlayerIndex:(long long)arg2;	// IMP=0x00000000000f67ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

