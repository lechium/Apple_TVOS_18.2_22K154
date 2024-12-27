//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPServerDelegate;

__attribute__((visibility("hidden")))
@interface _RWITCPServer : NSObject
{
    int _listenSocket;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serverQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_serverSource;	// 24 = 0x18
    NSMutableArray *_connections;	// 32 = 0x20
    id <_RWITCPServerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000058eb
@property(readonly, nonatomic) __weak id <_RWITCPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)connectionClosed:(id)arg1;	// IMP=0x000000000000573c
- (_Bool)_createListenDispatchSource;	// IMP=0x000000000000545c
- (_Bool)_listenOnLaunchdProvidedSocket:(const char *)arg1;	// IMP=0x0000000000005354
- (_Bool)_listenOnPort:(unsigned short)arg1;	// IMP=0x00000000000051e0
- (void)dealloc;	// IMP=0x00000000000051a3
- (id)initWithLaunchdSocketName:(const char *)arg1 delegate:(id)arg2;	// IMP=0x0000000000005148
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;	// IMP=0x00000000000050ec
- (id)_initWithDelegate:(id)arg1;	// IMP=0x000000000000504f

@end

