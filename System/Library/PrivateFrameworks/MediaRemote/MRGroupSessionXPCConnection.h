//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol MRGroupSessionClientXPCProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRGroupSessionXPCConnection : NSObject
{
    id <MRGroupSessionClientXPCProtocol> _clientObject;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _invalidationHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000299cf5
@property(readonly, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) id <MRGroupSessionClientXPCProtocol> clientObject; // @synthesize clientObject=_clientObject;
- (void)sendMessage:(CDUnknownBlockType)arg1;	// IMP=0x0000000000299bd5
- (id)server;	// IMP=0x0000000000299a89
- (void)initializeConnection;	// IMP=0x000000000029937d
- (void)dealloc;	// IMP=0x0000000000299329
- (id)initWithClientObject:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002991c8

@end

