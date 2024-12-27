//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, TKHostTokenConnection, TKTokenAccessRegistry, TKTokenServer;

@interface TKTokenClientConnection : NSObject
{
    TKTokenAccessRegistry *_accessRegistry;	// 8 = 0x8
    TKHostTokenConnection *_tokenConnection;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    TKTokenServer *_server;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000010327
// Error: Property attributes should begin with the type ('T') attribute, property name: server
// Property attributes: (null)

@property(readonly) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) TKHostTokenConnection *tokenConnection; // @synthesize tokenConnection=_tokenConnection;
- (void)terminate;	// IMP=0x00100000000102cf
- (void)ensureSlotWatcherRunningWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001024a
- (void)getSEPKeyEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000001018d
- (void)getWatcherEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x00100000000100b1
- (void)getConfigurationEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ffaa
- (void)getTokenEndpointForTokenID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f8bb
- (id)accessRegistry;	// IMP=0x001000000000f880
- (_Bool)isCaller:(id)arg1 allowedForToken:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000f5c1
- (void)getEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f504
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x001000000000f3d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

