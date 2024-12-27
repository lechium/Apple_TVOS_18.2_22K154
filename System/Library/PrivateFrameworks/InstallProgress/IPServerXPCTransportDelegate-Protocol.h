//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallProgress/NSObject-Protocol.h>

@class IPServerXPCTransport, IPXPCClient, NSXPCConnection;
@protocol IPXPCClientDelegate;

@protocol IPServerXPCTransportDelegate <NSObject>
- (void)transport:(IPServerXPCTransport *)arg1 clientDisconnected:(IPXPCClient *)arg2;
- (void)transport:(IPServerXPCTransport *)arg1 acceptedClient:(IPXPCClient *)arg2;
- (_Bool)transport:(IPServerXPCTransport *)arg1 shouldAcceptConnection:(NSXPCConnection *)arg2;
- (id <IPXPCClientDelegate>)transport:(IPServerXPCTransport *)arg1 requestDelegateForClient:(IPXPCClient *)arg2;
@end

